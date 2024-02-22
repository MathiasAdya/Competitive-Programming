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
        int n;cin>>n;
        int a[n];for (int i=0;i<n;i++) cin>>a[i];
        int kiri[n], kanan[n];
        for (int i=0;i<n;i++) {
            int tmp=i;
            if (i==0) kiri[++tmp]=1;
            else {
                if ((a[i]-a[i-1])<(a[i+1]-a[i])) kiri[++tmp]=(a[i+1]-a[i]);
                else kiri[++tmp]=1;
            }
        }
        for (int i=n-1;i>0;i--) {
            if (i==n-1) kanan[i]=1;
            else {
                if ((a[i]-a[i-1])>(a[i+1]-a[i])) kanan[i]=(a[i]-a[i-1]);
                else kanan[i]=1;
            }
        }
        int dpkiri[n];dpkiri[0]=kiri[0];
        int dpkanan[n];dpkanan[0]=kanan[0];
        for (int i=1;i<n;i++) {
            dpkiri[i]=dpkiri[i-1]+kiri[i];
            dpkanan[i]=dpkanan[i-1]+kanan[i];
        }
        /*for (auto i:dpkiri) cout << i << " ";
        cout << endl;
        for (auto i:dpkanan) cout << i << " ";*/
        int m;cin>>m;
        while(m--) {
            int x,y;cin>>x>>y;
            if (x<y) {
                cout << dpkiri[y-1]-dpkiri[x-1];
            }
            else cout << dpkanan[x-1]-dpkanan[y-1];
            cout << endl;
        }
    }
    return 0;
}


/*
CHECK FOR OVERFLOWS (look at constraints)
corner case (n==1 or n=mxN)
time limit 1s = 1e9 operations
max memory 1e7
*/