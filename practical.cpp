#include <stdio.h>
#define n 5
int main()
{
    int a[n],i,j,temp;
    printf("enter array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nAarray\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
/*insertion sort*/
for(i=1;i<n;i++)
{
    temp=a[i];
    j=i-1;
    while(j>=0&&a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}
printf("\nsorted array\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
return 0;
}