#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll  c=0;
    ll t=0;
    ll cf[200]={0,};
 
    for(ll i=0;i<s.length();i++) cf[s[i]]++;
 
    for(ll i=64;i<=122;i++){
         if(cf[i]&1 && cf[i]>=1) c++;
    }
    if(c>=2) cout << "NO SOLUTION\n";
 
    else{
        string k;
        for(ll i=65;i<=122;i++){
            if(!(cf[i]&1)){
                for(ll j=0;j<cf[i]/2;j++) k+=i;
            }
        }
        for(ll i=65;i<=122;i++){
            if(cf[i]&1){
                for(long long  j=0;j<cf[i];j++) k+=i;
            }
        }
        for(ll i=122;i>=65;i--){
            if(!(cf[i]&1)){
                for(ll j=0;j<cf[i]/2;j++) k+=i;
            }
        }
        cout << k << '\n';
    }
 
}