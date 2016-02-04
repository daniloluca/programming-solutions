#include <iostream>

using namespace std;

int main(){
	double a[6];
	int b=0;
	for(int x=0; x<=5; x++){
		cin >> a[x];
		if(a[x]>0)
		    b++;
	}
	cout << b << " valores positivos" << endl;
}