#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 0; i <n ; i++) {
        int m;
        cin>>m;
        int a,b;

        vector<pair<int,int>> v;
        for(int j=0;j<m;j++){
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(), v.end());

        int k=0;
        int cnt=1;
        for(int l=0;l<m;l++){
            if(v[l].second<v[k].second){
                cnt+=1;
                k=l;
            }
            }
        cout<<cnt<<'\n';        } }


