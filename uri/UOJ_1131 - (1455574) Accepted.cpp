#include <iostream>

using namespace std;

int main(){
	int a, b, op=1, inter=0, grenal=0, gremio=0, emp=0;
	do{
		if(op==1){
			grenal++;
			cin >> a >> b;
			if(a>b)
				inter++;
			else if(a<b)
				gremio++;
			else
				emp++;
		}
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> op;	
	}while(op!=2);
	cout << grenal << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << emp << endl;
	if(inter>gremio)
		cout << "Inter venceu mais" << endl;
	else if(inter<gremio)
		cout << "Gremio venceu mais" << endl;
	else 
		cout << "Nao houve vencedor" << endl;
}