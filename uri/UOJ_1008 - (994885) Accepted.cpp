#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int nf, nh;
	double vh;
	cin >> nf;
	cin >> nh;
	cin >> vh;
	cout << "NUMBER = " << nf << endl;
	cout << "SALARY = U$ " << fixed << setprecision(2) << vh*nh << endl;
return(0);
}