#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	fp=fopen("D:\\abc.txt","r");
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
	rewind(fp);
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
	fclose(fp);
}
	
