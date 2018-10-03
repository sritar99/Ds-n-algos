#include<stdio.h>
int main()
{
    int a[100],search,i,n;
    printf("Enter the no of elements in the array:\n");
    scanf("%d",&n);
    printf("Enter elements in the array: \n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    printf("Enter search element:\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
      if(a[i]==search)
      {
        printf("found ");
        break;
      }
    }
    if(i==n)
     printf("not found");
	return 0;
}