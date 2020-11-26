#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int s, w[3];
		cin >> s;

		for (int i = 0; i < 3; i++)
		{
			cin >> w[i];
		}

		if (w[0] > w[2])
			swap(w[0], w[2]);

		int sum = w[0], count = 0;

		for (int i = 1; i < 3; i++) {

			if (w[i] + sum <= s)
			{
				sum = sum + w[i];
				count++;
			}

			else { break; }
		}

		if (count == 0)
			cout << 3 << endl;

		else if (count == 1)
			cout << 2 << endl;

		else if (count == 2)
			cout << 1 << endl;

	}

	return 0;
}
