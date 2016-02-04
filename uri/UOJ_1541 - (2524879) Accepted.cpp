#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b;
	double c;
	while((cin >> a)>0 && cin >> b >> c){
		cout << (int)sqrt((a*b)/(c/100)) << endl;
	}
	return 0;
}