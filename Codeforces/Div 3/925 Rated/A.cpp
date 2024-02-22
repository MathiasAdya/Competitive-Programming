#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n;cin>>n;
        bool ok=0;
        for (int i=1;i<=26;i++) {
            if (ok) break;
            for (int j=1;j<=26;j++) {
                if (ok) break;
                for (int k=1;k<=26;k++) {
                    if (ok) break;
                    if (i+j+k==n) {
                        int ans=i+j+k;
                        char p=i+'a'-1;
                        char q=j+'a'-1;
                        char r=k+'a'-1;
                        cout << p << q << r;
                        ok=1;
                    }
                }
            }
        }
        cout << "\n";
    }
    return 0;
}