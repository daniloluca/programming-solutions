#include <iostream>

using namespace std;

int main(){
	int a, n1=1, n2=1, n3=1;
	cin >> a;
	for(int x=0; x<a; x++){
		cout << n1 << " " << n2 << " " << n3 << endl;
		cout << n1 << " " << n2+1 << " " << n3+1 << endl;
		n1++;
		n2=n1*n1;
		n3=n1*n2;
	}
}