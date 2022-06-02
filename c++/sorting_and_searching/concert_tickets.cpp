#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin >> n >> m;
    multiset<int> x;
    for(int i=0;i<n;i++){
      int k;cin >> k;
      x.insert(k);
    }
    while(m--){
        int q;cin >> q;
        
        auto it=x.lower_bound(q);
        if(x.size()==0){
            cout << "-1\n";
        }
        else{
            if(it!=x.end()){
                if(*it==q){
                    cout << *it << '\n';
                    x.erase(it);
                }
                else{
                
                    if(it==x.begin()) cout << "-1\n";
                    else{
                        it--; 
                        cout << *it << '\n';
                        x.erase(it);
                    }
                }
            }else{
                it--;
                cout << *it << '\n';
                x.erase(it); 
            }   
        }
    }
}