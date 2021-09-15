#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

struct voditel
{
    char name[20];
    double age;
    double stag;
    char pol[20];
    char covid_19[20];
};

voditel new_voditel(double age, double stag, char name[20], char pol[20], char covid_19[20])
{
    voditel voditel_create;
    voditel_create.age = age;
    strcpy(voditel_create.covid_19, covid_19);
    strcpy(voditel_create.name, name);
    strcpy(voditel_create.pol, pol);
    voditel_create.stag = stag;
    return voditel_create;
}

void prosmotr_voditel(voditel* vod)
{
    if (vod->age >= 0)
    {
        cout << "\n\n���������� � ��������";
        cout << "\n���: " << vod->name;
        cout << "\n�������: " << vod->age;
        cout << "\n���: " << vod->pol;
        cout << "\n������ Covid-19: " << vod->covid_19;
        cout << "\n����: " << vod->stag << "\n***************************************\n\n";
    }
    else
    {
        cout << "���������� � �������� �����������";
    }
}

void voditel_covid(voditel *vod, char covid[20])
{ 
    strcpy(vod->covid_19, covid);
}
