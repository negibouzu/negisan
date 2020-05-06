//ABC128C 失敗例　

#include <bits/stdc++.h>
using namespace std;

int N,M;
int a[10][10];
int p[10];
int cnt;
int lit;
int ans=0;

void dfs(vector<int>A){
  if(A.size() == N+1){
    lit=0;
    for(int i=0;i<M;i++){
      cnt=0;
      for(int j=0;j<N;j++){
        if((a[i][j]==1)&&(A[j+1]==2)){
          cnt++;
        }
      }
      
     for(int i=1;i<N+1;i++){
      cout<<A[i];
    }
    cout<<" "<<cnt<<" "<<cnt%2<<" "<<p[i]<<endl;  
      
   
      if(cnt%2==p[i]){
        lit++;
      }
    } 
    if(lit==2) ans++;
    
    return;
  }
  
  A.push_back(A.back());
  while(A.back()<=2){
    dfs(A);
    A.back()++;
  }
}

int main(){
  cin>>N>>M;
  int k;
  int temp;
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      a[i][j]=0;
    }
  }   
  for (int i=0;i<M;i++){
    cin>>k;
    for(int j=0;j<k;j++){
      cin>>temp;
      temp--;
      a[i][temp]=1;
    }
  }

  for(int i=0;i<M;i++){
    cin>>p[i];
  }
  
  dfs(vector<int>(1,1));
  cout<<ans<<endl;
  
  
}

  
