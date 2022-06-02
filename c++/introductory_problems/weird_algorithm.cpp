#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
    
    ll n;scanf("%lld",&n);
    printf("%d ",n);
    while(n!=1){
        
        if(n&1){
        
            printf("%lld ",3*n+1);
            n=3*n+1;
        }
        else{  printf("%lld ",n/2);n/=2;}
    
    }
 
    printf("\n");
 
}