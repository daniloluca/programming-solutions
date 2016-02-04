#include <iostream>

using namespace std;

int main(){
	int a; 
	cin >> a;
	int b[a], c[a], d[a];
	for(int x=0; x<a; x++){
		cin >> b[x] >> c[x];
		d[x]=0;
		if(b[x]<c[x]){
			for(int y=b[x]; y<c[x]; y++){
				if(y%2!=0 && y!=b[x]){
					d[x]+=y;
				}
			}
		}else if(b[x]>c[x]){
			for(int y=c[x]; y<b[x]; y++){
				if(y%2!=0 && y!=c[x]){
					d[x]+=y;
				}
			}
		}
	}
	for(int x=0; x<a; x++){
		cout << d[x] << endl;
	}
}