#include <iostream>
using namespace std;

int main() {
	char a[] = {'L', 'I', 'F', 'E', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'A', ' ', 'P', 'R', 'O', 'B', 'L', 'E', 'M', ' ', 'T', 'O', ' ', 'B', 'E', ' ', 'S', 'O', 'L', 'V', 'E', 'D'};
	int b;
	while(cin >> b){
		for(int i=0; i<b; i++){
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}