#include <iostream>

using namespace std;

int main(){
	int a, in=0, out=0;
	cin >> a;
	int b[a];
	for(int x=0; x<a; x++){
		cin >> b[x];
		if(b[x]>=10 && b[x]<=20){
			in++;
		}else{
			out++;
		}
	}
	cout << in << " in" << endl;
	cout << out << " out" << endl;
}