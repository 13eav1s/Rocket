#pragma once
#include "counting.h"
#include "Point.h"

//Конструктор класса counting в котором передаются значения из текстбоксов.
counting::counting(String^ angle, String^ force, String^ len, String^ fuel, String^ mass, String^ massfuel)
{
	this->angle = Convert::ToDouble(angle);
	this->force = Convert::ToDouble(force);
	this->len = Convert::ToDouble(len);
	this->fuel = Convert::ToDouble(fuel);
	this->mass = Convert::ToDouble(mass);
	this->massfuel = Convert::ToDouble(massfuel);
}

//Метод класса counting который возвращает тип vector. Метод возвращает координаты всех точек на траектории
vector<point> counting::Coordinates(double angle){

	//сохраняем массу топлива
	double massfuelsave = massfuel;

	// Проверка на то что программа начинает исполнение с нажатия на кнопку calck
	if (angle < 0)
		angle = this->angle;
	//Перевод угла из градусов в радианы
	angle *= (M_PI) / 180;

	double ax, ay, xx, axx, x, y, vx, vy, b, y3, x3, e;

	//находим расход топлива за секунду (кг)
	e = massfuel / fuel;
	vector<point> xy;
	i = 0;
	//находим ускорение по X и Y
	ax = (force * cos(angle) / (mass + massfuel));
	ay = (force * sin(angle) / (mass + massfuel)) - g;
	//находим траекторию разгона по направляющей
	x = 0;
	y = 0;
	xx = 0;
	axx = (force / mass + massfuel) - (g * sin(angle));
	while (x < len * cos(angle))
	{
		xx += dt2d2 * axx * i * i;
		x = xx * cos(angle);
		y = xx * sin(angle);
		xy.push_back(point(x, y));
		i++;
		massfuel -= e * dt;
	}
	//находим скорость по x y
	vx = dt * axx * cos(angle) * i;
	vy = dt * axx * sin(angle) * i;
	//находим траекторию подъема на двигателе
	while (dt * i <= fuel)
	{
		//находим ускорение для каждого момента времени
		ax = (force * (vx / sqrt(pow(vx, 2) + pow(vy, 2))) / (mass + massfuel));
		ay = (force * (vy / sqrt(pow(vx, 2) + pow(vy, 2))) / (mass + massfuel)) - g;

		//находим координаты на каждый момент времени
		x += vx * dt + dt2d2 * ax;
		y += vy * dt + dt2d2 * ay;

		//находим скорость по X Y в каждый момент времени
		vx += ax * dt;
		vy += ay * dt;

		//проверка на то что ракета не врезалась в землю
		if (y < 0)
		{
			point xya = xy[xy.size() - 1];
			double endx = -xya.y * (x - xya.x) / (y - xya.y) + xya.x;
			xy.push_back(point(endx, 0));
			break;
		}

		//добавление точек траектории
		xy.push_back(point(x, y));
		i++;

		//вычитаем потраченное топливо
		massfuel -= e * dt;
	}

	//траектория при отработавшем двигателе
	b = 0; y3 = 0;
	while (y + y3 > 0)
	{

		//находим координаты точек
		x3 = vx * b;
		y3 = vy * b - g * pow(b, 2) / 2;

		//проверка на то что ракета не врезалась в землю
		if (y + y3 < 0)
		{
			point xya = xy[xy.size() - 1]; //последний элемент вектора XY

			double endx = -xya.y * (x + x3 - xya.x) / (y + y3 - xya.y) + xya.x;
			//добавдление последних координат траектории
			xy.push_back(point(endx, 0));

			break;
		}

		//Добавление координат на траекторию
		xy.push_back(point(x + x3, y + y3));

		b += dt;
	}

	// возвращаем значение массы топлива
	massfuel = massfuelsave;

	return xy;
}

