#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int numero;
    cin>>numero;
    if (funzione(numero,2)==1)
        cout<<"numero primo";
    else cout<<"numero non primo";
    return 0;
}
