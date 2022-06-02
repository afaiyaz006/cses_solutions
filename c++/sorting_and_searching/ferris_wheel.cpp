#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lb(vector<ll> &A,ll low,ll  high,ll  key){
	ll  ind=-1;
	while((high-low)>=0){
		int mid=low+(high-low)/2;	
		if(A[mid]<=key){
			ind=mid;
			low=mid+1;
		}
		else high=mid-1;
 
 
	}
	return ind;
 
}
 
int main(){
	ll n,x;cin >> n >> x;
	vector<ll> A;
	A.resize(n);
	for(auto &i:A) cin >> i;
	sort(A.begin(),A.end());	
	ll c=0;
 
	for(ll i=0;i<n;i++){
		ll key=x-A[i];
		if(A[i]>x) continue;
		ll l=lb(A,i,n-1,key);
		if(l!=-1 && A[l]+A[i]<=x){
		//	cout << l << " " << i << "\n";
			c++;
			A[l]=x+1;
		}
		else c++;	
	}
	cout << c << '\n';
}
 