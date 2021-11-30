#include <iostream>
#include "lib.h"
using namespace std;


int main() {
    char x;
    cin >> x;
    int ris=verifica(x);
    if(ris){
        cout << converti(x) << endl;
    }else {
        cout << "errore"<< endl;
    }
    return 0;
}
