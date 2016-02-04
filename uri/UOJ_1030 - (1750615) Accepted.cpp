#include <iostream>

using namespace std;

int f(int n, int k){
	if(n==1) return 1;
	return (((f(n-1, k) + k-1)%n)+1);	
}

int main(){
	unsigned int n, k, nc;
	cin >> nc;
	for(int x=1; x<=nc; x++){
		cin >> n >> k;
		cout << "Case " << x << ": " << f(n, k) << endl;
	}
}