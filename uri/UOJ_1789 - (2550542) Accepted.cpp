#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	while(cin >> a){
		c=0;
		while(a-->0){
			cin >> b;
			if(b>c)
				c=b;
		}	
		cout << (c<10 ? 1 : (c<20 ? 2 : 3)) << endl;
	}
	return 0;
}