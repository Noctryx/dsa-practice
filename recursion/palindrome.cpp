#include<bits/stdc++.h>
using namespace std;
bool func(int i, const string &str)
{
    int n=str.length();
    if(i>=n/2) return true;
    if(str[i]!=str[n-i-1]) return false;
    return func(i+1, str);
}
int main()
{
    string str;
    cin >> str;
    cout <<  func(0,str);
    return 0;
}