#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	/*
//	int ch = 0;
//	//EOF - end of file �ļ�������־ - -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/	
//	int ret = 0;
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("���������룺");
//	scanf("%s",password);//�������룬�������password������    ���������뻺���������\n��
//	//���뻺������ʣһ��'\n'
//	//��ȡһ��'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N����");
//	ret = getchar();//  Y/N       
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar() != EOF))
//	{
//		if (ch < '0' || ch>'9')
//			continue        //ֻ����������ַ�
//		putchar(ch); 
//	}
//	return 0;
//}


//int main()
//{
//	//forѭ���ı���
//	//����1
//	for (;;)
//	{
//		printf("hehe\n");        //��ѭ��
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
//	//��ӡ��10��hehe  ��Ϊ���ѭ��һ�ߺ�i=1��j=10������ִ���ڲ�ѭ����
//	return 0;
//}

//int main()
//{
//	//forѭ���ı���2
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)   //����ѭ������
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//����ѭ��Ҫѭ�����ٴ�          0��
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//do whileѭ��
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


//����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	printf("������n��ֵ��");
//	scanf("%d",&n);
//	while (n>1)
//	{
//		ret = ret * n;
//		n--;
//	}
//	printf("n�Ľ׳�Ϊ%d\n",ret);
//	return 0;
//}

//����һ ����1��+2��+....+10��     �˷���Ч�ʵ�
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


//����2
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
//	//дһ������,��arr���飨����ģ����ҵ�8  
//	//����һ  ����Ч
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ���,�±���:%d\n",i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//������  ���ֲ����㷨/�۰�����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 8;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ���,�±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");   
//	}
//}


//��д����,��ʾ����ַ��������ƶ�,���м���
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!" };
//	char arr2[] = { "####################" };
//	int left = 0;
//	//int right=sizeof(arr1)/sizeof(arr1[0])-1      error  ��-2
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);   //��λ��ms
//		system("cls"); //ִ��ϵͳ�����һ������   cls-�����Ļ
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
		printf("����������:");
		scanf("%s",password);
		if (strcmp(password,"123456")==0)   //== ���������ж������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
		    break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("�������������,�˳�����\n");
	return 0;
}