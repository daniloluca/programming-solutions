#include <iostream>

using namespace std;

int main(){
	int x;
	cin >> x;
	if(x>=1 && x<=1000){
		for(int y=1; y<=x; y++){
			if(y%2!=0){
				cout << y << endl;
			}
		}
	}
}