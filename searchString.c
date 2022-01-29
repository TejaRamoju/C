#include<stdio.h>
#include<string.h>
void main(){
    int n,i;
    char str[200][200];
    char str1[200];
    printf("Enter number of strings: ");
    scanf("%d",&n);
    printf("Enter string to search: ");
    scanf("%s",&str1);
    for (i=0;i<n;i++){
        printf("Enter string: ",i);
        scanf("%s",&str[i]);
    }
    for (i=0;i<n;i++){
        if (strcmp(str,str[i])){
            printf("string is at %d",i);
		}
	}


}

