/*����2��������lower��upper��lower��upper��100���������һ��ȡֵ��ΧΪ[lower��upper]����ÿ������2���϶ȵĻ���-�����¶�ת����

�¶�ת���ļ��㹫ʽ��C=5��(F?32)/9�����У�C��ʾ�����¶ȣ�F��ʾ�����¶ȡ�

�����ʽ:
��һ��������2���������ֱ��ʾlower��upper��ֵ���м��ÿո�ֿ���

�����ʽ:
��һ�������"fahr celsius"

����ÿ�����һ�������¶�fahr�����ͣ���һ�������¶�celsius��ռ��6���ַ���ȣ����Ҷ��룬����1λС������

������ķ�Χ���Ϸ��������"Invalid."��

��������1:
32 35
�������1:
fahr celsius
32   0.0
34   1.1
��������2:
40 30
�������2:
Invalid.*/
#include<stdio.h>
int main()
{
	int lower,upper;
	scanf("%d %d",&lower,&upper);
	if(lower <= upper){
		if(upper <= 100){
			printf("fahr celsius\n");
			for(;lower <= upper;lower += 2){
				
				printf("%d%6.1f\n",lower,5.0 * (lower - 32) / 9);
			}
		}else{printf("Invalid.\n");
		}
	}else{printf("Invalid.\n");
	}
	return 0;
}
