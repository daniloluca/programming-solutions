#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	while((a--)>0){
		cout << "Ho" << (a>0 ? " " : "!");
	}
	cout << endl;
	return 0;
}