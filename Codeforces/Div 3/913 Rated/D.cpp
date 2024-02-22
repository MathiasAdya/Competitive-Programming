#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n;cin>>n;
        vector<int> a(n+1,0), lst(n+1,0);
        for (int i=1;i<=n;i++) {
            cin>>a[i];
            if (a[i]!=a[i-1]) {
                lst[i]=i-1;
            }
            else {
                lst[i]=lst[i-1];
            }
        }
        for(auto i:lst) cout << i << " ";
        int q;cin>>q;
        while (q--) {
            int l,r;cin>>l>>r;
            // if (lst[r]>=l) cout << lst[r] <<  " " << r <<  "\n";
            // else cout << "-1 -1\n"; 
        }
        cout << "\n";
    }
    return 0;
}