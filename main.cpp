#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int a;
    cin >>a;
    if (primo(a)==1){
        cout <<"non primo";
    }
    else{
        cout << "primo";
    }
    return 0;
}
