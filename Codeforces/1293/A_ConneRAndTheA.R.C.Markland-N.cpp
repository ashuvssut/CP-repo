//https://codeforces.com/contest/1293/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int getpos(vector<int>& v, int s) {
	auto it = lower_bound(v.begin(), v.end(), s);
	if (it != v.end()) {

		int d1 = *it - s, d2 = d1;
		int h = (it)-v.begin();
		if (h != 0) { d2 = s - *(--it); }

		if (*it == s) { cout << 0 << "\n"; }
		else { cout << min(d1, d2) << "\n"; }
	}

	else {
		auto it2 =v.end()-1;
		cout << s- *it2 << "\n"; 
	}
	v.clear();
	return 0;
}

int main() {

	int t;
	cin >> t;

	while (t--) {
		int n, s, k, in;
		cin >> n >> s >> k;

		set<int> c;
		vector<int> all, v;

		for (auto i = 0; i < k; i++) {
			cin >> in;
			c.insert(in);
		}

		for (auto i = 1; i <= n; i++) {
			all.push_back(i);
		}

		set_difference(all.begin(), all.end(), c.begin(), c.end(), back_inserter(v));
		all.clear();
		c.clear();
		getpos(v, s);
	}

}


/*I/P
5
5 2 3
1 2 3
4 3 3
4 1 2
10 2 6
1 2 3 4 5 7
2 1 1
2
100 76 8
76 75 36 67 41 74 10 77

O/P
2
0
4
0
2


*/