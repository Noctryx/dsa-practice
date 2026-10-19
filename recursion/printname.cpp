#include<bits/stdc++.h>
using namespace std;
void func(int i,int n, string name)
{
    if(i > n) return;
    cout << name << endl;
    func(i+1,n,name);
}
int main()
{
    int n;
    cin >> n;
    string nam;
    cin >> nam;
    func(1,n,nam);
    return 0;
}