#include<iostream>
#include<set>
using namespace std;
typedef long long ll;
int main(){
    set<ll> A;
    ll n;cin >> n;
    for(ll i=0;i<n;i++){
        ll k;cin >> k;
        A.emplace(k);
    }
    cout << A.size() << '\n';
 
}