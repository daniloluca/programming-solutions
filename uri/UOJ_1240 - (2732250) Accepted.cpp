#include <iostream>
using namespace std;

int c;

bool func(int a, int b, int i){
	c=a;
	c=c/i;
	c=c*i;
	if(c<=0)
		return false;
	else if(a-c!=b && a!=b)
		return func(a, b, i*10);
	else
		return true;
}

int main() {
	int a, b, n;
	cin >> n;
	while(n-->0){
		cin >> a >> b;
		if(func(a, b, 1))
			cout << "encaixa" << endl;
		else
			cout << "nao encaixa" << endl;
	}
	return 0;
}