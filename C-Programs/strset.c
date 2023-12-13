/*12,strset():-
13.strnset():-*/
#include<stdio.h>
#include<string.h>
main()
{
	char s[10];
	printf("ENter string: ");
	gets(s);
	//printf("%s",strset(s,'g'));
	printf("%s",strnset(s,'$',3));
	
}
