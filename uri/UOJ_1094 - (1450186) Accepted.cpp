#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a, cob=0;
	double coe=0, rat=0, sap=0;
	cin >> a;
	int b[a];
	char c[a];
	for(int x=0; x<a; x++){
		cin >> b[x] >> c[x];
		cob+=b[x];
		if(c[x]=='C'){
			coe+=b[x];
		}else if(c[x]=='R'){
			rat+=b[x];
		}else{
			sap+=b[x];
		}
	}
	cout << "Total: " << cob << " cobaias" << endl;
	cout << "Total de coelhos: " << coe << endl;
	cout << "Total de ratos: " << rat << endl;
	cout << "Total de sapos: " << sap << endl;
	cout << "Percentual de coelhos: " << fixed << setprecision(2) << (coe/cob)*100 << " %" << endl;
	cout << "Percentual de ratos: " << fixed << setprecision(2) << (rat/cob)*100 << " %" << endl;
	cout << "Percentual de sapos: " << fixed << setprecision(2) << (sap/cob)*100 << " %" << endl;
}