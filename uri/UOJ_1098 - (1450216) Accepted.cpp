#include <iostream>

using namespace std;

int main(){
	double i=0, j=1;
	for(int cont=1; cont<=3; cont++){
		cout << "I=" << i << " J=" << j << endl;
		j++;
		if(cont>=3 && i<=1.8){
			j-=3;
			j+=0.2;
			i+=0.2;
			cont=0;
		}
	}
}