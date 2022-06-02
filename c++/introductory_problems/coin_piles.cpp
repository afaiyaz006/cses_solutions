#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;cin >> t;
    while(t--){
        ll a,b;cin >> a >> b;
        if(a>b){
            if(2*b<a){
                cout << "NO\n";
            }
            else{
                if((a+b)%3==0) cout << "YES\n";
                else cout << "NO\n";
            }
        }
        else if(b>a){
            if(2*a<b){
                cout << "NO\n";
            }
            else{
                if((a+b)%3==0) cout << "YES\n";
                else cout << "NO\n";
            }
        }
        else{
            if((a+b)%3==0) cout << "YES\n";
            else cout << "NO\n";
        }
 
    }
 
 
 
}