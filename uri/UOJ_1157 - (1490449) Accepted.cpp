#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a;
	cin >> a;
	for (int x = 1; x <= a; x++){
		if (a % x == 0){
			cout << x << endl;
		}
	}
}