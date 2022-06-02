#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll A[1000001]={0,};
	ll n;cin >> n;
	ll s=n*(1+n)/2;
	if(s&1){
            cout << "NO\n";	   
	}
	else{
	   cout << "YES\n";
	   ll wi=0;
       ll l=1;
	   ll c=0;
       //ll i=1;
       ll k=s/2;
           //cout << k << "\n";
        for(ll i=1;i<=n;i++){
            wi+=i;
            A[i]=i;
            c++;
            if(wi>=k) break;
        }
        if(wi>k){
            //cout << wi-k << '\n';
            A[wi-k]=0;
            c--;
        }
        /*while(wi+i<=k){
 		    wi+=i;
            A[i]=i;
            i++;
            c++;  	       
            if(wi+i>k){
                A[i]=i;
                A[l]=0;
                wi-=l;
                wi+=i;
                i++;
                l++;
 
 		    }
            
        }
        cout << i << " " << l << "\n";       
        
        cout << wi << '\n';
 
   
        cout << l << "\n";
        while(wi>k){
            wi-=l;
            A[l]=0;
            l++;
            c--;
        }*/
 
        cout << c << '\n';
        ll x=0,y=0;
        for(ll i=1;i<=n;i++){
            if(A[i]>0){
                 cout << A[i] << " ";
                 x+=A[i];
            }
 
        }
        cout << '\n';
         
        cout << n-c << '\n';
        for(ll i=1;i<=n;i++){
            if(A[i]==0){
                 cout << i << " ";
                 y+=i;
            }
 
        }
        cout << '\n';
        //cout << x << " \n";
        //cout << y << " \n";
        //if(x!=y) cout << "WRONG\n";
        //else if(x==y) cout << "ACCEPTABLE\n";
           
	}
	
 
}