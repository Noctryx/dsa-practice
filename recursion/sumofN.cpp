#include<bits/stdc++.h>
using namespace std;
void sumOfN(int i, int sum)
{
    if(i < 0)
    {
        cout << sum;
        return;
    }
    sumOfN(i-1,sum+i);
}
int main()
{
    int n;
    cin >> n;
    sumOfN(n,0);
    return 0;
}