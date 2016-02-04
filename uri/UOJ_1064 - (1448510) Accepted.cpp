#include <iostream>

using namespace std;

int main(){
	double a[6], b=0;
	int cont=0;
	for(int x=0; x<6; x++){
		cin >> a[x];
		if(a[x]>0){
			cont++;
			b+=a[x];
		}
	}
	cout << cont << " valores positivos" << endl;
	cout << b/cont << endl;
}