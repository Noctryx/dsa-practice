#include<bits/stdc++.h>
using namespace std;
void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    
}
void pattern5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
}
void pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern9(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i+1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*n-2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
void pattern10(int n)
{
    for(int i=0;i<(2*n)-1;i++)
    {
        if(i>=n)
        {
            for(int k=0;k<(2*n)-i-1;k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else
        {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    }
}
void pattern11(int n)
{
    int start=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            {
                start=1;
            }
            else{
                start=0;
            }
        for(int j=0;j<=i;j++)
        {
            
            cout << start << " ";
            start=1-start;
                
            
        }
        cout<<endl;
    }
}
void pattern12(int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<j+1;
        }
        for(int j=1 ;j<2*(n-i-1);j++)
        {
            cout << " ";
        }
        for(int j=i+1;j>0;j--)
        {
            cout << j;
        }
        cout<<endl;
    }
}
void pattern13(int n)
{
    int num=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<< num <<" ";
            num++;
        }
        cout<<endl;
    }
}
void pattern14(int n)
{
    for(int i=0;i<n;i++)
    {
        char letter='A';
        for(int j=0;j<=i;j++)
        {
            cout<< letter<<" ";
            letter++;
        }
        cout<<endl;
    }
}
void pattern15(int n)
{
    for(int i=1;i<=n;i++)
    {
        char letter='A';
        for(int j=0;j<n-i+1;j++)
        {
            cout<< letter;
            letter++;
        }
        cout<<endl;
    }
}
void pattern16(int n)
{
    char letter='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<< letter<<" ";
        }
        cout<<endl;
        letter++;
    }
}
void pattern17(int n)
{
     for(int i=0;i<n;i++)
    {
        char letter='A';
        int breakpoint=((2*i)+1)/2;
        for(int j=1;j<n-i;j++) 
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<letter;
            if(j>=breakpoint)letter--;
            else letter++;
        }
        cout<<endl;
    }
}
void pattern18(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j='E'-i;j<='E';j++)
        {
            cout<< j <<" ";
        }
        cout<<endl;
    }
}
void pattern19(int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n-i;j++)
        {
            cout << "*";
        }
        for(int j=0;j<2*i;j++)
        {
            cout << " ";
        }
        for(int j=n;j>i;j--)
        {
            cout<<"*";
        }
        cout << endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<(2*(n-i-1));j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern20(int n)
{
    
}


int main()
{
    int n;
    cin>>n;
    pattern19(n);
    return 0;
} 