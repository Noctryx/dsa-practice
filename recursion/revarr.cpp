#include<bits/stdc++.h>
using namespace std;
void func(int p, int n, vector<int>& arr)
{
    if(p>=n) return;
    swap(arr[p],arr[n]);
    func(p+1,n-1, arr);
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    func(0, n-1, arr);
    for(int x : arr)
    {
        cout << x << " " ;
    }
    return 0;
}