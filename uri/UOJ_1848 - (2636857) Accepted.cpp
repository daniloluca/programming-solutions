#include <iostream>
using namespace std;

int main() {
	char a[8];
	int b=3, c=0, i, j;
	
	while(b-->0){
		c=0;
		while(cin >> a){
			if(a[0]!='c'){
				for(i=2, j=1; i>=0; i--, j*=2){
					c+=(a[i]=='*' ? 1 : 0)*j;
				}
			}else{
				cin >> a;
				break;
			}
		}
		cout << c << endl;
	}
	return 0;
}