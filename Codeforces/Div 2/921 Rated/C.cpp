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
        int n,k,m;cin>>n>>k>>m;
        string s;cin>>s;
        int cur=0;
        vector<char> tmp;
        for (int i=0;i<n*k;i++) {
            if (i%k==0) cur=0;
            char ans=cur+'a';
            cur++;
            tmp.pb(ans);
        }
        int idxtmp=0, idxs=0;
        while (idxtmp<n*k and idxs<m) {
            

            if (idxs==m)
        }
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