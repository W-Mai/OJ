#include <iostream>

using namespace std;

int main() {
	char str[1003];
	int c = 0;

	fgets(str, 1003, stdin);

	for (int i = 1; str[i-1]; i++) {
		if (isdigit( str[i-1]) && !isdigit(str[i])) {
			c++;
		}
	}
	cout << c << endl;
	return 0;
}