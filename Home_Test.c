#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*int main()
{
	int i = 0;

	printf("������\n");
	scanf("%d",&i);
	printf("i = %d\n", i);
	system("pause");

	return 0;
}*/

/*int main()//������������
{
	int a = 2;
	int b = 3;
	int t;
	t = a;
	a = b;
	b = t;
	printf("a = %d, b = %d", a, b);
	system("pause");

	return 0;
}*/

/*int main(void)//����������������
{
	int a, b, c;
	int t;
	printf("����a b c: ");
	scanf("%d %d %d", &a, &b, &c);
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
	system("pause");

	return 0;
}*/

/*int main(void)//ѭ����10���������ĺ�
{
	int i;
	int sum = 0;
	for (i = 1; i < 10;i += 2)//i += 2 �ȼ��� i = i + 2
	{
		sum = sum + i;
	}
	printf("sum = %d\n", sum);

	system("pause");

	return 0;
}*/

/*int main(void)//��100���ڱ�3�����ĺ�
{
	int i;
	int sum = 0;
	for (i = 3; i <= 100; ++i)
	{
		if (i % 3 == 0)
			sum = sum + i;
	}
	printf("sum = %d\n", sum);

	return 0;
}*/

/*int main(void)//100��������֮��
{

	int i;
	int sum = 0;

	for (i = 1; i < 101; ++i)
	{
		if (i%2 ==1)
		   sum += i;//����sum + i
	}

	printf("sum = %d\n", sum);

	system("pause");

	return 0;
}*/

/*int main(void)//100������������
{
	int i;
	int cnt = 0;
	for (i = 1; i < 101; ++i)
	{
		if (i % 2 == 1)
			++cnt;
	}

	printf("cnt = %d\n", cnt);

	system("pause");

	return 0;
}*/

/*int main(void)//100����������ƽ��ֵ
{
	int i;
	int sum = 0;
	int cnt = 0;
	float avg;//average����д

	for (i = 1; i < 101; ++i)
	{
		if (i % 2 == 1)
		{
			sum += i;
			++cnt;
		}
	}
	avg = 1.0*sum / cnt;

	printf("sum = %d\n", sum);
	printf("cnt = %d\n", cnt);
	printf("avg = %f\n", avg);

	system("pause");

	return 0;
}*/

int main(void)//100��������֮�ͣ�ż��֮��
{
	int i;
	int sum1 = 0;//����
	int sum2 = 0;//ż��

	for (i = 1; i < 101; ++i)
	{
		if (i % 2 == 1)
		{
			sum1 += i;
		}
		else
		{
			sum2 += i;
		}
	}

	printf("sum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);
	

	system("pause");

	return 0;
}