#include <iostream>
#include <string>

using namespace std;

int main(){
	int a;
	cin >> a;
	int b[a];
	string s[a];
	for(int x=0; x<a; x++){
		cin >> b[x];
	}
	for(int x=0; x<a; x++){
		if(b[x]==0){
			s[x]="NULL";
		}else{
			if(b[x]%2==0){
				s[x]="EVEN ";
			}else{
				s[x]="ODD ";
			}
			if(b[x]>0){
				s[x]+="POSITIVE";
			}else{
				s[x]+="NEGATIVE";
			}
		}
		cout << s[x] << endl;
	}
}