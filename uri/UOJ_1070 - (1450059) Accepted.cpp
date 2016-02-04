#include <iostream>

using namespace std;

int main(){
	int x, cont=1;
	cin >> x;
	while(cont<=6){
		if(x%2!=0){
			cout << x << endl;
			cont++;
		}
		x++;
	}
}