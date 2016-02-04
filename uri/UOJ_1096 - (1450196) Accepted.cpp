#include <iostream>

using namespace std;

int main(){
	for(int i=1, j=7; j>=5; j--){
		cout << "I=" << i << " J=" << j << endl;
		if(j==5 && i!=9){
			j=8;
			i+=2;
		}
	}
}