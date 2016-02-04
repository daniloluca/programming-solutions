#include <iostream>
using namespace std;

int main(){
	int a[3], b[3], aux;
	cin >> a[0] >> a[1] >> a[2];
	b[0]=a[0];
	b[1]=a[1];
	b[2]=a[2];
	for(int x=0; x<3; x++){
		for(int y=x; y<3; y++){
			if(b[x]>=b[y]){
			    aux=b[x];
			    b[x]=b[y];
				b[y]=aux;			    
			}
		}
	}
	cout << b[0] << endl;
	cout << b[1] << endl;
	cout << b[2] << endl;
	cout << endl << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
}