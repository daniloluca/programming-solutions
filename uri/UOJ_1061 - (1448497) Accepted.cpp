#include <iostream>

using namespace std;

int main(){
	string aux;
	int d1, h1, m1, s1;
	int d2, h2, m2, s2;
	int w, x, y, z;
	cin >> aux >> d1;
	cin >> h1 >> aux >> m1 >> aux >> s1;
	cin >> aux >> d2;
	cin >> h2 >> aux >> m2 >> aux >> s2;
	
	w=(d2-d1)-1;
	x=((24-h1)+h2)-1;
	y=((60-m1)+m2)-1;
	z=(60-s1)+s2;
	
	if(z>=60){
		z-=60;
		y++;
	}
	if(y>=60){
		y-=60;
		x++;
	}
	if(x>=24){
		x-=24;
		w++;
	}
	
	cout << w << " dia(s)" << endl;
	cout << x << " hora(s)" << endl;
	cout << y << " minuto(s)" << endl;
	cout << z << " segundo(s)" << endl;
}