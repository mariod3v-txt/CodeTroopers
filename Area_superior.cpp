#include <bits/stdc++.h>

using namespace std;

int main(){
    double m[17][17], c = 0.0, soma = 0.0;
    char op;
    cout << fixed << setprecision(1);
    cin >> op;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if(i == j && (i + j) < 12){
                soma += m[i][j];
                c++;
            }
        }
    }
    if (op == 'S'){
        cout << soma << endl;
    }
    else if(op == 'M'){
        cout << soma/c << endl;
    }
    return 0;
}