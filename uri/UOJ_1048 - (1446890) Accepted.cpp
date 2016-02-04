#include <iostream>
#include <iomanip>

using namespace std;

void mens(double a, double n){
	cout << "Novo salario: " << fixed << setprecision(2) << a+(a*(n/100)) << endl;
	cout << "Reajuste ganho: " << fixed << setprecision(2) << a*(n/100) << endl;
	cout << "Em percentual: " << fixed << setprecision(0) << n << " %" << endl;
}

int main(){
	double a;
	cin >> a;
	if(a>=0 && a<=400.00)
		mens(a, 15);
	else if(a>=400.01 && a<=800.00)
		mens(a, 12);
	else if(a>=800.01 && a<=1200.00)
		mens(a, 10);
	else if(a>=1200.01 && a<=2000.00)
		mens(a, 7);
	else if(a>2000)
		mens(a, 4);
}