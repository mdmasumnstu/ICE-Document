#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int mex(set<int> s) {
    for (int i = 0; ; ++i) {
        if (s.find(i) == s.end()) return i;
    }
}

bool is_good_triplet(int x, int y, int z) {
    set<int> s = {x, y, z};
    int mx = max({x, y, z});
    int mn = min({x, y, z});
    return mex(s) == mx - mn;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        bool possible = true;
        for (int i = 0; i <= n - 3; ++i) {
            if (a[i] != -1 && a[i+1] != -1 && a[i+2] != -1) {
                if (!is_good_triplet(a[i], a[i+1], a[i+2])) {
                    possible = false;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
