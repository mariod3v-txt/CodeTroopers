#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n, menor, posicao;
	long long int x[1005];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x[i];
		if(x[i] < menor){
			menor = x[i];
			posicao = i;
		}
	}
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << posicao << endl;
	return 0;
}