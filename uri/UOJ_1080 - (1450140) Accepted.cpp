#include <iostream>

using namespace std;

int main(){
	int a[100], max=0, pos;
	for(int x=0; x<100; x++){
		cin >> a[x];
		if(a[x]>max){
			max=a[x];
			pos=x;
		}
	}
	cout << max << endl;
	cout << pos+1 << endl;
}