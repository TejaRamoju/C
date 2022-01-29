#include <stdio.h>

void main(){
int i;
int a[100];
int size;
printf("Enter number of elements: ");
scanf("%d",&size);
for (i= 0;i<size;i++){
    printf("Enter Elements: ");
    scanf("%d",&a[i]);
}
for(int i=0;i<size;i++)
    {
        int temp;
        for(int j=i+1; j<size ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

printf("The largest Element is: %d\n",a[0]);

printf("The second smallest element is %d\n",a[size-2]);

printf("The second largest element is %d\n",a[1]);


getch();
}
