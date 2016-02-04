#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	while(a-->0){
		cin >> b >> c;
		cout << ((b*2)+(c*2))/2 << endl;
	}
	return 0;
}