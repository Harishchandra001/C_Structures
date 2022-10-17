#include<stdio.h>
int main()
{
	unsigned int i=1;
	char*c=(char*)&i;
	if (*c)
		printf("big endian");
	else
		printf("little endian");
	return 0;
}

