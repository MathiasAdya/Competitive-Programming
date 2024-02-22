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
        int n;cin>>n;  
        vector<pair<int,int>> arr(n);
        for (auto &x:arr) cin>>x.fi;
        for (auto &x:arr) cin>>x.se;
        sort(arr.begin(),arr.end());
        for (auto i:arr) cout << i.fi << " ";
        cout << endl;
        for (auto i:arr) cout << i.se << " ";
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