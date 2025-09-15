#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the size: " << endl;
    cin >> n;

    // Input the array values
     vector<int> a(n);
    cout << "Enter the Values: " << endl;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl;

    // Output the original array
    cout << "The Array is: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

	//Checked Input data
	int data;
	cout<<"Enter Data: "<<endl;
	cin>>data;
	int posi=0;
	cout<<"The Data is: "<<data<<endl;
	
	//Find The Data
	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			cout<<"The data is found"<<endl;
			cout<<"Data Location is "<<i+1<<endl;
			
			posi++;
			break;
		}
		
	}
	
	if(posi==0)
	{
		cout<<"The data is not found"<<endl;
	}
	
}

