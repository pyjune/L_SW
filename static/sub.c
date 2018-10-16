#include<stdio.h>
int temp=3; // extern 변수 정의부

// 다른 파일과 공유하지 않는 전역변수..
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
