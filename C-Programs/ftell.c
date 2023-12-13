#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("D:\\abc.txt","r");
	fseek(fp,0,SEEK_END);
	printf("%d",ftell(fp));
	fclose(fp);
}
