#include <iostream>
using namespace std;

int main() {
	int n, t, c,f=20;
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> t;
		if(t<f){
			f=t;
			c=i;
		}
	}
	cout << c << endl;
	return 0;
}