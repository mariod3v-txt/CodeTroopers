#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calc(double a, double b, double c, double d){
	double r;
	r = sqrt((pow((b - a), 2)) + (pow((d - c), 2)));
	return r;
}

int main(){
	double x1, x2, y1, y2, r;
	cin >> x1 >> y1 >> x2 >> y2;
	r = calc(x1, x2, y1, y2);
	cout << fixed << setprecision(4);
	cout << r << endl;
	
	return 0;
}