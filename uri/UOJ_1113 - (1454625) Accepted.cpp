#include <iostream>

using namespace std;

int main(){
	int a, b;
	while(cin >> a >> b && a!=b){
		if(a>b)
			cout << "Decrescente" << endl;
		else
			cout << "Crescente" << endl;
	}
}