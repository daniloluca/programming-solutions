#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a = 1.0;
	for (int x = 2; x <= 100; x++) a += (1.0 / x);
	cout << fixed << setprecision(2) << a << endl;
}