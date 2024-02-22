#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(false),cout.tie(0);
    int n,q;cin>>n>>q;
    int a[n];for (int i=0;i<n;i++) cin>>a[i];
    while (q--) {
        int x;cin>>x;
        int lo=0,hi=n-1;
        while (lo<hi) {
            int mid=(lo+hi)/2;
            if (a[mid]<x) lo=mid+1;
            else hi=mid;
        }
        if (a[hi]==x) cout << hi;
        else cout << -1;
        cout << endl;
    }
    return 0;
}