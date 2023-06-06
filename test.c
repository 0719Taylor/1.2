#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	/*
//	int ch = 0;
//	//EOF - end of file 文件结束标志 - -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/	
//	int ret = 0;
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码：");
//	scanf("%s",password);//输入密码，并存放在password数组中    如何清楚输入缓冲区里面的\n？
//	//输入缓冲区还剩一个'\n'
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N）：");
//	ret = getchar();//  Y/N       
//	if (ret == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar() != EOF))
//	{
//		if (ch < '0' || ch>'9')
//			continue        //只会输出数字字符
//		putchar(ch); 
//	}
//	return 0;
//}


//int main()
//{
//	//for循环的变种
//	//变种1
//	for (;;)
//	{
//		printf("hehe\n");        //死循环
//	}
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//			printf("hehe\n");
//	}
//	//打印了10个hehe  因为外层循环一边后i=1，j=10，不再执行内层循环。
//	return 0;
//}

//int main()
//{
//	//for循环的变种2
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)   //两个循环变量
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//请问循环要循环多少次          0次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//do while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ",i);
//		i++;
//	} while (i <= 10);      
//	return 0;
//}


//计算n的阶乘
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	printf("请输入n的值：");
//	scanf("%d",&n);
//	while (n>1)
//	{
//		ret = ret * n;
//		n--;
//	}
//	printf("n的阶乘为%d\n",ret);
//	return 0;
//}

//方法一 计算1！+2！+....+10！     此方法效率低
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d\n",sum);
//	return 0;


//方法2
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	//写一个代码,在arr数组（有序的）中找到8  
//	//方法一  不高效
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是:%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//方法二  二分查找算法/折半查找算法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");   
//	}
//}


//编写代码,演示多个字符从两端移动,向中间汇聚
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!" };
//	char arr2[] = { "####################" };
//	int left = 0;
//	//int right=sizeof(arr1)/sizeof(arr1[0])-1      error  得-2
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);   //单位是ms
//		system("cls"); //执行系统命令的一个函数   cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n",arr2);
//	return 0;
//}


int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s",password);
		if (strcmp(password,"123456")==0)   //== 不能用来判断两个字符串是否相等，应该使用一个库函数-strcmp
		{
			printf("登录成功\n");
		    break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误,退出程序\n");
	return 0;
}