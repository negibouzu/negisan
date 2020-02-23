#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin >>N>>M;
  if (N==M){
    cout<<0<<endl;
    return 0;
  }
  int P[M];
  int D[M-1];
  
  //vector <int> P;
  //vector <int> D;
  for (int i=0;i<M;i++){
    cin>>P[i];
  }
  sort(P,P+M);
  for(int i=0;i<M-1;i++){
    D[i]=P[i+1]-P[i];
  }
  sort(D,D+M-1);
  int ans=0;
  for(int i=0;i<M-N;i++){
    ans=ans+D[i];
  }
  cout<<ans<<endl;
  return 0;
}
