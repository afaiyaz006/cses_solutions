#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll A[200001];
    ll s1=0;
    ll n;scanf("%d",&n);for(ll i=1;i<n;i++){ cin >> A[i];s1+=A[i];}
    //ll k=*max_element(A,A+n);
    ll s2=n*(n+1)/2;
    printf("%d\n",s2-s1);
    
        
 
 
}