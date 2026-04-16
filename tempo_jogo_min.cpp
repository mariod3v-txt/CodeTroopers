#include <iostream>
using namespace std;

int main(){
    int inicioh, fimh, iniciom, fimm, r1, r2;

    cin >> inicioh >> iniciom >> fimh >> fimm;

    if(fimh < inicioh || (fimh == inicioh && fimm <= iniciom)){
        r1 = (24 - inicioh) + fimh;
    } else {
        r1 = fimh - inicioh;
    }

    if(fimm < iniciom){
        r2 = (60 - iniciom) + fimm;
        r1--; // empresta 1 hora
    } else {
        r2 = fimm - iniciom;
    }

    cout << "O JOGO DUROU " << r1 << " HORA(S) E " << r2 << " MINUTO(S)" << endl;

    return 0;
}