#include<stdio.h>
main(){
	int weight,age;
	printf("Enter a person weight and age:\n");
	scanf("%d%d",&weight,&age);
	switch(weight>=50)
	{
		case 1:
			switch(age>=18)
			{
				case 1:
					printf("Person eligible for donate blood");
					break;
				case 0:
					printf("person not eligible for donate blood");
					break;
			}
			break;
		case 0:
			printf("person not eligible for donate blood");
			break;
	}
	
}
