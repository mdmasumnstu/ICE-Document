#include <iostream>
#include <cmath>
using namespace std;

int isPrime(long long n) 
{
    if (n <= 1) 
        return 0;
    if (n <= 3) 
        return 1;
    if (n % 2 == 0 || n % 3 == 0) 
        return 0;

    for (long long i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (isPrime(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
