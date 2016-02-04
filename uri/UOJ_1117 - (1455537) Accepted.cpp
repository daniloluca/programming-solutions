#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a, b=-1, c=-1;
	while(b<0 || c<0){
		cin >> a;
		if(a>=0 && a<=10 && b<0){
			b=a;
		}else if(a>=0 && a<=10 && c<0){
			c=a;
			cout << "media = " << fixed << setprecision(2) << (b+c)/2 << endl;
		}else
			cout << "nota invalida" << endl;
	}
}