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
        int sum=0;
        for (auto i:a) sum+=i;
        int eq=sum/n;
        int hold=0;
        bool ok=1;
        for (int i=0;i<n;i++) {
            if (a[i]<eq) {
                int need=eq-a[i];
                if (hold<need) ok=0;
                else hold-=need;
            }
            else {
                hold+=a[i]-eq;
            }
        }
        if (ok) cout << "YES";
        else cout << "NO";
        cout << "\n";
    }
    return 0;
}