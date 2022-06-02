#include<bits/stdc++.h>
using namespace std;
int f[1000001]={0,};
int max_digit(int n){
    int k=0;
    while(n){
        k=max(k,n%10);
        n/=10;
    }
    return k;
}
int solve_dp(int n){
    for(int i=1;i<=9;i++) f[i]=1;
    f[10]=2;
    if(n<=10) return f[n];
    for(int i=11;i<=n;i++){
        int k=max_digit(i);
        f[i]=f[k]+f[i-k];
    }
    return f[n];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin >> n;
    cout << solve_dp(n) << '\n';
    
}