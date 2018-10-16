#include <stdio.h>
#include "sub.h"
extern int subCnt; // sub2.c

int main()
{
	printSub();
	increaseSub(2);
	printSub();
	printf("subCnt = %d\n", subCnt);
	return 0;
}
