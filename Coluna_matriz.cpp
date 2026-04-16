#include <bits/stdc++.h>

using namespace std;

int main(){
    double m[17][17], c;
    int a;
    char op;
    cin >> a;
    cin >> op;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }
    for(int i = 0; i < 12; i ++){
        if(op == 'S'){
            c += m[i][a];
        }
        else if(op == 'M'){
            c += m[i][a]/12;
        }
    }
    cout << fixed <<setprecision(1);
    cout << c << endl;
    return 0;
}