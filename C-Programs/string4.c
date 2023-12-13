#include<stdio.h>
#include<string.h>
main(){
	char s[10],s1[10];
	printf("Enter first string:");
	gets(s);
	printf("Enter second string:");
	gets(s1);
	/*if(strcmp(s,s1)==0)
	  printf("same");
	else
	  printf("Different");
	*/
	/*if(strcmpi(s,s1)==0)
	   printf("Same");
	else
	   printf("Different");
	*/
	if(strncmp(s,s1,4)==0)
		printf("Same");
	else
		printf("Different");
}
