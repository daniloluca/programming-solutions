#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char a[10], b[10];
	int x, y, z;
	
	char c[5][10] = {
		{"pedra"},
		{"papel"},
		{"tesoura"},
		{"lagarto"},
		{"Spock"}
	};
	int n[5][2] = {
		{2, 3},
		{0, 4},
		{1, 3},
		{1, 4},
		{2, 0},
	};
	
	cin >> z;
	for(int j=1; j<=z; j++){
		x=y=-1;
		cin >> a;
		cin >> b;
		for(int i=0; i<5; i++){
			if(strcmp(c[i], a)==0){
				x=i;
			}
			if(strcmp(c[i], b)==0){
				y=i;
			}
		}
		
		if(x==y){
			cout << "Caso #" << j << ": De novo!" << endl;
		}else if(y==n[x][0] || y==n[x][1]){
			cout << "Caso #" << j << ": Bazinga!" << endl;
		}else{
			cout << "Caso #" << j << ": Raj trapaceou!" << endl;
		}
	}
	return 0;
}