#include <bits/stdc++.h>
using namespace std;

int N,M;
void dfs(vector<int>A){
    if(A.size()==N+1){
        for(int j=0;j<A.size();j++){
            cout<<A[j]<<" ";
        }
        cout<<endl;
        return ;
    }
    A.push_back(A.back());
    while(A.back()<=M){
        dfs(A);
        A.back()++;
    }
}
int main(void){
    cin>>N>>M;
    dfs(vector <int> (1,1));
    return 0;
}
