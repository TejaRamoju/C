#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fpt1, *fpt2, *fnew;
	char ch, fname1[30], fname2[30], fname3[30];

	printf("\n Merge two files and write it in a new file :\n");

	printf(" Input the 1st file name : ");
	scanf("%s",fname1);
	printf(" Input the 2nd file name : ");
	scanf("%s",fname2);
	printf(" Input the new file name where to merge the above two files : ");
	scanf("%s",fname3);
	fpt1=fopen(fname1, "r");
	fpt2=fopen(fname2, "r");
	if(fpt1==NULL || fpt2==NULL)
	{
//		perror("Error Message ");
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	fnew=fopen(fname3, "w");
	if(fnew==NULL)
	{
//		perror("Error Message ");
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	while((ch=fgetc(fpt1))!=EOF)
	{
		fputc(ch, fnew);
	}
	while((ch=fgetc(fpt2))!=EOF)
	{
		fputc(ch, fnew);
	}
	printf(" The two files merged into %s file successfully..!!\n\n", fname3);
	fclose(fpt1);
	fclose(fpt2);
	fclose(fnew);
}
