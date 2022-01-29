#include<stdio.h>
void main(){

    int a[100],c[100],b,i,n,k,z[100],b1;

    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Position: ");
    scanf("%d",&b);
    b1 = (b-1);
    printf("Enter element to be inserted: ");
    scanf("%d",&k);

    for (i = 0;i<n;i++){
        printf("Enter Elements: ");
        scanf("%d",&a[i]);
    }
    for (i = 0;i<n;i++){
        z[i] = a[i];
    }
    for(i=0;i<n+1;i++){
        if (i == n){
            a[i] = k;
        }
    }
    for (i =0;i<n+1;i++){
        if (i<b1){
            c[i] = a[i];
        }
        if (i == b1){
            c[i] = a[n];
        }
        if (i > b1){
            c[i] = z[i-1];
        }
    }
    for (i=0;i<n+1;i++){
        printf("Array after inserting: %d\n",c[i]);
    }


getch();
}
