#include <bits/stdc++.h>

using namespace std;
int Partion(int a[],int p,int r)
{
    int x=a[p];
    int i=p;
    for(int j=i+1; j<=r; j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            swap(a[i],a[j]);
        }
    }

    swap(a[p],a[i]);
    cout<<"Pivot:"<<x<<endl;
    cout<<"left subarr "<<endl;
    for(int k=p; k<i; k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;
    cout<<"right subarr "<<endl;
    for(int k=i+1; k<=r; k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;
    return i;

}
void quicksort(int a[],int p,int r)
{
    if(p<r)
    {
        int q=Partion(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    quicksort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
