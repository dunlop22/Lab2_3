#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "motor.h";
#include "obchee.h";
#include "korobka.h";
#include "koleso.h";
#include "voditel.h";
using namespace std;

struct avto
{
    motor har2;
    koleso har3;
    korobka_peredach har4;
    obchee har5;
    voditel* vod = NULL;
};

avto new_avto(motor *motor1, koleso *koleso1, korobka_peredach *korobka_peredach1, obchee* obchee)
{
    avto avto_create;
    avto_create.har2 = *motor1;
    avto_create.har3 = *koleso1;
    avto_create.har4 = *korobka_peredach1;
    avto_create.har5 = *obchee;
    avto_create.vod = NULL;
    return avto_create;
}

void vod_avto(avto *avtomobil, voditel* vod)
{
    avtomobil->vod = vod;
}

void prosmotr_avto(avto *avtomobil)
{
    prosmotr_obchee(&avtomobil->har5);
    prosmotr_motor(&avtomobil->har2);
    prosmotr_koleso(&avtomobil->har3);
    prosmotr_korobka_peredach(&avtomobil->har4);
    if (avtomobil->vod != NULL)
    {
        prosmotr_voditel(avtomobil->vod);
    }
}

void avto_otv(avto* avtomobil)
{
    avtomobil->vod = NULL;
}
