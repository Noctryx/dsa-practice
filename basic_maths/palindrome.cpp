#include<bits/stdc++.h>
using namespace std;
void isPalindrome(int n)
{
    int compare=n;
    int reversedNum=0;
    while(compare>0)
    {
        reversedNum=reversedNum * 10 + compare % 10;
        compare=compare/10;
    }

    if(reversedNum == n)
    {
        cout << "true";
    }                    
    else{
        cout << "false";
    }
}
int main()
{
    int n;
    cin >> n;
    isPalindrome(n);
    return 0;
}