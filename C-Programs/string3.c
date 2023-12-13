#include<stdio.h>
#include<string.h>
main()
{
	char s[5],s1[10];
	printf("Enter string:");
	gets(s);
/*	printf("%d\n",strlen(s));
	printf("%s\n",strrev(s));
	printf("%s\n",strlwr(s));
	printf("%s",strupr(s));*/
//	strcpy(s1,s);
/*	strncpy(s1,s,5);
	printf("%s",s1);*/
	printf("Enter second string:");
	gets(s1);
	//strcat(s,s1);
	strncat(s1,s,4);
	puts(s1);	
	
}
