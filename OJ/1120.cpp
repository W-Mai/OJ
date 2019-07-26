#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int T;
	vector<int> v;

	cin >> T;
	for (int i = 0; i < T; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	auto imin = min_element(v.begin(), v.end());
	swap(v[0], *imin);
	auto imax = max_element(v.begin(), v.end());
	swap(*v.rbegin(), *imax);

	for (size_t i = 0; i < T; i++) {
		if (i) cout<< " " << v[i];
		else cout << v[0];
	}
}
