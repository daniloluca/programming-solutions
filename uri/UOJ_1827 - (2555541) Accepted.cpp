#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	while(cin >> a){
		b=0;
		c=a-1;
		d=a/3;
		e=c-d;
		for(int i=0; i<a; i++){
			for(int j=0; j<a; j++){
				if((i<d || i>e) || (j<d || j>e)){
					if(j==b)
						cout << 2;
					else if(j==c)
						cout << 3;
					else
						cout << 0;
				}else{
					if(i==j && b==c)
						cout << 4;
					else
						cout << 1;
				}
			}
			b++;
			c--;
			cout << endl;
		}	
		cout << endl;
	}
	return 0;
}