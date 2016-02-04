#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	for (int x = a-1; x > 0; x--) a *= x;
	cout << a << endl;
}