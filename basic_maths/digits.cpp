#include<bits/stdc++.h>
using namespace std;
void noOfDigits(int n)
{
    int counting=0;
    while(n>0)
    {
        counting++;
        n=n/10;
    }
    cout << counting;
}
int main()
{
    int n;
    cin >> n;
    noOfDigits(n);
    return 0;
}