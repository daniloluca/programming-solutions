#include <iostream>

using namespace std;

int main(){
	int a, b, cont=1, lin=1;
	cin >> a >> b;
	while (cont <= b){
		cout << cont;
		if (lin>=a){
			cout << endl;
			lin = 0;
		}
		else{
			cout << " ";
		}
		lin++;
		cont++;
	}
}