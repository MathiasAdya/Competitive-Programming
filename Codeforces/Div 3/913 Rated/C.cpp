#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    //cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n,m,k;cin>>n>>m>>k;
        int sz=k+1;
        pair<bool,bool> cnt[k+1];
        memset(cnt,0,sizeof cnt);
        for (int i=0;i<n;i++) {
            int tmp;cin>>tmp;
            if (tmp>k) continue;
            cnt[tmp].first=1;
        }
        for (int i=0;i<m;i++) {
            int tmp;cin>>tmp;
            if (tmp>k) continue;
            cnt[tmp].second=1;
        }
        int limitA=0, limitB=0;
        bool ok=1;
        for (int i=1;i<=k;i++) {
            if (cnt[i].first) limitA++;
            if (cnt[i].second) limitB++;
            if (!cnt[i].first and !cnt[i].second) ok=0;
        }
        if (!ok or limitA<(k/2) or limitB<(k/2)) cout <<"NO";
        else cout << "YES";
        cout << "\n";
    }
    return 0;
}