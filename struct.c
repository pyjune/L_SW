#include <stdio.h>
#include <string.h>

struct Person
{
	char name[20];
	char addr[40];
	int  age;
};
// 구조체 변수를 parameter
void printPerson(struct Person s)
{
	printf("%s %s %d\n", s.name, s.addr, s.age);
}
// 구조체 변수의 주소
void printP(struct Person *p)
{
	printf("%s %s %d\n", p->name, p->addr, p->age);
}
// 구조체 변수의 주소, 주소 연산
void printPP(struct Person *p)
{
	printf("%s %s %d\n", (*p).name, (*p).addr, (*p).age);
}
// 구조체 배열의 주소
void printSarr(struct Person p[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%s %s %d\n", p[i].name, p[i].addr, p[i].age)
	}
}

int  main()
{
	struct Person s1 = {"신사임당", "인천", 27};
	struct  Person  a[4] = {
			{"이순신", "울릉도", 23},
			{"홍길동", "서울", 21},
			{"강감찬", "부산", 22}};
	// 구조체 변수의 복사
	a[3] = s1;
	
	return 0;
}
