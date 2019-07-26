#include <iostream>
#include <cstdio>

using namespace std;

inline bool checkSyntax(char op) {
	return op == '+' || op == '-' || op == '*' || op == '/';
}

inline double calc(double a, char op, double b) {
	switch (op) {
		case '+':return a + b;
		case '-':return a - b;
		case '*':return a * b;
		case '/':return a / b;
	}
}

int main() {
	char op;
	double a, b;
	scanf("%lf %c %lf", &a, &op, &b);
	if (!checkSyntax(op) || (op == '/' && b<1e-10 && b>-1e-10)) {
		cout << "Wrong input!" << endl;
	} else {
		printf("%.2f\n", calc(a, op, b));
	}

	return 0;
}