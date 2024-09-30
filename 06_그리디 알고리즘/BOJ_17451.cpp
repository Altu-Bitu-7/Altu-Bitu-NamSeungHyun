#include <iostream>
#include <vector>


using namespace std;

long long calculate(vector<int> &planets){  //10^9까지의 행성들을 다뤄서 얘보다 res가 10^9보다 커질 수 있으므로 long long사용
    // 맨끝에서부터 탐색하며 맨앞까지 키워가는 방식
    long long res=planets.back();

    //행성의 갯수가 1개면 위의 res바로 반환
    if(planets.size()<2)
        return res;

    //행성 보면서 속도 키우기
    for(int i=planets.size()-2;i>=0;i--){
        if(res%planets[i]!=0)
            res=((res/planets[i])+1)*planets[i];
        else
            continue;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> planets(n);
    for(int i=0;i<n;i++){
        cin>>planets[i];
    }

    long long res=calculate(planets);

    cout<<res;

    return 0;
}
