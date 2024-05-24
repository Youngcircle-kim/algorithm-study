#include<bits/stdc++.h>
using namespace std;
int N, len, answer;
vector<int> K;
void sol(int x){
    if (N < x) 
    {
        return;
    }
    answer = max(answer, x);

    x *= 10; 

    for (int i = 0; i < len; ++i)
    {
        sol(x + K[i]);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> len;
    K = vector<int>(len);
    for (int &k : K)
    {
        cin >> k;
    }
    
    sol(0);
    cout << answer;
}