#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll A[200001],c=0;
    ll n;scanf("%lld",&n);
    for(ll i=0;i<n;i++) cin >> A[i];
    for(ll i=0;i<n-1;i++){
        if(A[i+1]<A[i]){
            c+=abs(A[i+1]-A[i]);
            A[i+1]+=abs(A[i+1]-A[i]);
        }
    }
    printf("%lld\n",c);
}