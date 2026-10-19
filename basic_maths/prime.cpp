#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; 1LL * i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    if (!(cin >> n)) return 0;
    bool ans = isPrime(n);
    cout << ans;
    return 0;
}