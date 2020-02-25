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
    cout<<col[i]<<endl;
  }
  cout<<mp.size();
  

}

  
       
