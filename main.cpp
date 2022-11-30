#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int numero;
    cin>>numero;
    if (funzione(numero,2)==true)
        cout<<"numero primo";
    else cout<<"numero non primo";
    return 0;
}
