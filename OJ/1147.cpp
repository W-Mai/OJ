#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int m, n;
	vector<int> v1, v2;
	cin >> m >> n;

	int t;

	for (int i = 0; i < m; i++) {
		cin >> t;
		v1.push_back(t);
	}
	for (int i = 0; i < n; i++) {
		cin >> t;
		v2.push_back(t);
	}
	int flag = 0;
	for (int i = 0; i < m; i++) {
		if (v1[i] == v2[0]) {
			int j = 1;
			for (;j < n; j++) {
				if (i+j == m or v1[i+j] != v2[j] ) {
					break;
				}
			}
			if (j==n) {
				cout << i << endl;
				flag = 1;
				break;
			} 
		}
	}
	if (!flag) {
		cout << "No Answer" << endl;
	}

	return 0;
}