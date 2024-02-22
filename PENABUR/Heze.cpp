#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n;cin>>n;
        int a[n];
        for (int i=0;i<n;i++) cin>>a[i];
        vector<int> b;
        b.push_back(a[0]);
        for (int i=1;i<n;i++) {
            if (a[i-1]>a[i]) b.push_back(a[i]);
            b.push_back(a[i]);
        }
        cout << b.size() << "\n";
        for (auto i:b) cout << i << " ";
        cout << "\n";
    }
   return 0;
}