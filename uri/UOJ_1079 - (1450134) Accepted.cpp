#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a;
	cin >> a;
	double b[a][3];
	for(int x=0; x<a; x++){
		cin >> b[x][0] >> b[x][1] >> b[x][2];
	}
	for(int x=0; x<a; x++){
		cout << fixed << setprecision(1) <<  ((b[x][0]*2)+(b[x][1]*3)+(b[x][2]*5))/10 << endl;
	}
}