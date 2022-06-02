#include<bits/stdc++.h>
using namespace std;
class Book{
    public:
        int price;
        int pages;
};
int table[1001][100001]={0,};
int solve(vector<Book> books,int n,int price_limit){
    for(int i=1;i<=n;i++){
        for(int j=0;j<=price_limit;j++){
            if(books[i].price<=j){
                int included=books[i].pages+table[i-1][j-books[i].price];
                int excluded=table[i-1][j];
                table[i][j]=max(included,excluded);
            }
            else{
                table[i][j]=table[i-1][j];
            }
        }
    }
    return table[n][price_limit];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,w;
    cin >> n >> w;
    vector<Book> books(n+1);
    books[0].price=0;
    books[0].pages=0;
    for(int i=1;i<=n;i++) cin >> books[i].price;
    for(int i=1;i<=n;i++) cin >> books[i].pages;
    
    cout << solve(books,n,w) << '\n';
}