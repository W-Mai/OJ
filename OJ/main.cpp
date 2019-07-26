#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int primeList[1000] = { 2 , 2 };

void genPrime();

int main() {
	int m, a, b;
	genPrime();
	while (cin >> m >> a >> b, !(m == a && a == b && b == 0)) {
		int bgNum = (int)sqrt(m);
		int tp = bgNum, tq = bgNum;
		int prepP = tp, prepQ = tq;
		while (tp * b >= tq * a) {
			if (prepP * prepQ <= m) {
				prepP = primeList[tp - 1];
				prepQ = primeList[tq - 1];
			}
			tp--, tq++;
		}
		cout << prepP << " " << prepQ << endl;
	}

	return 0;
}

void genPrime() {
	bool flag = true;
	for (size_t i = 0, j = 2; i < 999; i++, j++) {
		flag = true;
		for (size_t k = 0; k <= i; k++) {
			if (!(j%primeList[k])) {
				flag = false;
				break;
			}
		}
		if (flag) {
			primeList[i + 1] = j;
		} else {
			primeList[i + 1] = primeList[i];
		}

	}
}


