#pragma once
#include <iostream>
using namespace std;
struct korobka_peredach
{
    char tip_korobki[20];
    double kolvo_peredach;
};

korobka_peredach new_korobka_peredach(double kolvo_peredach, char tip_korobki[20])
{
	korobka_peredach korobka_peredach_create;
	strcpy(korobka_peredach_create.tip_korobki, tip_korobki);
	korobka_peredach_create.kolvo_peredach = kolvo_peredach;
	return korobka_peredach_create;
}

void prosmotr_korobka_peredach(korobka_peredach* korobka_peredach1)
{
	if (korobka_peredach1->kolvo_peredach >= 0)
	{
		cout << "\n\n���������� � ������� ������������ �������\n��� ������� ������������ �������: " << korobka_peredach1->tip_korobki;
		cout << "\n���������� ������� �������: " << korobka_peredach1->kolvo_peredach;
	}
	else
	{
		cout << "���������� � �������� ������� �����������";
	}
}

void korobka_peredach_peredacha_plus(korobka_peredach *korobka_peredach1, double peredacha_plus)
{
	korobka_peredach1->kolvo_peredach = korobka_peredach1->kolvo_peredach + peredacha_plus;
	//return *korobka_peredach1;
}
