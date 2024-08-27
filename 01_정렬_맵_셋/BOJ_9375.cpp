#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        map<string, vector<string>> clothes;
        string name;
        string type;

        for(int j=0;j<m;j++){
            cin>>name>>type;
            clothes[type].push_back(name);
        }

        int val=1;

        for(const auto& cloth:clothes){
            int num=cloth.second.size();
            val*=(1+num);
        }
        cout<<val-1<<'\n';

    }
}
