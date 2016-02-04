#include <iostream>

using namespace std;

int main(){
	int op=0, alc=0, gas=0, die=0;
	while(cin >> op && op!=4){
		if(op==1)
			alc++;
		else if(op==2)
			gas++;
		else if(op==3)
			die++;
	}
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alc << endl;
	cout << "Gasolina: " << gas << endl;
	cout << "Diesel: " << die << endl;
}