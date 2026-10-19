#include<bits/stdc++.h>
using namespace std;
void revNum(int n)
{
    int reversedNum=0;
    while(n>0)
    {
        reversedNum=reversedNum * 10 + n % 10;
        n=n/10;
    }

    cout << reversedNum;
}
int main()
{
    int n;
    cin >> n;
    revNum(n);
    return 0;
}