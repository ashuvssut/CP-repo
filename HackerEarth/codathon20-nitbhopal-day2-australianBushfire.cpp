#include<iostream>

using namespace std;

int fill(int s, int& w, int& b) {
	//do partial truck fill
	if (b > w && 2 * w <= s) {
		if (s % 2 == 0) {
			b = b - w;
		}else {
			b = b - w - 1;
		}
		w = 0;
	}

	else if (w > b && 2 * b <= s) {
		if (s % 2 == 0) {
			w = w - b ;
		}
		else {
			w = w - b - 1;
		}
		b = 0;

	}
	//fill completely
	else {
		if (b > w) {
			if (w > s / 2 && b > (s - (s / 2))) {
				w = w - (s / 2);
				b = b - (s - (s / 2));
			}
		}

		else if (w > b) {
			if (b > s / 2 && w > (s - (s / 2))) {
				b = b - (s / 2);
				w = w - (s - (s / 2));
			}
		}
	}
	return 0;

}


int main()
{
	int b, w, k, c, t=0;
	cin >> b >> w >> k >> c;

	for (int i = 0; i < k; i++) {
		fill(c-1, w, b);
		t++;
	}

	if (w > 0) {
		t = t + w;
	}

	if (b > 0) {
		t = t + b;
	}

	cout << t;
}
