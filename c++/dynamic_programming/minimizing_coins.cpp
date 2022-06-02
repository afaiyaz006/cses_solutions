#include<bits/stdc++.h>
using namespace std;
#define inf 1e9+1
int f[1000001]={0,};
int solve(int k,vector<int> &coins){
    if(k==0) return 0;
    else if(k<0) return inf;
    else if(f[k]) return f[k];
    else{
        int x=inf; 
        for(auto i:coins){
            x=min(x,solve(k-i,coins)+1);
            f[k]=x;    
        }
        return f[k];
    }
}
int main(){
    int n,k;cin >> n >> k;
    vector<int> coins(n);
    for(auto &i:coins) cin >> i;
    int res=solve(k,coins);
    if(res==inf) cout << "-1\n";
    else cout << res << '\n';
}