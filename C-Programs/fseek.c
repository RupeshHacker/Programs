#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("D:\\abc.txt","w");
	fprintf(fp,"Disha computer");
	fseek(fp,3,SEEK_SET);
	fseek(fp,-2,SEEK_CUR);
	fprintf(fp,"kolhapur");
	fclose(fp);
}
