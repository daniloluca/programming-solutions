#include <iostream>

using namespace std;

int main(){
	int a, b, s=0;
	cin >> a >> b;
	if(a>b){
		for(int x=b; x<=a; x++){
			if(x%13!=0){
				s+=x;
			}
		}
	}else if(a<b){
		for(int x=a; x<=b; x++){
			if(x%13!=0){
				s+=x;
			}
		}
	}
	cout << s << endl;
}