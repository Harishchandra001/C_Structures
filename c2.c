#include<stdio.h>
struct point
{
	int x,y,z;
};
int main()
{
	struct point arr[20];
	arr[0].x=20;
	arr[0].y=40;
	arr[0].z=50;
	printf("%d %d %d",arr[0].x,arr[0].y,arr[0].z);
	return 0;
}
