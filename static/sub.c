#include<stdio.h>
int temp=3; // extern ���� ���Ǻ�

// �ٸ� ���ϰ� �������� �ʴ� ��������..
static int subCnt;

void increaseSub(int n)
{
	subCnt += n;
}
void printSub(void)
{
	printf("current : %d\n", subCnt);
}

void  sub()
{
	temp += 100;
	printf("sub() temp = %d \n" , temp);
}
