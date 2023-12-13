/*16.strstr():-first occurence
  17.strrstr():-last occurence

*/
#include<stdio.h>
#include<string.h>
main()
{
	char s[10];
	printf("Enter string: ");
	gets(s);
	//printf("%s",strstr(s,"disha"));
	printf("%s",strrstr(s,"disha"));
}
