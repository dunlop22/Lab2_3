#pragma once
#pragma once
#include <iostream>
using namespace std;

struct koleso
{
	double shirina;
	double visota;
	double diametr;
	char tip_diska[20];
};

//������� �������� ������
koleso new_koleso(double shirina, double visota, double diametr, char tip_diska[20])
{
	koleso koleso_create;
	strcpy(koleso_create.tip_diska, tip_diska);
	koleso_create.shirina = shirina;
	koleso_create.visota = visota;
	koleso_create.diametr = diametr;
	return koleso_create;
}

//������� ������ ���������� � ������
void prosmotr_koleso(koleso* koleso_1)
{
	if (koleso_1->visota >= 0)
	{
		cout << "\n\n���������� � �������\n������ ������: " << koleso_1->shirina;
		cout << "\n������� ������: " << koleso_1->diametr;
		cout << "\n������ ������: " << koleso_1->visota;
		cout << "\n��� �����: " << koleso_1->tip_diska;
	}
	else
	{
		cout << "���������� � ������ ��� �� ���� ���������";
	}
}

void koleso_diamter_plus(koleso* koleso1, double diametr_plus)
{
	koleso1->diametr = koleso1->diametr + diametr_plus;
}