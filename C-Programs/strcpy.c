/*5.strcpy():-
 6.strncpy():-
*/
#include<stdio.h>
#include<string.h>
main()
{
	char s[10],s1[10];
	printf("Enter string: ");
	gets(s);
	//strcpy(s1,s);
	strncpy(s1,s,3);
	printf("%s",s1);
}
