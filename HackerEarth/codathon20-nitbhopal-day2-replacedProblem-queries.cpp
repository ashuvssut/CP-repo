#include<iostream>
#include"vector"
#include<algorithm>
using namespace std;


int prepArr(int w, int x, int y, int z, int c, int n, vector<vector<int>> vec) {
	vector<int> i, j, V;
	int sum = 0;
	for (int k = w; k <= x; k++)
		i.push_back(k);

	for (int k = y; k <= z; k++)
		j.push_back(k);

	set_intersection(i.begin(), i.end(), j.begin(), j.end(), back_inserter(V));

	for (auto i : V) {
		vec[i-1][i-1]= (vec[i - 1][i - 1])^c;
	}

	for (int i = 0; i < n; i++) {
		sum = vec[i][i] + sum;
	}
	cout << sum <<endl;

	return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,QueryCount,QueryType,a,b,c;
	cin >> n;
	vector<vector<int>> vec(n);

	for (int i = 0; i < n; i++) {

		vec[i] = vector<int>(n);

		for (int j = 0; j < n; j++)
			cin >> vec[i][j];
	}

	cin >> QueryCount;

	for (int i = 0; i < QueryCount; i++) {
		cin >> QueryType;
		cin >> a >> b >> c;
		if (QueryType == 1) {
			prepArr(a, b, 1, n, c, n, vec);
		}
		else if (QueryType == 2) {
			prepArr(1, n, a, b, c, n, vec);
		}

	}
}
