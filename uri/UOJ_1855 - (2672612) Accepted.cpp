#include <iostream>
using namespace std;

int main() {
	int x, y, a, b;
	char c;
	cin >> a >> b;
	
	char m[b][a];
	for(int i=0; i<b; i++){
		cin >> m[i];
	}
	
	x=y=0;
	while(c!='*' && c!='!'){
		if(m[x][y]!='.'){
			c=m[x][y];
			m[x][y]='!';
		}
		
		if(c=='!' || x<0 || y<0 || x>=b || y>=a){
			cout << "!" << endl;
			c='!';
		}else if(c=='>'){
			y++;
		}else if(c=='<'){
			y--;
		}else if(c=='^'){
			x--;
		}else if(c=='v'){
			x++;
		}else if(c=='*'){
			cout << "*" << endl;
		}
	}
	
	return 0;
}