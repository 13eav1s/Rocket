#pragma once
#include<string>
#include<vector>
#define _USE_MATH_DEFINES
#include<math.h>
#include"Point.h"
using namespace std;
using namespace System;

class counting
{
public:
	const double g = 9.8;
	const double dt = 0.1; // интервал в секундах с которым программа считает траекторию
	const double dt2d2 = dt * dt / 2;
	double angle, force, len, fuel, mass, massfuel;
	int i;
	
	counting(String^ angle, String^ force, String^ len, String^ fuel, String^ mass, String^ massfuel);
	vector<point> Coordinates(double angle = -1);
};