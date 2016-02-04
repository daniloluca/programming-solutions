#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a, b;
	cin >> a;
	cin >> b;
	cout << fixed << setprecision(3) << (b*a)/12.0 << endl;
}