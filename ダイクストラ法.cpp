#include <bits/stdc++.h>
using namespace std;
static const int INF=10000000;

int n;
int M[100][100];

int color[100];
int d[100];

void dijkstra(){
    int minv;
    for(int i=0;i<n;i++){
        color[i]=0;
        d[i]=INF;
    }
  
    d[0]=0;
    color[0]=1;
    
    while(1){
        minv=INF;
        int u=-1;
        for(int i=0;i<n;i++){
            if(minv>d[i]&&color[i] !=2){
                u=i;
                minv=d[i];
            }
        }
        if(u==-1){
            break;
        }
        color[u]=2;
        cout<<u<<"BLACK"<<endl;
      
        for(int v=0;v<n;v++){
            if(color[v] !=2 && M[u][v] != INF){
                if(d[v]>d[u]+M[u][v]){
                    d[v]=d[u]+M[u][v];
                  cout<<v<<"GRAY"<<endl;
                    color[v]=1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<" "<<(d[i]==INF ? -1:d[i])<<endl;
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            M[i][j]=INF;
        }
    }
    
    int u,k,v,c;
    for (int i=0;i<n;i++){
        cin>>u>>k;
        for(int j=0;j<k;j++){
            cin>>v>>c;
            M[u][v]=c;
        }
    }
    dijkstra();
    return 0;
}
