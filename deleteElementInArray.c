#include<stdio.h>
void main(){
    int a[100],b[100];
    int n,i;
    int w;
    int l = 0;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    printf("Enter Element to be deleted: ");
    scanf("%d",&w);
    for(i=0;i<n;i++){
        printf("Enter Element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if (a[i] != w){
            b[i] = a[i];
            printf("Elements are: %d\n",b[i]);
        }
    }
getch();
}
