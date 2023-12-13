/*passing complete array to function*/
#include<stdio.h>
void myArray(int[]);
main()
{
	int arr[5]={5,6,7,8,76};
	myArray(arr);
}
void myArray(int arr[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d  ",arr[i]);
	}
}
