#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
typedef long long ll;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n,m;cin>>n>>m;
        vector<int> a(n);
        for (auto &x:a) cin>>x;
        vector<int> cnt(n,0);
        int sumDigit=0;
        for (int i=0;i<n;i++) {
            if (a[i]%10==0) {
                int tmp=a[i];
                while (tmp%10==0) {
                    tmp/=10;
                    cnt[i]++;
                }
            } 
            int tmp=a[i];
            while (tmp>0) {
                tmp/=10;
                sumDigit++;
            }
        }
        //cout << sumDigit << "\n"; 
        sort(cnt.begin(),cnt.end(),greater<int>());
        int it=0;
        int take=1;
        while (it<n) {
            if (take%2) {
                sumDigit-=cnt[it];
            }
            take++;
            it++;
        }
        if (sumDigit>=m+1) cout << "Sasha";
        else cout << "Anna";
        cout << "\n";
    }
    return 0;
}