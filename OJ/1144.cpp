#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;
int base[] = { 2,3,7,8 };

char * dToK(int n, int k) {
	char i = 0, *str = new 
	char[33]; str[32] = 0;
	do      str[31 - i++] 
	= "0123456789ABCDEF"
	[n%k];while (n /= k);
	return str + 32 - i;
}

int main() {
	int n;
	char buff[33], *p;
	cin >> n;
	for (int i = 0; i < 4; i++) {
		p = dToK(n, base[i]);
		puts(p);
	}
	return 0;
}

