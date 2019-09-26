#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

#include<math.h>

//void 
//野指针：悬挂指针 
//面试问题 ：如何预防野指针  
//int *p = NULL ；
//
//小端 低地址存放低数据     电脑
//大端 低地址存放高数据     手机
//指针加减整数 按字节算 
//数组名代表数组首元素的地址
//整个数组的字节大小 sizof（arr）
//p[i]-->*p(i)     []自带解引用
//指针解指针 代表两个指针相差的距离 
//指针-指针 只有任意连个指针同时作用于同一块内存时才有意义
//数组指针   要从里往外看 


















//指针加减整数
//int main()
//{
//	
//
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	system("pause");
//	return 0;
//}
//
//


int main()
{
	char *str[3] = { "hello", "bit", "gaobo" };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s \n", str[i]);

	}


	system("pause");
	return 0;
}



