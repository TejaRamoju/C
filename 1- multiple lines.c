#include <stdio.h>

int main ()
{
  FILE *ptr;
  int i,n;
  char str[100];
  char fname[20]="enter.txt";
  char str1;
	printf(" Input the number of lines: ");
	scanf("%d", &n);
	printf("\n Enter The lines are \n");
	ptr = fopen (fname,"w");
	for(i = 0; i < n+1;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str, ptr);
		}
  fclose (ptr);

	ptr = fopen (fname, "r");
	printf("\n The content of the file %s is  :\n",fname);
	str1 = fgetc(ptr);
	while (str1 != EOF)
		{
			printf ("%c", str1);
			str1 = fgetc(ptr);
		}
    printf("\n ");
    fclose (ptr);
    return 0;
}
