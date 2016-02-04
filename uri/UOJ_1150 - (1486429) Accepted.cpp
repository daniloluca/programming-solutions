#include <iostream>

using namespace std;

int main(){
	int a, b, cont=1;
	cin >> a;
	do cin >> b; while (b <= a);
	int s = a;
	while (s<=b){
		s += a + cont;
		cont++;
	}
	cout << cont << endl;
}