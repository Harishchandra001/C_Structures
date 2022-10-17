#include<stdio.h>
int main()
{
	unsigned int i=1;
	char *c=(char*)& i;
	if (*c)
		printf("little emdian");
	else
		printf("big endian");
	return 0;
}
