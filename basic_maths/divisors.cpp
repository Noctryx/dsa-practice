#include<bits/stdc++.h>
using namespace std;
void divisors(int n)
{
    vector<int> vec ;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            vec.push_back(i);
        }
    }
    for(int x : vec)
    {
        cout << x << " " ;
    }
    
}
int main()
{
    int n;
    cin >> n;
    divisors(n);
    return 0;
}