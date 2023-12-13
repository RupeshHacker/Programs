#include<stdio.h>
main()
{
	FILE *fp;
	fp= fopen("D:\\pqr.txt","w");
	//fprintf(fp,"Shraddha");
	//fputc('A',fp);
	fputs("Kolhapur",fp);
}
