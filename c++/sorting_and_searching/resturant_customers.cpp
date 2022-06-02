#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;cin >> n;
    map<int,bool> isStart;
    int timing[400001];
    for(int i=0;i<2*n;i+=2){
        cin >> timing[i] >> timing[i+1];
        isStart[timing[i]]=true;
        isStart[timing[i+1]]=false;
    }
    sort(timing,timing+2*n);
    int co=0;
    int res=0;
    for(int i=0;i<2*n;i++){
        if(isStart[timing[i]]) co++;
        else co--; 
     //   cout << timing[i] << ' ';
        res=max(res,co);
    }
   // cout << '\n';
    cout << res << '\n';
 
 
}