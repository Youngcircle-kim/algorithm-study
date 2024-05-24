#include<bits/stdc++.h>
using namespace std;


int N, M, x, y, cnt;
int arr[201][201];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >>M;
    
    for (int i = 1; i <= M; i++)
    {
        cin >> x >> y;
        arr[x][y] = 1;
        arr[y][x] = 1;
    }
    cnt = 0;
    for (int i = 1; i <= N-2; i++)
    {
        for(int j = i+1; j <= N-1; j++)
        {
            for (int t = j+1; t <= N; t++)
            {
                if (arr[i][j] || arr[j][t] || arr[i][t])
                {
                    continue;
                }
                cnt++;
            }
        }
    }
    
    cout << cnt;
    
}