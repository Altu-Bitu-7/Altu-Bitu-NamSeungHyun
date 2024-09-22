#include <iostream>
#include <algorithm> //sort 사용하기 위한 헤더
#include <vector>
#include <queue>

using namespace std;


// n개씩 n번 입력을 받는데, 각 i번째마다 가장 큰 원소 i개 납두고 다 pop 시켜버림. 가장 마지막엔 가장 큰 원소 n개만 남아서 얘를 pop하면 되도록
int result(int n){
    priority_queue<int, vector<int>, greater<int>> pq;
    int tmp;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>tmp;
            pq.push(tmp);
        }
        for(int k=0;k<n-1;k++){
            pq.pop();
        }
    }
    return pq.top();
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,tmp;
    cin>>n;

    int res=result(n);

    cout<<res;

}