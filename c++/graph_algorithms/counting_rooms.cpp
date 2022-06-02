#include<bits/stdc++.h>
#define RSIZE 1001
#define CSIZE 1001
using namespace std;
 
void bfs(pair<int,int> source,char grid[][CSIZE],bool vis_grid[][CSIZE],int n,int m){
        queue<pair<int,int>> hold;
        hold.push(source);
        int dir[2][4]={
            {0,+1,-1,0},   
            {+1,0,0,-1}
        };
        while(!hold.empty()){
            auto node=hold.front();
            hold.pop();
            int row=node.first;
            int col=node.second;
            if(grid[row][col]=='.'){
                for(int i=0;i<4;i++){
                    int adjrow=row+dir[0][i];
                    int adjcol=col+dir[1][i];
                    if(grid[adjrow][adjcol]=='.' && (adjrow>=0 && adjrow<n) && (adjcol>=0 && adjcol<m) && !(vis_grid[adjrow][adjcol])){
 
                            vis_grid[adjrow][adjcol]=true;
                            hold.push(make_pair(adjrow,adjcol));
                     
                    }
                }
            }
        }
}
int main(){
    
    char grid[RSIZE][CSIZE];
    bool vis_grid[RSIZE][CSIZE];
    memset(vis_grid,false,RSIZE*CSIZE);
    memset(grid,0,RSIZE*CSIZE);
    int n,m;cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> grid[i][j];
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << grid[i][j];
        }
        cout << '\n';
    }*/
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis_grid[i][j] && grid[i][j]=='.'){
                   //cout << i << ' ' << j << '\n'; 
                   bfs(make_pair(i,j),grid,vis_grid,n,m) ;           
                   c++;
            }
        }
    }
    cout << c << '\n';
   
 
       
    
 
}