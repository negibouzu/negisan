#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin>>N>>M;
  vector <int> a(N);
  map<int,int> mp;

  for(int i=0;i<N;i++){
    cin>>a[i];
    mp[a[i]]++;
  }
  
  //itr->second　投票でいうと得票数
  //itr->first 投票でいうと候補者名
  
  for(auto itr=mp.begin();itr !=mp.end();itr++){
    if((itr->second)>N/2){
      cout<<(itr->first)<<endl;
      return 0;
    }
  }
  cout<<"?"<<endl;
  return 0;
}

  
  
