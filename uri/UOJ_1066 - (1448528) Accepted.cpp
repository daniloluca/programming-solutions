#include <iostream>

using namespace std;

int main(){
	int a, par=0, imp=0, pos=0, neg=0;
	for(int x=0; x<5; x++){
		cin >> a;
		if(a%2==0){
			par++;
		}else{
			imp++;
		}
		if(a>0){
			pos++;
		}else if(a<0){
			neg++;
		}
	}
	cout << par << " valor(es) par(es)" << endl;
	cout << imp << " valor(es) impar(es)" << endl;
	cout << pos << " valor(es) positivo(s)" << endl;
	cout << neg << " valor(es) negativo(s)" << endl;
}