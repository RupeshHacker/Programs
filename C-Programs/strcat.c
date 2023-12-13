/*
7.strcat():-concatination 
8.strncat():-
*/
#include<stdio.h>
#include<string.h>
main()
{
	char s[10],s1[10];
	printf("Enter first string: ");
	gets(s);
	printf("Enter second string: ");
	gets(s1);
	//strcat(s,s1);
	strncat(s,s1,3);
	printf("%s",s);
}
