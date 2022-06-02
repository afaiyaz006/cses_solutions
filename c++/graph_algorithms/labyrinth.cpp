#include<bits/stdc++.h>
using namespace std;
char t[1000][1000];
char list_[1000][1000];
bool vis[1000][1000];
int level[1000][1000];
map<pair<int,int>,pair<int,int>> trace;
queue<pair<int,int>> hold;
  
void print_path(pair<int,int> node,pair<int,int> loc){
    stack<pair<int,int>> holder;
   
    holder.push(node);
    while(holder.top()!=loc){
               holder.push(trace[holder.top()]);
 
    }
    holder.pop();
    while(!holder.empty()){
        cout << t[holder.top().first][holder.top().second];
        holder.pop();
    }
    
}
 
void bfs(pair<int,int> loc,pair<int,int> end_pos,int n,int m){
    
  
    
   int dir[2][4]={
            {0,+1,-1,0},   
            {+1,0,0,-1}
    };
 
    hold.push(loc);
    bool flag=false;
 
    pair<int,int> node;
    int count=0;
    while(!hold.empty()){
        pair<int,int> y=hold.front();
        hold.pop();
        count++;
        //cout << "Node NO: " << count << ",  ";
        int row=y.first;
        int col=y.second;
        vis[row][col]=true;
        //cout << row << "," << col << "\n";
        for(int i=0;i<4;i++){
            int adjRow=row+dir[0][i];
            int adjCol=col+dir[1][i];
            pair<int,int> x=make_pair(adjRow,adjCol);
         
            if((list_[adjRow][adjCol]=='.' || list_[adjRow][adjCol]=='B') && (adjRow>=0 && adjRow<n) && (adjCol>=0 && adjCol<m) && !(vis[adjRow][adjCol])){
                    
                    level[x.first][x.second]=level[y.first][y.second]+1;
                    trace[x]=y;
                    if(list_[adjRow][adjCol]=='B'){
                        ///cout << "B found at: (" << adjRow << ',' << adjCol << ") .\n";
                        if(i==0) t[x.first][x.second]='R';
                        if(i==1) t[x.first][x.second]='D';
                        if(i==2) t[x.first][x.second]='U';
                        if(i==3) t[x.first][x.second]='L';
                        flag=true;
                        node=x;
                        break;                               
                    }
                    else{
                        if(i==0) t[x.first][x.second]='R';
                        if(i==1) t[x.first][x.second]='D';
                        if(i==2) t[x.first][x.second]='U';
                        if(i==3) t[x.first][x.second]='L';
                        
                    }   
                    //else cout << "Node found at: (" << adjRow << ',' << adjCol << ") .\n";          
                    vis[x.first][x.second]=true;  
                    hold.push(x);
                    
           
            }
            
        }
        if(flag) break;
        
    }
    if(flag){
        cout << "YES\n";
        cout << level[node.first][node.second] << '\n';
        print_path(node,loc);
 
        
        
    }
    else{
        cout << "NO\n";
    }
    
 
}
int main(){
    
    int n,m;cin >> n >> m;
    pair<int,int> pos;
    pair<int,int> end_pos;
    memset(vis,false,1000*1000);
    memset(level,0,1000*1000);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> list_[i][j];
            if(list_[i][j]=='A'){
                pos=make_pair(i,j);
            }
            if(list_[i][j]=='B'){
                end_pos=make_pair(i,j);
            }
        }
       
    }
    bfs(pos,end_pos,n,m);
 
}