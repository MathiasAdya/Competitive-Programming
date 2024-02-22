#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n;cin>>n;
        vector<int> a(n);
        for (auto &x:a) cin>>x;
        int hold1=a[0], hold2=a[n-1];
        int ans1=1,ans2=1;
        for (int i=1;i<n;i++) {
            if (a[i]==hold1) ans1++;
            else break;
        }
        for (int i=n-2;i>=0;i--) {
            if (a[i]==hold2) ans2++;
            else break;
        }
        if (hold1==hold2) {
            if (ans1==n and ans2==n) cout << 0;
            else cout << n-ans1-ans2;
        }
        else cout << n-max(ans1,ans2);
        cout << "\n";
    }
    return 0;
}