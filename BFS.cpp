function 幅優先探索(v)
    Q ← 空のキュー
    v に訪問済みの印を付ける
    v を Q に追加
    while Q が空ではない do
        v ← Q から取り出す
        v を処理する
        for each v に接続している頂点 i do
            if i が未訪問 then
                i に訪問済みの印を付ける
                i を Q に追加




#include<bits/stdc++.h>
using namespace std;
int main() {
  int R,C;
  cin >>R>>C;
  int sy,sx,gy,gx;
  cin>>sy>>sx>>gy>>gx;
  sx--;sy--;gx--;gy--;
  string S;
  char a[51][51];//状態を入力
  int b[51][51];//手数を入力
  queue <pair<int,int>> q;
  int dx[4] = {-1, 0, 1, 0};
  int dy[4] = {0, -1, 0, 1};
  int INF=3000;
  
  //入力
  for (int i = 0; i < R; i++) {
    cin>>S;
    for (int j = 0; j < C; j++) {
      a[i][j]=S.at(j);
      b[i][j]=INF;
    }
  } 
  
  //スタート地点は０
  b[sy][sx]=0;
  q.push(make_pair(sy, sx));//qにスタート地点を挿入
  a[sy][sx] = '#';//一回数えたところを壁にして戻らないようにする
  
  while(!q.empty()){
    pair<int, int> p=q.front();//qから未処理地点を取り出す
      //４方向を順に探索する
    for(int i = 0; i < 4; i++){
      int x = p.second;
      int y = p.first;
      int newx = x + dx[i];
      int newy = y + dy[i];
      //cout<<newy<<" "<<newx<<"*"<<endl;
      if(0 <= newx && newx < C && 0 <= newy && newy < R && a[newy][newx] == '.'){
        q.push(make_pair(newy, newx));
        b[newy][newx] = min(b[newy][newx], b[y][x] + 1);
        //cout<<newy<<" "<<newx<<" "<<b[newy][newx]<<endl;
        a[newy][newx] = '#';//調べたところは壁にする
        }
    }
    q.pop();//調べたところを削除する
  }

    //試しに同じものを出力
  //for(int i=0;i<R;i++){
  //  for (int j=0;j<C;j++){
  //    cout<<a[i][j];
  //  }
  //  cout<<endl;
  //}
 
  //cout<<gy<<" "<<gx<<endl;
  cout<<b[gy][gx]<<endl;
return 0;
}
