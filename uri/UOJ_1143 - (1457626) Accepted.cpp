#include <iostream>

using namespace std;

int main(){
	int a, b=1;
	cin >> a;
	for(int x=0; x<a; x++){
		cout << b << " " << (b*b) << " " << (b*b)*b << endl;
		b++;
	}
}