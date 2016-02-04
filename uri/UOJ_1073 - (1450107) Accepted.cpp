#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	for(int x=1; x<=a; x++){
		if(x%2==0){
			cout << x << "^2 = " << x*x << endl;
		}
	}
}