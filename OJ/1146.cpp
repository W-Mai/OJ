#include <iostream>
#include <numeric>
#include <set>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		set<long long> st;
		for (int i = 0; i < N; i++) {
			long long t;
			cin >> t;
			st.insert(t);
		}
		long long sum = accumulate(st.begin(), st.end(), - *st.rbegin());
		cout << sum << endl;
		if (*st.rbegin() > sum + 1) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}

//²»»á×ö