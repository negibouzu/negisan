#include <bits/stdc++.h>
using namespace std;
static const int INF=100000000;

vector<int> d(110,INF);
int n;
int u,k,v;
int g[110][110];
int bfs(int s){
  queue<int> q;
  q.push(s);
  d[s]=0;
  
  //BFS 本体
  
  while(!q.empty()){
    u=q.front();
    q.pop();
    for(int v=0;v<n;v++){
      //cout<<"v"<<v<<"u"<<u<<"*"<<g[v][u]<<endl;
      if(g[u][v]==0) continue;
      if(d[v]!=INF) continue;
      q.push(v);
      d[v]=d[u]+1;
    }
  }
  
  //関数内で出力
  
  for(int i=0;i<n;i++){
    cout<<i+1<<" "<<(d[i]==INF ? (-1):d[i])<<endl;
  }
  return 0;
}
  
int main(){
  cin>>n;
  for(int i=0;i<110;i++){
    for(int j=0;j<110;j++){
      g[i][j]=0;
    }
  }
  
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v;
      g[u-1][v-1]=1;
    }
  }
  
  /*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     cout<<g[i][j];
    }
    cout<<endl;
  }
  cout<<endl;
  cout<<INF<<endl;*/
  
  bfs(0);
  return 0;
}
