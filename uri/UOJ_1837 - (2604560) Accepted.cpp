#include <iostream>
using namespace std;

int main() {
	int a, b, q, r;
	
	cin >> a >> b;
	
	q = a/b;
	r = a%b;
	while(a!=b*q+r || r<0){
		if((a<0 && b<0) || (a>=0 && b>0))
			q++;
		else
			q--;
		r = a-(b*q);
	}
	
	cout << q << " " << r << endl;
	return 0;
}