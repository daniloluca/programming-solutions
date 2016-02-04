#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int a, c;
	char b[10];
	
	cin >> a;
	while(a--){
		cin >> b >> c;
		cout << (strcmp(b, "Thor")==0 ? "Y" : "N") << endl;
	}
	return 0;
}