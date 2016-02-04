#include <iostream>

using namespace std;

int main(){
	int a=7, b=5;
	for(int i=1, j=a; j>=b; j--){
		cout << "I=" << i << " J=" << j << endl;
		if(j==b && i!=9){
			j+=5;
			a+=3;
			b+=2;
			i+=2;
		}
	}
}