#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a, b, c;
	cin >> a >> b >> c;
	if((a<(b+c) && a>(b-c)) || (b<(a+c) && b>(a-c)) || (c<(b+c) && c>(b-c))){
		cout << "Perimetro = " << fixed << setprecision(1) << a+b+c << endl;
	}
	else{
		cout << "Area = " << fixed << setprecision(1) << ((a+b)*c)/2 << endl;
	}
}