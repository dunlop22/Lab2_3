#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct motor
{
	char name[20];
	double rab_obem;
	double koni;
	double rasxod;
	double kol_vo_cilindr;
	double klapan;
};

motor new_motor(double koni, double rasxod, char name[20], double rab_obem, double kol_vo_cilindr, double klapan)
{
	motor motor_create;
	strcpy(motor_create.name, name);
	motor_create.rab_obem = rab_obem;
	motor_create.koni = koni;
	motor_create.rasxod = rasxod;
	motor_create.kol_vo_cilindr = kol_vo_cilindr;
	motor_create.klapan = klapan;
	return motor_create;
}

void prosmotr_motor(motor* motorishe)
{
	if (motorishe->rasxod >= 0)
	{
		cout << "\n\nИНФОРАЦИЯ О ДВИГАТЕЛЕ:\nМаркировка двигателя: " << motorishe->name;
		cout << "\nРабочий объем: " << motorishe->rab_obem;
		cout << "\nМощность (л.с.): " << motorishe->koni;
		cout << "\nСредний расход на 100км: " << motorishe->rasxod;
		cout << "\nКоличество цилиндров: " << motorishe->kol_vo_cilindr;
		cout << "\nКоличество клапанов на 1 цилиндр: " << motorishe->klapan;
	}
	else
	{
		cout << "Информация о двигателе отсутствует";
	}
}

void motor_force(motor* motorishe, double force_plus)
{
	motorishe->koni = motorishe->koni + force_plus;
}
