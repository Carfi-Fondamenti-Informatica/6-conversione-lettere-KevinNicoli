#include "lib.h"

bool verifica (char a) {
    if ((a >= 65 && a <= 90) or (a >= 97 && a <= 122)) {
        return true;
    } else {
        return false;
    }
}
char converti (char a) {
    if (a>=65 && a<=90){
        a= a+32;
        return a;
    }else if (a>=97 && a<=122) {
        a= a-32;
        return a;
    }
}
