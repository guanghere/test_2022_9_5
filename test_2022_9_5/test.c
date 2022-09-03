#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>


//int main()
//{
//	char arr[] = "abcdef";
//
//	int sz = 0;
//
//	sz =((unsigned  int) strlen(arr));
//
//	int i = 0;
//	for (i = sz; i< 1; i--)
//	{
//		printf("%c ", arr[sz]);
//	}
//
//	//	printf("%d", sz);
//
//	return 0;
//}


//	递归方式实现打印一个整数的每一位

//void target(int n)
//{
//	//	限制条件
//	if (n > 9)
//	{
//		target(n / 10);
//	}
//	printf("%d",n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	target(n);
//	return 0;
//}


//	递归和非递归分别实现strlen
//int di_str(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = di_str(arr);
//	printf("%d",len);
//	return 0;
//}

//int di_strlen(char *str)
//{
//	if (*str != '\0')
//	{
//		return	1 + di_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = di_strlen(arr);
//	printf("%d", sz);
//	return 0;
//}



//	递归和非递归分别实现求n的阶乘（不考虑溢出的问题
int fac(int n)
{
	int i = 0;
	int j = 1;
	for (i = 1; i <=n; i++)
	{
		j = j * i;
	}
	return j;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d", ret);
	return 0;
}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int j = 1;
//	scanf("%d", &n);
//	
//	for (i = 1; i <= n; i++)
//	{
//		j = j*i;
//	}
//
//	printf("%d", j);
//
//	return 0;
//}

//int fan(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fan(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = fan(n);
//	printf("%d", i);
//	return 0;
//}