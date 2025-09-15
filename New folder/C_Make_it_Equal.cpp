#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canMakeEqual(vector<int>& S, vector<int>& T, int k) {
    sort(S.begin(), S.end());
    sort(T.begin(), T.end());
    return S == T;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> S(n), T(n);
        for (int i = 0; i < n; ++i) cin >> S[i];
        for (int i = 0; i < n; ++i) cin >> T[i];
        cout << (canMakeEqual(S, T, k) ? "YES" : "NO") << '\n';
    }
    return 0;
}
