#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,t;
  cin >>s>>t;
  vector <char> sd(s.length());
  vector <char> td(t.length());
  for (int i=0;i<s.length();i++){
    sd[i]=s.at(i);
  }
  for (int i=0;i<t.length();i++){
    td[i]=t.at(i);
  }
  sort(sd.begin(),sd.end());
  sort(td.begin(),td.end(),greater<char>());
  
  if(s.length()<t.length()){
    for (int i=0;i<s.length();i++){
      if(sd.at(i)>td.at(i)){
        cout<<"No"<<endl;
        return 0;
      }
      else if(sd.at(i)<td.at(i)){
        cout<<"Yes"<<endl;
        return 0;
      }
    }
    cout<<"Yes"<<endl;
  }
  if(s.length()>=t.length()){
    for (int i=0;i<t.length();i++){
      if(sd.at(i)>td.at(i)){
        cout<<"No"<<endl;
        return 0;
      }
      else if(sd.at(i)<td.at(i)){
        cout<<"Yes"<<endl;
        return 0;
      }
    }
    cout<<"No"<<endl;
  }                       
  return 0;
}

  
    
    
