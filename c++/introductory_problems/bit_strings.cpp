#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
typedef unsigned long long ll;
ll x=1e9+7;
int main(){
	ll n;cin >> n;
        ll k=1;
        for(ll i=1;i<=n;i++){
           k*=2;
           k%=x;
           //cout << k << " ";
	}
        cout << k << '\n';
 
}