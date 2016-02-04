#include <iostream>

using namespace std;

int main(){
	int a, b, s;
	cin >> a;
	do{
		cin >> b;
	}while (b <= 0);
	s = a;
	for (int i = 1; i < b; i++) s += ++a;
	cout << s << endl;
}