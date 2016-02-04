#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	for(int x=1; x<=10000; x++){
		if(x%a==2){
			cout << x << endl;
		}
	}
}