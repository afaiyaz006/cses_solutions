#include<bits/stdc++.h>
#define inf 20*1e9+1;
using namespace std;
typedef long long ll;
 
int main(){
    
    ll n;cin >> n;
    vector<ll> apples(n+1);
    for(int i=0;i<n;i++) cin >> apples[i];
    ll res=inf;
    for(int i=0;i<(1<<n);i++){
        ll x=0;
        ll y=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)) x+=apples[j];
            else y+=apples[j];
            
        }
        res=min(res,abs(x-y));
    }
    cout << res << '\n';
 
    
}