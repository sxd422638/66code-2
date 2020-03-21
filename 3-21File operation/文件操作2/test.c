#include<stdio.h>
#include<errno.h>
#include<string.h>

//struct S
//{
//	char name[20];
//	int age;
//
//
//};


//int main()
//{
//	struct S s = { "张三", 20};
//	FILE* pf = ("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", sterror(errno));
//		return 0;
//	}
//	//写操作
//
//	fwrite("%s\n", sizeof(struct S), 1, pf);
//	//读操作
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d", s.name, s.age);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




int main()
{
	int ch = 0;

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;

	}
	
	fseek(pf, 3, SEEK_CUR);
	ch = fgetc(pf);
	putchar(ch);
	printf("%d\n", ftell(pf));//返回文件相对于起始位置的偏移量。
//  fse
	
	ek(pf, 1, SEEK_SET);//a
//	ch = fgetc(pf);
//	putchar(ch);
//
//	ch = fgetc(pf);
//	putchar(ch);
//
//	fseek(pf, -1, SEEK_END);//f
//	ch = fgetc(pf);
//	putchar(ch);
//
//
	fclose(pf);
	pf = NULL;

	return 0;

}