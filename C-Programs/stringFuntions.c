/*
 1.strlen():-
 2.strrev():-
 3.strlwr():-
 4.strupr():-

*/
#include<stdio.h>
#include<string.h>
main()
{
	char s[10];
	printf("Enter string: ");
	gets(s);
	//printf("%d",strlen(s));
	//printf("%s",strrev(s));
	printf("\n%s",strlwr(s));
	//printf("\n%s",strupr(s));
}
