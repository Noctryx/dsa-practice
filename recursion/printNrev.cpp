#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
    if(n < 1) return -1;
    else cout << n << endl;
    func(n-1);
}
int main()
{
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}