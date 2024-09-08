#include <iostream>
#include <algorithm>


using namespace std;


int GCD(int a,int b){
    while(b){
        a=a%b;
        swap(a,b);
    }
    return a;
}

int LCM(int a, int b){
    return a*b/GCD(a,b);
}

int main() {
    ios::sync_with_stdio(false);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int top1,under1,top2,under2;
    cin>>top1>>under1;
    cin>>top2>>under2;

    int resTop, resUnder;
    int num;

    resUnder=LCM(under1, under2);
    resTop=(resUnder/under1)*top1+(resUnder/under2)*top2;

    num=GCD(resUnder, resTop);

    cout<<resTop/num<<" "<<resUnder/num;


}





