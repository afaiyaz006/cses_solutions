#include<bits/stdc++.h>
using namespace std;
class Activity{
    public:
        int start;
        int end;
};
bool cmp(Activity a,Activity b){
    return (a.end<b.end);
}
int main(){
    int t;cin >> t;
    Activity a[200001];
    for(int i=0;i<t;i++) cin >> a[i].start >> a[i].end;
 
    sort(a,a+t,cmp);
    int c=0;
    int j=0;
    for(int i=1;i<t;i++){
        if(a[i].start>=a[j].end){
            c++;
            j=i;
        }
    }
    cout << c+1 << '\n';
    
 
}