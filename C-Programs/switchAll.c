#include<stdio.h>
main(){
	char g;
	int age;
	printf("Enter a gender:\n");
	scanf("%c",&g);
	switch(g=='m'||g=='M')
	{
		case 1:
			printf("Enter a age:");
			scanf("%d",&age);
			switch(age>=21){
				case 1:
					printf("Eligible for marriage.");
					break;
				case 0:
					printf("Not eligible for marriage.");
					break;
			}
			break;
		case 0:
			switch(g=='f'||g=='F')
			{
				case 1:
					printf("Enter an age:\n");
					scanf("%d",&age);
					switch(age>=19){
						case 1:
							printf("Eligible for marriage");
							break;
						case 0:
							printf("Not eligible for marriage");
							break;
					}
					break;
				case 0:
					printf("invaid enter");
			}
	}
}
