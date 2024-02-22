#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    int tc;cin>>tc;
    while (tc--) {
        int n;cin>>n;
        string s;cin>>s;
        int start=0, end=0;
        for (int i=0;i<n;i++) {
            if (s[i]=='B') {
                start=i;
                break;
            }
        }
        for (int i=n-1;i>=0;i--) {
            if (s[i]=='B') {
                end=i;
                break;
            }
        }
        cout << end-start+1;
        cout <<  "\n";
    }
    return 0;
}