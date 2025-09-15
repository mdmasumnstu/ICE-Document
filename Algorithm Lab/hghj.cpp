#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) 
    
    {
        int n, m = 0;
        cin >> n;
        
        for (int i = 1; i < n; i++) 
        { 
            if (i % 3 == i % 5) 
            {
                m++;
            }
        }
        
        cout <<m<< endl;
    }
    
    return 0;
}

