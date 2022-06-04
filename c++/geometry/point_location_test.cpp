#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Vec{
    public:
        ll x;
        ll y;
        Vec(){
            x=0;
            y=0;
        }
        Vec(ll x,ll y){
            this->x=x;
            this->y=y;
        }
        Vec operator - (Vec const &a){
                Vec res;
                res.x=this->x-a.x;
                res.y=this->y-a.y;
                return res;
        }
        ll operator * (Vec const &a){
                return ((this->x)*(a.y))-((this->y)*(a.x));
        }
};
int main(){
    ll t;cin >> t;
    while(t--){
        Vec p1;
        Vec p2;
        Vec p3;
        ll res;
        cin >> p1.x >> p1.y;
        cin >> p2.x >> p2.y;
        cin >> p3.x >> p3.y;
        res=(p1-p3)*(p2-p3);
        //cout << (p1-p3).x << "i" << (p1-p3).y << "j" << '\n';
        //cout << (p2-p3).x << "i" << (p2-p3).y << "j" << "\n";
        //cout << res << '\n';
        if(res>0) cout << "LEFT\n";
        else if(res<0) cout << "RIGHT\n";
        else cout << "TOUCH\n";
 
 
    }
}