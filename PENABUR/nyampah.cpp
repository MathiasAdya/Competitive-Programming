#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n;cin>>n;
        int l=1,r=n;
        for (int i=0;i<n;i++) {
            if (i%2) cout << l++;
            else cout << r--;
            cout << " ";
        }       
        cout << "\n";
    }
    return 0;
}