/*����һ���Ǹ�����n������һ��3�ĳ˷������3
?0
?? ~3
?n
?? ��ֵ���ɵ����ݺ�������3�ĳ˷���

�����ʽ:
������һ���и���һ���Ǹ�����n��

�����ʽ:
�����ݵĵ���˳�����n+1�У�ÿ�и�ʽΪ��pow(3,i) = 3��i���ݵ�ֵ������Ŀ��֤������ݲ����������������ķ�Χ��

��������:
3
�������:
pow(3,0) = 1
pow(3,1) = 3
pow(3,2) = 9
pow(3,3) = 27*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int count = 0;
	int result;
	scanf("%d",&n);
	for(;count <= n;count++){
		result = pow(3,count);
		printf("pow(3,%d) = %d\n",count,result);
		}
	return 0;
}
