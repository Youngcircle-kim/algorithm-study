#include <bits/stdc++.h>
using namespace std;
int N;
bool isPrime(int n)
{
    if (2 > n)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
bool isPalindrome(string s)
{
    string original = s;
    reverse(s.begin(), s.end());

    return original == s;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int k = N;; k++)
    {
        if (isPrime(k) && isPalindrome(to_string(k)))
        {
            cout << k << endl;
            break;
        }
    }

    return 0;
}