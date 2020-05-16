/*本题要求编写程序，计算序列 1 + 1/3 + 1/5 + ... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后6位。题目保证计算结果不超过双精度范围。

输入样例:
23
输出样例:
sum = 2.549541
*/

//#include<stdio.h>
//int main()
//{
//	int N;
//	int n = 1;
//	int count = 0;
//	double cnt = 0.0;
//	scanf("%d",&N);
//    for(;count < N;n += 2,count++){
//    	cnt += 1.0 / n;
//	}
//	printf("sum = %.6f",cnt);
//	return 0;
//}

/*本题要求编写程序,计算序列 1 - 1/4 + 1/7 - 1/10 + ... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后三位。题目保证计算结果不超过双精度范围。

输入样例:
10
输出样例:
sum = 0.819*/
#include<stdio.h>
int main()
{
	int N;
	int n = 1;
	int count = 0;
	double sign = 1.0;
	double cnt = 0.0;
	scanf("%d",&N);
    for(;count < N;n += 3,count++){
    	cnt += sign / n;
    	sign = -sign;
	}
	printf("sum = %.3f",cnt);
	return 0;
}
