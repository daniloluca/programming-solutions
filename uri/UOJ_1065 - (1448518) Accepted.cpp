#include <iostream>

using namespace std;

int main(){
	int a[5], cont=0;
	for(int x=0; x<5; x++){
		cin >> a[x];
		if(a[x]%2==0){
			cont++;
		}
	}
	cout << cont << " valores pares" << endl;
}