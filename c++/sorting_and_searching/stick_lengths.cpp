#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;cin >> n;
    vector<ll> x;
    x.resize(n);
    for(auto &i:x) cin >> i;
    sort(x.begin(),x.end());
    ll mid=n/2;
    ll k=x[mid];
    ll s=0;
 
 
 
   
    for(auto &i:x){
        s+=abs(i-k);
      
    }
    cout << s<< '\n';
}