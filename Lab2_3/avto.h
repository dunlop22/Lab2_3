#pragma once
#include <iostream>
using namespace std;
#include "motor.h";
#include "obchee.h";
#include "korobka.h";
#include "koleso.h";
#include "voditel.h";

struct avto
{
    motor har2;
    koleso har3;
    korobka_peredach har4;
    obchee har5;
    voditel* vod = NULL;
};

avto new_avto(motor motor1, koleso koleso1, korobka_peredach korobka_peredach1, obchee obchee, voditel *vod)
{
    avto avto_create;
    avto_create.har2 = motor1;
    avto_create.har3 = koleso1;
    avto_create.har4 = korobka_peredach1;
    avto_create.har5 = obchee;
    avto_create.vod = vod;
    return avto_create;
}

void prosmotr_avto(avto *avtomobil)
{
    prosmotr_obchee(&avtomobil->har5);
    prosmotr_motor(&avtomobil->har2);
    prosmotr_koleso(&avtomobil->har3);
    prosmotr_korobka_peredach(&avtomobil->har4);
    prosmotr_voditel(avtomobil->vod);
}