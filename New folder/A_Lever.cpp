#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int m,n,i;
        cin >> n;
        int a[n], b[n];
        m = 1;
        for ( i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        for ( i = 0; i < n; i++) 
        {
            cin >> b[i];
        }

        for ( i = 0; i < n; i++) 
        {
            if (a[i] > b[i]) 
            {
                m = m + a[i] - b[i];
            }
        }

        cout << m <<endl;
    }
    return 0;
}
