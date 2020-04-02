#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1.ʵ��strlen
int my_strlen(const char* str)
{
	assert(str);

	int count = 0;
	//while (*str != '\0')
	while (*str)
	{
		++count;
		++str;
	}

	return count;
}

int my_strlen(const char* str)
{
	assert(str);

	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + strlen(str + 1);
	}
}

int my_strlen(const char* str)
{
	assert(str);

	const char* end = str;
	while (*end)
		++end;

	return end - str;
}

int f(int n)
{
	if (n == 1)
		return 1;

	return f(n - 1) + n;
}

int main()
{
	char* p = "helloworld";
	printf("%d\n", strlen(p));
	printf("%d\n", my_strlen(p));
	//printf("%d\n", f(100000));

	return 0;
}

//2.ʵ��strcpy
char* my_strcpy(char* dst, const char* src)
{
	assert(dst);
	assert(src);

	char* ret = dst;
	while (*dst++ = *src++);

	return ret;
}

int main()
{
	char* p1 = "hello";
	char p2[10]; // Խ���ǳ��
				 //	p2[10] = 1;
				 //	p2[11] = 2;
				 //	p2[12] = 3;
				 //	p2[20] = 3;
	my_strcpy(p2, p1);
	printf("%s\n", p2);

	return 0;
}



int main()
{
	char* p1 = "hello";
	char p2[20];
	strcpy(p2, "wor\0ld");

	my_strcat(p2, p1);

	printf("%s\n", p2);

	return 0;
}







//3.ʵ��strcat


char* my_strcat(char* dst, const char* src)
{
	assert(dst);
	assert(src);

	char* ret = dst;

	while (*dst)
		++dst;

	while (*dst++ = *src++);

	return ret;
}

int main()
{
	char* p1 = "hello";
	char p2[20];
	strcpy(p2, "wor\0ld");

	my_strcat(p2, p1);

	printf("%s\n", p2);

	return 0;
}

//4.ʵ��strstr
const char* my_strstr(const char* str1, const char*str2)//�����Ӵ�

{
	assert(str1&&str2);//p1="hello world"  p2="wor"
					   //p1="hello world" p3="word"
	const char* src = str1;//Դ��
	const char* sub = str2;//�Ӵ�
						   //���θ�ԭ�����бȽ�
	while (*src)
	{
		const char* start = src;

		//sub��src��һ���ֽ���ƥ��
		while (*src == *sub && *sub != '\0') //���������������ִ��
		{
			++src;
			++sub;
		}
		if (*sub == '\0')//��ʾƥ��ɹ�
		{
			return start;

		}
		else
		{
			src = start + 1;
			sub = str2;

		}

	}
	return NULL;

}



int main()
{
	char* p1 = "hello world";
	char* p2 = "wor";
	const char* match1 = my_strstr(p1, p2);
	printf("%s\n", match1);

	char* p3 = "word";
	const char* match2 = my_strstr(p1, p3);
	printf("%s\n", match2);





}






//6.ʵ��strcmp
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 && *str2)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
		else
		{
			++str1;
			++str2;
		}
	}

	// "aaaa"  "aaaa"   0
	// "aaaa"  "aaaaa"  -1
	// "aaaaa" "aaaa"   1
	if (*str1 == '\0' && *str2 == '\0')
	{
		return 0;
	}
	else if (*str1 == '\0')
	{
		return -1;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char* p1 = "hello";
	char* p2 = "hello1";

	printf("%d\n", strcmp(p1, p2));
	printf("%d\n", my_strcmp(p1, p2));

	return 0;
}





//7.ʵ��memcpy
//memcpy�ڴ濽��



void* my_memcpy(void* dest, const void* src, int count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (count--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return ret;

}

int main()
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[20] = { 0 };
	memcpy(arr2, arr1, sizeof(arr1));

	my_memcpy(arr2, arr1, sizeof(arr1));//���������ֽ������Ǹ���







	return 0;

}

//8.ʵ��memmove


//memmove//�ڴ��ص�����

void* my_memmove(void* dest, const void* src, int count)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	if (dest < src)//ǰ��������
	{

		while (count--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}

	}
	else//�󡪡���ǰ
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}


	return ret;

}


int main()
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };

	memmove(arr1 + 2, arr1, 16);

	my_memmove(arr1 + 2, arr1, 16);//���������ֽ������Ǹ���   ���ڴ�����ص�ʱ
								   //dest����src��ߴ�ǰ��󿽱�
								   //dest����src�ұߴӺ���ǰ����



	return 0;

}









//9.��ת�ַ���
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[10] = { 'h', 'e', 'l', 'l', 'o' };
	char * start;
	char* end;
	char x;
	int i;
	start = str;
	end = str + strlen(str) - 1;
	for (i = 0; i<strlen(str) / 2; i++)
	{
		if (*start != *end)
		{
			x = *start;
			*start = *end;
			*end = x;
			start++;
			end--;
		}
	}


	printf(" str = %s\n", str);



	return 0;
}



