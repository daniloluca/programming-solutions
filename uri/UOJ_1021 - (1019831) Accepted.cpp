#include <iostream>
using namespace std;

int main(){
	double n;
	int x;
	while(cin >> n && n>=0 && n<=1000000.00){
		x=n;
		cout << "NOTAS:" << endl;
		cout << x/100 << " nota(s) de R$ 100.00" << endl;
		x=x%100;
		cout << x/50 << " nota(s) de R$ 50.00" << endl;
		x=x%50;
		cout << x/20 << " nota(s) de R$ 20.00" << endl;
		x=x%20;
		cout << x/10 << " nota(s) de R$ 10.00" << endl;
		x=x%10;
		cout << x/5 << " nota(s) de R$ 5.00" << endl;
		x=x%5;
		cout << x/2 << " nota(s) de R$ 2.00" << endl;
		x=x%2;
		
		cout << "MOEDAS:" << endl;
		cout << x << " moeda(s) de R$ 1.00" << endl;
		x=n;
		x=(n-x)*100;
		cout << x/50 << " moeda(s) de R$ 0.50" << endl;
		x=x%50;
		cout << x/25 << " moeda(s) de R$ 0.25" << endl;
		x=x%25;
		cout << x/10 << " moeda(s) de R$ 0.10" << endl;
		x=x%10;
		cout << x/5 << " moeda(s) de R$ 0.05" << endl;
		x=x%5;
		cout << x << " moeda(s) de R$ 0.01" << endl;		
	} 
}