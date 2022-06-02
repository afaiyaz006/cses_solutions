#include<bits/stdc++.h>
#define invalid -1
using namespace std;
int dict[1000001]={0,};
bool processed[1000001];
int solve(int x,vector<int> &coins){
    if(x==0) return 1;
    else if(x<0) return 0;
    if(processed[x]) return dict[x];
    else{
        int counter=0;
        for(auto i:coins){
            counter+=solve(x-i,coins);
            counter%=1000000007;
        }
        dict[x]=counter%1000000007;
        processed[x]=true;
        return counter;
    }
}
int main(){
    int n,x;cin >> n >> x;
    vector<int> coins(n);
    for(auto &i:coins) cin >> i;
 
    int res=solve(x,coins);
    cout << res << '\n'; 
 
}