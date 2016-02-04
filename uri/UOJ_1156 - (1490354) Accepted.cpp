#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a = 1.0, y = 2;
	for (int x = 3; x <= 39; x+=2, y*=2) a += (x / y);
	cout << fixed << setprecision(2) << a << endl;
}