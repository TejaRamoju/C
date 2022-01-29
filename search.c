#include <stdio.h>

void main(){
int i,w;
int a[100];
int n;
printf("Enter number of Elements: ");
scanf("%d",&n);
for (i= 0;i<n;i++){
    printf("Enter Elements: ");
    scanf("%d",&a[i]);
}
printf("Enter Element to search: ");
scanf("%d",&w);
for (i=0;i<n;i++){
    if (a[i] == w){
        printf("The Element %d is at %d position",w,i+1);
    }
}
getch();
}
