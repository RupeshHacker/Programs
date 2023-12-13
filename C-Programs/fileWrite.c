/*file handling
;

*/
#include<stdio.h>
main()
{
	FILE *fp;
	fp=fopen("D:\\abc.txt","a");
	//fprintf(fp,"disha computer");
	//fputs("kolhapur",fp);
	fputc('G',fp);
	fclose(fp);
}
