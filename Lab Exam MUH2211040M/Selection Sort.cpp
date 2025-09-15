#include<iostream>
using namespace std;

int main()
{
	int a[100],n,i,j,k,temp,min;
	
	cout<<"Enter the array size:"<<endl;
	cin>>n;
	cout<<"Size: "<<n<<endl;
	
	cout<<"Input Array Element:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"The Array Element is:"<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	for (i = 0; i < n-1; ++i) 
	{
        min = i;
        for (j = i+1; j < n; ++j) 
		{
            if (a[j] < a[min]) 
			{
                min = j;
            }
        }

        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
        
        
        cout<<"Every Step: "<<endl;
        cout << "Step " << i + 1 << ": ";
        for (k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout<<endl;
    }

    
    cout<<"The Selection Sorted Array: "<<endl;
    for (i = 0; i < n; ++i) 
	{
       cout<<a[i]<<endl;
    }
    printf("\n");
    return 0;
}
