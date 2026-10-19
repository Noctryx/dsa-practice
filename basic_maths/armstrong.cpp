#include<bits/stdc++.h>
using namespace std;
static bool isArmstrong(int n)
{
    int k=to_string(n).length();
    int num=n;
    int sum = 0;
    while(num>0)
    {
        int ld=num%10;
        sum = sum + pow(ld,k);
        num=num / 10;
    }
    return sum == n;
}
int main()
{
    int n;
    cin >> n;
    cout << isArmstrong(n);
    return 0;
}