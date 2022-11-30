#include "lib.h"

bool funzione(int a, int i){
    if (a%i==0){
        if (a==i)
        return true;
        else
            return false;}
    else
        funzione(a, i+1);
}
