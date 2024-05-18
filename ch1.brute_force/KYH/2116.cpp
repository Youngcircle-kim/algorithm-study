#include <bits/stdc++.h>
using namespace std;
int N;
int d[10001][6], t = 0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> d[i][0] >> d[i][1] >> d[i][2] >> d[i][4] >> d[i][5] >> d[i][3];
    }

    for (int i = 0; i < 6; i++)
    {
        int bottom = i, cnt = 0, res = 0;

        while (cnt < N)
        {
            int val = 0;
            for (int j = 0; j < 6; j++)
            {
                if ((j != bottom && j != (bottom + 3) % 6) && val < d[cnt][j])
                {
                    val = d[cnt][j];
                }
            }
            res += val;
            if (cnt < N - 1)
            {
                int upp = d[cnt][(bottom + 3) % 6];

                for (int j = 0; j < 6; j++)
                {
                    if (upp == d[cnt + 1][j])
                    {
                        bottom = j;
                        break;
                    }
                }
            }
            cnt++;
        }
        t = max(t, res);
    }

    cout << t;
}