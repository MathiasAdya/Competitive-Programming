#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n;cin>>n;
        vector<int> a(n);
        for(auto &i:a) cin>>i;
        vector<int> alp(26,0);
        for (int i=0;i<n;i++) {
            auto it=find(alp.begin(),alp.end(),a[i]);
            alp[it-alp.begin()]++;
            char ans=it-alp.begin()+'a';
            cout << ans;
        }
        cout << "\n";
    }
    return 0;
}