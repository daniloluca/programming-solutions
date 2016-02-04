#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a;
	cin >> a;
	int b[a], c[a];
	for(int x=0; x<a; x++){
		cin >> b[x] >> c[x];
	}
	for(int x=0; x<a; x++){
			if(c[x]==0){
			cout << "divisao impossivel" << endl;
		}else{
			cout << fixed << setprecision(1) << (double) b[x]/c[x] << endl;
		}
	}
}