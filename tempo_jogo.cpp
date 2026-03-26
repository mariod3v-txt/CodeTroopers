#include <iostream>

using namespace std;

int calc(int a, int b){
	int r;
	if(b <= a){
		r = (24 - a) + b;
	}
	else{
		r = b - a;
	}
	return r;
}

int main(){
	int r, inicio, fim;
	cin >> inicio >> fim;
	r = calc(inicio, fim);
	cout << "O JOGO DUROU " << r << " HORA(S)" << endl;
	return 0;
}