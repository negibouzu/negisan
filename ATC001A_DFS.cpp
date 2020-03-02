#include <bits/stdc++.h>
using namespace std;

int H, W;
char field[600][600];
bool reached[600][600];

void search(int x, int y){
  if(x < 0 || x >= H || y < 0 || y >= W || field[x][y] == '#')return;
  if(reached[x][y]) return;
  reached[x][y] = true;
  search(x + 1, y);
  search(x - 1, y);
  search(x, y - 1);
  search(x, y + 1);
}
  
int main(){
  cin >> H >> W;
  int xs, ys, xg, yg;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> field[i][j];
      if(field[i][j] == 's'){
        xs = i; ys = j;
      }
      if(field[i][j] == 'g'){
        xg = i; yg = j;
      }
    }
  }
  search(xs, ys);
  if(reached[xg][yg]) cout << "Yes" << endl;
  else cout << "No" << endl;
}
