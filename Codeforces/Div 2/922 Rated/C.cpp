#include <bits/stdc++.h>
#define fi first 
#define se second 
#define mp make_pair
#define pb push_back
#define endl "\n"
#define MOD 1000000007
#define pii pair<int,int>
#define debug cout << 1 << endl
#define vl vector<long long>
typedef long long ll; 

using namespace std;

const int mxN=100005;
const int INF=1e9;
const long long INFll=1e18;

int main() {
    cin.tie(0) -> sync_with_stdio(false); cout.tie(0);
    int TT=1;
    cin>>TT;
    while (TT--) {
        // SOAL GAJELAS
        ll a,b,r;cin>>a>>b>>r;
        ll ans=abs(a-b);
        for (int i=1;i<=r;i++) {
            ll comp=abs((a^i)-(b^i));
            ans=min(ans,comp);
            cout << comp << " " << i << endl;
        }
        cout << ans;
        cout << endl;
    }
    return 0;
}


/*
CHECK FOR OVERFLOWS (look at constraints)
corner case (n==1 or n=mxN)
time limit 1s = 1e9 operations
max memory 1e7
*/