#include <iostream>
#include <iomanip>

using namespace std;
 
int main(){
    int n, f, d;
    while(cin >> n && n>0){
        f=0;
        for(int i=1; i<=n; i++){
            d=((n-i)+1);
            f+=d*d;
        }
        cout << f << endl;
    }   
    return 0;   
}