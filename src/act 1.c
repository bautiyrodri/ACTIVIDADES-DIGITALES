#include "stm32f103xb.h"
 #define led  13
 #define pul  1

int main(void){
    RCC-> APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPCEN;
    GPIOA-> CRL &=~ (0xF<<pul*4);
    GPIOA-> CRL |= (0x8<<pul*4);

    GPIOC-> CRH &=~ (0xF<<(led%8)*4);
    GPIOC-> CRH |= (0x1<<(led%8)*4);

while(1){
    int valor = GPIOA-> IDR & (1<<pul);
    if(valor==1) GPIOC-> BSRR|=(1<<led);
    else GPIOC-> BSRR |=(1<<(led+16));

}
return 0;
}