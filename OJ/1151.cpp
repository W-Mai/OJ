#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


string add(const string a, const string b) {
	vector<char> A(a.begin(), a.end())
		, B(b.begin(), b.end())
		, Res;
	//for_each(A.begin(), A.end(), [](char & x) { x -= '0'; });
	//for_each(B.begin(), B.end(), [](char & x) { x -= '0'; });
	int carry = 0, 
		numA, numB;
	for (auto itA = A.rbegin(), itB = B.rbegin();
		 itA != A.rend() or itB != B.rend()
		 ; ) {
		numA = itA == A.rend() ? '0' : *itA++;
		numB = itB == B.rend() ? '0' : *itB++;

		int tnum = numA + numB + carry - 2 * '0';
		carry = tnum / 10;
		Res.push_back(tnum % 10 + '0');
	}

	if (carry) Res.push_back(carry + '0');
	return *new string(Res.rbegin(), Res.rend());
}

int main() {
	string A, B;
	while (true) {
		cin >> A >> B;
		cout << add(A, B) << endl;
	}



	return 0;
}
