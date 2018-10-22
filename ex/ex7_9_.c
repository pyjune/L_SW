#include<stdio.h>
#include<malloc.h>
int ** myAlloc(int r, int c);
void dataInput(int **p, int r, int c);
void dataOutput(int **p, int r, int c);
void myDelete(int **p, int r);
int main()
{
	int  **ip;
	int  col, row;
	printf("row 수 입력 : ");
	scanf("%d", &row);
	printf("column 수 입력 : ");
	scanf("%d", &col);
	ip = myAlloc(row, col);
	if (ip == NULL) {
		return 1;
	}
	dataInput(ip, row, col);
	dataOutput(ip, row, col);
	myDelete(ip, row);
	return 0;
}
// 4개의 사용자 정의 함수 구현하기
int ** myAlloc(int r, int c)
{
	int i;
	int **p = (int **)malloc(sizeof(int *)*r);
	for(i = 0; i < r; i++)
	{
		*(p+i) = (int *)malloc(sizeof(int)*c);
		// p[i] = (int *)malloc(sizeof(int)*c);
	}
	return p;
}
void dataInput(int **p, int r, int c)
{
	int i, j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("[%d][%d] : ", i, j);
			scanf("%d", *(p+i)+j);
		}
	}
}
void dataOutput(int **p, int r, int c)
{
	int i, j;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			printf("[%d][%d] : %d\n", i, j, *(*(p+i)+j));
		}
	}
}

void myDelete(int **p, int r)
{
	int i;
	for( i = 0; i < r; i++)
	{
		free(*(p+i)); // free(p[i])
	}
	free(p);
}
