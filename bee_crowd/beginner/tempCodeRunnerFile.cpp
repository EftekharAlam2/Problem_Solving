#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    double x1,y1,x2,y2,distance;

    cin>>setprecision(1)>>x1>>setprecision(1)>>y1;
    cin>>setprecision(1)>>x2>>setprecision(1)>>y2;

    distance=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    cout<<fixed<<setprecision(4);
    cout<<distance<<endl;

    return 0;
}