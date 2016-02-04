#include <iostream>

using namespace std;

int main(){
	int a, b, s=0;
	cin >> a;
	cin >> b;
	if(a>b){
		do{
			b++;
			if(b%2!=0 && a!=b){
				s+=b;
			}
		}while(a>b);
		cout << s << endl;
	}
	if(a<b){
		do{
			a++;
			if(a%2!=0 && a!=b){
				s+=a;
			}
		}while(a<b);
		cout << s << endl;
	}
}