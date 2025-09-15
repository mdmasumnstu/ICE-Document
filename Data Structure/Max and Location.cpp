#include<iostream>
using namespace std;
int main()
{
    int data[10]={22,65,1,99,32,17,74,49,33,2};
    int n=10,loc=0,max=data[loc];

    for(loc=1;loc<n;loc++)
    {
        if(data[0]<data[loc])
        {
            max=data[loc];
            loc++;
        }
    }
    cout<<"Data: "<<max<<endl<<"Location: "<<loc<<endl;
}