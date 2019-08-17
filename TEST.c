#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/*int main()
{
	int i = 0;

	printf("«Î ‰»Î\n");
	scanf("%d",&i);
	printf("i = %d\n", i);
	system("pause");

	return 0;
}*/

int main(void)
{
	int a, b, c;
	int t;
	printf(" ‰»Îa b c:\n");
	scanf("%d %d %d\n", &a, &b, &c);
	if (a < b);
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c);
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c);
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d\n", a, b, c);

	getchar();

	return 0;
}

