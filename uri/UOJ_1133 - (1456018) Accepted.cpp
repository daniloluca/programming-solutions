#include <iostream>

using namespace std;

int main(){
	int a, b;
	cin >> a;
	cin >> b;
	if(a>b){
		for(int x=b+1; x<a; x++){
			if(x%5==2 || x%5==3){
				cout << x << endl;
			}
		}
	}else{
		for(int x=a+1; x<b; x++){
			if(x%5==2 || x%5==3){
				cout << x << endl;
			}
		}	
	}
}