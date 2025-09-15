#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                sum=sum+a[i]+1;
            }
            else
            sum=sum+a[i];
        }
        
        cout<<sum<<endl;
    }
}