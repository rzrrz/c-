#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>

/*int main()
{
int  i = 0;
scanf("%d", &i);
printf("i = %d\n", i);
system("pause");
return 0;
}*/

/*int main(void)
{
int i = 0;
printf("����");
scanf("%d", &i);
printf("i = %d\n", i);
system("pause");
return 0;
}*/

/*int main(void)
{
	int num;
	num = 1;

	printf("i am a simple\n");
	printf("computer.\n");
	//scanf("%d", &num);
	printf("my favoritr number is %d beccaues it is first.\n", num);
	system("pause");

	return 0;
}*/

/*int main(void)
{
	int i, h;
	scanf("%d %d", &i, &h);

	if (i > h)
	{
		printf("AAA\n");
		printf("BBB\n");
	}
	else
	{
		printf("ccc\n");
	}

    system("pause");

	return 0;
}*/

/*int main(void)//if...else..if//if..else..ֻ�ܿ���һ����䣬�����������ϵ�Ҫ��{}
{

	double delta = 1;

	if (delta > 0)
	{
		printf("aaa\n");
		printf("��������!\n");
	}
	else  if (delta == 0)
	{
		printf("bbb\n");
		printf("��һ��Ψһ�Ľ�!\n");
    }
	else
	{
		printf("ccc\n");
		printf("�޽�!\n");
	}

	system("pause");

	return 0;
}*/

/*int main(void)//if...else..if
{
	int a;
	scanf("%d", &a);
	if (a >= 100)
		printf("S+\n");
	else if (a >= 90 && a <= 100)
		printf("s\n");
	else if (a >= 80 && a <= 90)
		printf("s-\n");
	else if (a >= 70 && a <=80)
		printf("s--\n");

	system("pause");

	return 0;
}*/

int main(void)//��ֵ����
{
	int i = 3;
	int j = 5;
	int t;

	t = i;
	i = j;
	j = t;
	printf("i = %d, j = %d\n", i, j);

	system("pause");

	return 0;
}
