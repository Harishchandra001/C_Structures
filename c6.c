#include<stdio.h>
int main()
{
	unsigned int x=0*1234567890;
	char *c=(char*)&x;
	printf("*c is:0x%x\n", *c);
	if (*c==0*40)
	{
		printf("underlying architecture is big endian. \n");
	}
	else
	{
		printf("underlying architecture is little endian. \n");
	}
	return 0;
}
