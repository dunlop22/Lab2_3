#pragma once
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
struct obchee
{
    char name[20];
    char tip_privoda[20];
    char tip_topliva[20];
    double massa;
    double obem_benzobaka;
    double kolvo_mest;
    double razgon_do_100;
};

obchee new_obchee(double kolvo_mest, double massa, char name[20], double razgon_do_100, char tip_privoda[20], char tip_topliva[20],double obem_benzobaka)
{
	obchee obchee_create;
	strcpy(obchee_create.name, name);
	strcpy(obchee_create.tip_privoda, tip_privoda);
	strcpy(obchee_create.tip_topliva, tip_topliva);
	obchee_create.massa = massa;
	obchee_create.obem_benzobaka = obem_benzobaka;
	obchee_create.razgon_do_100 = razgon_do_100;
	obchee_create.kolvo_mest = kolvo_mest;
	return obchee_create;
}

void prosmotr_obchee(obchee* obchee1)
{
	if (obchee1->obem_benzobaka >= 0)
	{
		cout << "\n\nОБЩАЯ ИНФОРМАЦИЯ:\nМодель: " << obchee1->name;
		cout << "\nТип привода: " << obchee1->tip_privoda;
		cout << "\nТип топлива: " << obchee1->tip_topliva;
		cout << "\nКоличество посадочных мест: " << obchee1->kolvo_mest;
		cout << "\nВремя разгона до 100км/ч: " << obchee1->razgon_do_100;
		cout << "\nОбъем бензобака: " << obchee1->obem_benzobaka;
		cout << "\nМасса: " << obchee1->massa;
	}
	else
	{
		cout << "Общая информация отсутствует";
	}
}

void obchee_name(obchee* obchee, char name[20])
{
	strcpy(obchee->name, name);
}
