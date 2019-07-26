
#include<stdio.h>
#define N 20
int main() {
	int num, i = 0, k, j;
	int str[N];
	int m, sum = 0;
	scanf("%d", &num);
	while (num > 0) {
		str[i] = num % 10;
		i++;
		num = num / 10;
	}
	for (j = 0; j < i; j++) {
		m = 1;  //外层循环每次更新使得m=1
		for (k = 1; k <= j; k++) {
			m = m * 9;    //当j=2时，循环两次使 m = 9 * 9 
		}
		if (str[j] <= 3)
			sum += str[j] * m;
		if (str[j] >= 5)
			sum += (str[j] - 1) * m;
	}
	printf("%d", sum);
}
//
//-------------------- -
//作者：sd_DENG
//来源：CSDN
//原文：https ://blog.csdn.net/sd_DENG/article/details/73556059 
//版权声明：本文为博主原创文章，转载请附上博文链接！