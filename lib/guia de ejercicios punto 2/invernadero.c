#include "invernadero.h"
 

int temp(invernadero_t* temperatura){
       if(temperatura -> est_tem > 28){
        temperatura-> puerto_tem -> BSRR|=(1<<temperatura-> pin_sen);
}else{
    temperatura-> puerto_tem -> BSRR|=(1<<(temperatura-> pin_sen+16));
}
}