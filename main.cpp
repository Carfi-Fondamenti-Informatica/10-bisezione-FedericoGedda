#include <iostream>
#include <math.h>
using namespace std;
float funz(float y){
    float x=pow(y,2)*cos(y)+1;
    return x;
}
int main() {
    float a=0,b=0,x=0,err=0;
    do {
    cout<<"inserire estremi: ";
    cin>>a>>b;
    }while (funz(a)*funz(b)>=0);

    do {
        x=(a+b)/2;
        if (funz(x)==0){
            cout<<x<<endl;
            cout<<funz(x);
            return 0;
        } else {
            if (funz(a)*funz(b)<0){
                b=x;
            } else {
                a=x;
            }
            err=abs((b-a)/2);
        }

    }while (err>=(1e-6));
    cout << int(x * 10000) / 10000.0 <<endl;
    return 0;
}
