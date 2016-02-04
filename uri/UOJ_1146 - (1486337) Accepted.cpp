#include <iostream>

using namespace std;

int main(){
	int a;
	while (cin >> a && a!=0){
		for (int x = 1; x <= a; x++){
			cout << x;
			if (x != a){
				cout << " ";
			}
		}
		cout << endl;
	}
}