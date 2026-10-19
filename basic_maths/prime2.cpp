#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int cnt = 0;
    for (int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            cnt++;
        }
    }
    if(cnt > 2)
    {
        cout << "divisors:" << cnt << endl ;
        return false;
    }
    else{
        cout << "divisors:" << cnt << endl ;
        return true;
    }
    
}
int main()
{
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}