#include <iostream>
using namespace std;

int main() {
	int a;
	while(cin >> a){
		cout << (a>0 ? "vai ter duas!" : "vai ter copa!") << endl;
	}
	return 0;
}