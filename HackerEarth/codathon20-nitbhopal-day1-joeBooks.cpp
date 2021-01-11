#include<iostream>
#include<vector>
#include <algorithm>


using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	int in;
	vector<int> A;
	for (int i = 0; i < n; i++) {
		cin >> in;
		A.push_back(in);
	}

	int r, l;
	for (int i = 0; i < A.size(); i++) {
		if (A[i] > k) {
			l = i;
			break;
		}
	}

	for (int i = A.size() - 1; i >= 0; i--) {
		if (A[i] > k) {
			r = i;
			break;
		}
	}

	cout << r - l + 1 << endl;
}
