#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
 
ll table[1000000]={0,};
 
int main(){
   
    ll n;cin >> n;
    
    table[0]=1;
    table[1]=1;
    table[2]=2;
    table[3]=4;
    table[4]=8;
    table[5]=16;
    table[6]=32;
    if(n<7) cout << table[n] << '\n';
    else{
        for(int i=7;i<=n;i++){
            table[i]=0;
            for(int j=1;j<=6;j++){
                table[i]+=table[i-j]%mod;
            }
        }
            cout << table[n]%mod << '\n';    
    }
        
    
}