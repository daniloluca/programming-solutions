#include <iostream>

using namespace std;

int main(){
	int a, b=1;
	cin >> a;
	for(int x=0; x<a; x++){
		for(int y=1; y<=4; y++){
			if(y==4)
				cout << "PUM" << endl;
			else
				cout << b << " ";
			b++;
		}
	}
}