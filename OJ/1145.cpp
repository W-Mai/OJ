
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
		m = 1;  //���ѭ��ÿ�θ���ʹ��m=1
		for (k = 1; k <= j; k++) {
			m = m * 9;    //��j=2ʱ��ѭ������ʹ m = 9 * 9 
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
//���ߣ�sd_DENG
//��Դ��CSDN
//ԭ�ģ�https ://blog.csdn.net/sd_DENG/article/details/73556059 
//��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�