#include <iostream>
#include <vector>
#include <map>


using namespace std;

int solve(vector<int> &arr, int n){
    vector<int> dp(n+1,0);
    int answer=0;
    int max_small=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                max_small=max(max_small, dp[j]);
            }
        }
        dp[i]=max_small+1;
        answer=max(answer,dp[i]);
        max_small=0;
    }
    return answer;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res=solve(arr, n);

    cout<<res;
}
