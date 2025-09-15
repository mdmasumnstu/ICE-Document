#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        // Check if total horizontal length == total vertical length
        if ((l + r) == (d + u))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
