#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n,k;cin>>n>>k;
        int a[n];
        int it=0, last=0;
        int lo=1, hi=n;
        while (lo<=hi) {
            if (!(last%2)) a[it]=lo++;
            else a[it]=hi--;
            if (it+k>=n) ++last,it=last;
            else it+=k;
        }
        for (auto i:a) cout << i << " ";
        cout << "\n";
    }
    return 0;
}