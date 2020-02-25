#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K;
  cin >>N>>K;
  int a[N];
  map <int,int> mp;
  for (int i=0;i<N;i++){
    cin>>a[i];
    mp[a[i]]++;
  }
  int num=mp.size();
  int col[num];
  auto itr=mp.begin();
  for (int i=0;i<num;i++){
    col[i]=itr->second;
    //cout<<i<<" "<<itr->first<<" "<<col[i]<<endl;
    itr++;
  }
  int ans=0;
  sort(col,col+num);
  int i=0;
  while(num>K){
    ans=ans+col[i];
    num--;
    i++;
  }
  cout<<ans<<endl;
  return 0;
}

  
       
       
