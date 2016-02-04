#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a, b = 0;
	int c = 0;
	while (cin >> a && a > 0){
		b += a;
		c++;
	}
	cout << fixed << setprecision(2) << b / c << endl;
}