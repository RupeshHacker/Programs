/*14.strchr():-first occurence
  15.strrchr():-last occurence

*/
#include<stdio.h>
#include<string.h>
main()
{
	char s[10];
	printf("Enter string: ");
	gets(s);
	//printf("%s",strchr(s,'i'));
	printf("%s",strrchr(s,'i'));
}
