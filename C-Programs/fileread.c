#include<stdio.h>
main()
{
	FILE *fp;
	char ch[123];
	fp=fopen("D:\\abc.txt","r");
	/*while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}*/
	/*while(fscanf(fp,"%s",ch)!=EOF)
	{
		printf("%s",ch);
	}*/
	while(fgets(ch,345,fp)!=NULL)
	{
		printf("%s",ch);
	}
	fclose(fp);
}
