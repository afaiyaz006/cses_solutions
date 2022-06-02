#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,m,k;
    cin >> n >> m >> k;
    ll A[200000];
    multiset<ll> B;
 
 
    int c=0;
    int f=0;
    for(ll i=0;i<n;i++) cin >> A[i];
    sort(A,A+n);
    for(ll i=0;i<m;i++){
        ll x;cin >> x;
        B.insert(x);
 
    }
    for(ll i=0;i<n;i++){
        ll v=A[i]-k;
        auto val=B.lower_bound(v);
        if(val!=B.end() && *val<=A[i]+k){
                c++;
                B.erase(val);
        }
    }
    cout << c << '\n';
 
 
}