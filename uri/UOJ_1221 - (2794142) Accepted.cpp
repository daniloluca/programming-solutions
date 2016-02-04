#include <iostream>
#include <math.h>

using namespace std;

bool func(long int x, int y, int r){
    if(x%y==0)
        return false;
    else if(y<r)
        return func(x, y+2, r);
    else
        return true;
}
 
int main(){
    int n;
    long int x;
    cin >> n;
    while(n-->0){
        cin >> x;
        if((x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0) || (x==2 || x==3 || x==5 || x==7)){
            if(func(x, 3, ceil(sqrt(x))))
                cout << "Prime" << endl;
            else
                cout << "Not Prime" << endl;
        }else{   
            cout << "Not Prime" << endl;
        }
    }
    return 0;   
}