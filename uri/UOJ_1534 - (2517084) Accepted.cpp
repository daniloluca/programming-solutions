#include <iostream>
using namespace std;

int main() {
	int a;
	while(cin >> a){
		int b=0, c=a-1;
		for(int i=0; i<a; i++){
			for(int j=0; j<a; j++){
				if(j==b && j!=c)
					cout << 1;
				else if(j==c)
					cout << 2;
				else
					cout << 3;
			}
			b++;
			c--;
			cout << endl;
		}
	}
	return 0;
}