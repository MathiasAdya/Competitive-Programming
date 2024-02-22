#include <bits/stdc++.h>
using namespace std;
const int mxN=1e6;
#define endl "\n"
#define int long long

void solve() {
	int n;cin>>n;
	int sum=(n*(1+n))/4;
	set<int> s1;
	int indexP=n, indexK=1, ans=0, i=1;
	while (ans<sum) {
		if (i%2==1) {
			ans+=indexP;
			s1.insert(indexP--);
		}
		else {
			ans+=indexK;
			s1.insert(indexK++);
		}
		i++;
	}
	if (ans==sum && n!=1) cout << "YES";
	else {
		cout << "NO";
		return;
	}
	cout << endl;
	cout << s1.size() << endl;
	for (auto x:s1) cout << x << " ";
	cout << endl << indexP-indexK+1 << endl;
	for (int i=indexK;i<=indexP;i++) cout << i << " ";
}

signed main() {
	cin.tie(0) -> sync_with_stdio(false);
	solve();
	return 0;
}
