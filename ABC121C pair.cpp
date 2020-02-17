#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  cin>>N>>M;
  vector<pair<long long,long long>>vec(N);
  for (int i=0;i<N;i++){
    cin>>vec[i].first>>vec[i].second;
  }
  sort(vec.begin(),vec.end());//配列を要素１昇順，要素２昇順でソート
  long long ans=0;
  int i=0;
  while(M-vec[i].second>0){
    ans=ans+vec[i].first*vec[i].second;
    M=M-vec[i].second;
    i++;}

  while(M>0){
    ans=ans+vec[i].first;
    M=M-1;
  }
  cout<<ans<<endl;
  return 0;

}
