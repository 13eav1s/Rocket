#pragma once
#include "counting.h"
#include "Point.h"

//����������� ������ counting � ������� ���������� �������� �� �����������.
counting::counting(String^ angle, String^ force, String^ len, String^ fuel, String^ mass, String^ massfuel)
{
	this->angle = Convert::ToDouble(angle);
	this->force = Convert::ToDouble(force);
	this->len = Convert::ToDouble(len);
	this->fuel = Convert::ToDouble(fuel);
	this->mass = Convert::ToDouble(mass);
	this->massfuel = Convert::ToDouble(massfuel);
}

//����� ������ counting ������� ���������� ��� vector. ����� ���������� ���������� ���� ����� �� ����������
vector<point> counting::Coordinates(double angle){

	//��������� ����� �������
	double massfuelsave = massfuel;

	// �������� �� �� ��� ��������� �������� ���������� � ������� �� ������ calck
	if (angle < 0)
		angle = this->angle;
	//������� ���� �� �������� � �������
	angle *= (M_PI) / 180;

	double ax, ay, xx, axx, x, y, vx, vy, b, y3, x3, e;

	//������� ������ ������� �� ������� (��)
	e = massfuel / fuel;
	vector<point> xy;
	i = 0;
	//������� ��������� �� X � Y
	ax = (force * cos(angle) / (mass + massfuel));
	ay = (force * sin(angle) / (mass + massfuel)) - g;
	//������� ���������� ������� �� ������������
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
	//������� �������� �� x y
	vx = dt * axx * cos(angle) * i;
	vy = dt * axx * sin(angle) * i;
	//������� ���������� ������� �� ���������
	while (dt * i <= fuel)
	{
		//������� ��������� ��� ������� ������� �������
		ax = (force * (vx / sqrt(pow(vx, 2) + pow(vy, 2))) / (mass + massfuel));
		ay = (force * (vy / sqrt(pow(vx, 2) + pow(vy, 2))) / (mass + massfuel)) - g;

		//������� ���������� �� ������ ������ �������
		x += vx * dt + dt2d2 * ax;
		y += vy * dt + dt2d2 * ay;

		//������� �������� �� X Y � ������ ������ �������
		vx += ax * dt;
		vy += ay * dt;

		//�������� �� �� ��� ������ �� ��������� � �����
		if (y < 0)
		{
			point xya = xy[xy.size() - 1];
			double endx = -xya.y * (x - xya.x) / (y - xya.y) + xya.x;
			xy.push_back(point(endx, 0));
			break;
		}

		//���������� ����� ����������
		xy.push_back(point(x, y));
		i++;

		//�������� ����������� �������
		massfuel -= e * dt;
	}

	//���������� ��� ������������ ���������
	b = 0; y3 = 0;
	while (y + y3 > 0)
	{

		//������� ���������� �����
		x3 = vx * b;
		y3 = vy * b - g * pow(b, 2) / 2;

		//�������� �� �� ��� ������ �� ��������� � �����
		if (y + y3 < 0)
		{
			point xya = xy[xy.size() - 1]; //��������� ������� ������� XY

			double endx = -xya.y * (x + x3 - xya.x) / (y + y3 - xya.y) + xya.x;
			//����������� ��������� ��������� ����������
			xy.push_back(point(endx, 0));

			break;
		}

		//���������� ��������� �� ����������
		xy.push_back(point(x + x3, y + y3));

		b += dt;
	}

	// ���������� �������� ����� �������
	massfuel = massfuelsave;

	return xy;
}

