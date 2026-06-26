#ifndef invernadero_h
#define invernadero_h
#include "stm32f103xb.h"

typedef struct{
     GPIO_TypeDef* puerto_tem;
    int pin_sen;
    int est_tem;
    bool sen_comp;
    bool ventilador;
}invernadero_t;

int temp(invernadero_t*);
int luz(invernadero_t*);

#endif