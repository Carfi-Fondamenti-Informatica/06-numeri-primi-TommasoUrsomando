#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int a;
    cin >>a;
    if (primo(a)==1){
        cout <<"numero non primo";
    }
    else{
        cout << "numero primo";
    }
    return 0;
}
