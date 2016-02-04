#include <iostream>

using namespace std;

int main(){
	int a, b, s;
	while(cin >> a >> b && a>0 && b>0){
		s=0;
		if(a>b){
			for(int x=b; x<=a; x++)
				s+=x;
			for(int x=b; x<=a; x++)
				cout << x << " ";
			cout << "Sum=" << s << endl;
		}else{
			for(int x=a; x<=b; x++)
				s+=x;
			for(int x=a; x<=b; x++)
				cout << x << " ";
			cout << "Sum=" << s << endl;	
		}
	}
}