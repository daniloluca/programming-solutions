#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char nv[10];
	double sf, tv;
	cin.getline(nv, 10);
	cin >> sf;
	cin >> tv;
	cout << "TOTAL = R$ " << fixed << setprecision(2) << sf+(tv*0.15) << endl;
return(0);	
}