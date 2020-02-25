#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  long long W, weight[110], value[110]; 
  long long dp[110][100100] = {0};
  
    cin >> N >> W;
    for (int i = 0; i < N; ++i) cin >> weight[i] >> value[i];

    for (int i = 0; i < N; ++i) {
        for (int sum_w = 0; sum_w <= W; ++sum_w) {

            // i 番目の品物を選ぶ場合
            if (sum_w - weight[i] >= 0) {
              dp[i+1][sum_w]=max(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
            }

            // i 番目の品物を選ばない場合
            dp[i+1][sum_w]=max(dp[i+1][sum_w], dp[i][sum_w]);
        }
    }

    cout << dp[N][W] << endl;
}





