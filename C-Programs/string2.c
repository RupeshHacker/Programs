/*
  1.gets()
  2.puts()
  3.fgets()
  4.fputs()
*/

#include<stdio.h>
main()
{
	char s[5];
	printf("Enter string: ");
	//scanf("%s",&s);
	fgets(s,6,stdin);
	//printf("%s",s);
	puts(s);
}
