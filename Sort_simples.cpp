#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int ori[3], cresc[3];
    for(int i = 0; i < 3; i++){
        cin >> ori[i];
        cresc[i] = ori [i];
    }
    sort(cresc, cresc + 3);
    for(int i = 0; i < 3; i++){
        cout << cresc[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << ori[i] <<endl;
    }
    return 0;
}
