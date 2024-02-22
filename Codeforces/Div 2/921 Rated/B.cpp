#include <bits/stdc++.h>
#define fi first 
#define se second 
#define mp make_pair
#define pb push_back
#define endl "\n"
#define MOD 1000000007
#define pii pair<int,int>
#define debug cout << 1 << endl
#define int long long
#define vl vector<long long>
typedef long long ll; 

using namespace std;

const int mxN=100005;
const int INF=1e9;
const long long INFll=1e18;

signed main() {
    cin.tie(0) -> sync_with_stdio(false); cout.tie(0);
    int TT=1;
    cin>>TT;
    while (TT--) {
        int f,n;cin>>f>>n;
        unordered_set<int> fac;
        for (int i=1;i*i<=f;i++) if (f%i==0) fac.insert(i),fac.insert(f/i);
        int ans=1;
        for (auto i:fac) if (f/i>=n) ans=max(ans,i);
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