#include <iostream>

using namespace std;

int main(){
	int a, b=0, c=1, d;
	cin >> a;
	cout << b << " " << c;
	while (a > 2){
		d = b + c;
		cout << " " << d;
		b = c;
		c = d;
		a--;
	}
	cout << endl;
}