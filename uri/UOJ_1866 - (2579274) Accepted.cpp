#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a;
	while(a-->0){
		cin >> b;
		cout << (b%2==0 ? 0 : 1) << endl;
	}
	return 0;
}