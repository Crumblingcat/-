#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	printf("��Ҫ�ú�ѧϰ��(1/0):");
//	scanf("%d", &i);
//	if (i == 1)
//	{
//		printf("�ù�����������");
//	}
//	else
//	{
//		printf("��ש��š��˿");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("Ŭ��ѧ���");
//	int i = 0;
//	int count = 0;
//	while (i <= 50000)
//	{
//		printf("����Ŭ��:%d",i);
//		i++;
//	}
//	if (i > 50000)
//	{
//		printf("�����۷�");
//	}
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int m = 10;
//	int n = 20;
//	int sum = 0;
//	sum = Add(m,n);
//	printf("sum = %d", sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", arr[4]);  //  �±����Ԫ��
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int	m = 5 % 2;   //ȡģ   1
//	printf("%d\n", m);
//	int n = 5 / 2;   //ȡ��   2
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 1;
//	//  00000000 00000000 00000000 00000001
//	int n = m << 1;
//	//0/0000000 00000000 00000000 000000010
//	printf("%d\n", m);
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 3;
//	// m 011
//	int n = 5;
//	// n 101
//	int i = m & n;
//	//011
//	//101
//	//001
//	printf("%d", i);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 3;
//	int n = 5;
//	int i = m | n;
//	//011
//	//101
//	//111
//	printf("%d", i);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int m = 3;
//	int n = 5;
//	int i = m ^ n; //  ��ͬΪ0������Ϊ1 
//	 011
//	 101
//	 110
//	printf("%d", i);
//	return 0;
//}

