#include<stdio.h>
struct point
{
	int x,y;
};
int main()
{
	struct point p1={4,6};
        struct point p2 = {7,3};
	p1.y=4;
        p2.y=7;
	printf("x=%d,y=%d",p1.x,p1.y);
        printf("%y=%d",p2.y); 
		return 0;
}

