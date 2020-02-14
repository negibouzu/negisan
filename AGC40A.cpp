#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int N=S.length()+1;
  int p[N];

  for(int i=0;i<N;i++){
    int tempA=0;
    int tempB=0;
    for(int j=i;j<N-1;j++){
      if (S.at(j)=='>'){
        tempA++;
      }
      else break;
    }
    for(int k=i-1;k>-1;k--){
      if(S.at(k)=='<'){
        tempB++;
      }
      else break;
    }
    //cout<<tempA<<" "<<tempB<<" "<<max(tempA,tempB)<<endl;
    p[i]=max(tempA,tempB);
  }
  
  long long ans=0;
  for(int i=0;i<N+1;i++){
    ans=ans+p[i];
  }
  cout <<ans<<endl;
  
  return 0;
}

      
        
        
      
        
      