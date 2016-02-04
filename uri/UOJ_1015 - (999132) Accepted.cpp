#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	int x1, y1, x2, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cout << fixed << setprecision(4) << sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))) << endl;
}