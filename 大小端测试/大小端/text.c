#include<stdio.h>

int main()
{
	int i = 1;
	char *ch = (char*)&i;

	if (*ch == 1)
		printf("Ð¡¶Ë");
	else
		printf("´ó¶Ë");
}


