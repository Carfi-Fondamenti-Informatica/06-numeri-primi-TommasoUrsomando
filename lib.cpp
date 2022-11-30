#include "lib.h"

int funzione(int a, int i){
    if (a%i==0){
        if (a==i)
        return 1;
        else
            return 0;}
    else
        funzione(a, i+1);
}
