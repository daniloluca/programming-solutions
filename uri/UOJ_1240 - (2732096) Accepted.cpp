#include <iostream>
using namespace std;

int main() {
	int a, b, c, n;
	bool v;
	cin >> n;
	while(n-->0){
		cin >> a >> b;
		c=a;
		v=false;
		for(int i=10; c>0; i*=10){
			c=c/i;
			c=c*i;
			if(a-c==b)
				v=true;
		}
		if(v)
			cout << "encaixa" << endl;
		else
			cout << "nao encaixa" << endl;
	}
	return 0;
}