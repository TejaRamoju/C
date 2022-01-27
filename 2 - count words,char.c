#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fpt;
    char ch;
    int word=1,character=1;
    char fname[20];
	printf("Enter the filename to be opened : ");
	scanf("%s",fname);

    fpt=fopen(fname,"r");
    if(fpt==NULL)
     {
         printf(" File does not exist or can not be opened.");
      }
    else
        {
          ch=fgetc(fpt);
          printf(" The content of the file %s are : ",fname);
          while(ch!=EOF)
            {
                printf("%c",ch);
                if(ch==' '||ch=='\n')
                    {
                        word++;
                    }
                    else
                    {
                        character++;
                    }
                ch=fgetc(fpt);
            }
        printf("\n The number of words in the  file %s are : %d\n",fname,word-2);
        printf(" The number of characters in the  file %s are : %d\n\n",fname,character-1);
        }
    fclose(fpt);
}

