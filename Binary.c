#include<stdio.h>
int main()
{
	int i,f,l,m,n,key,a[100];
	printf("enter no of emelements in the array:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element:\n");
	scanf("%d",&key);
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<=l){
		if(a[m]<key)
			f=m+1;
		else if(a[m]==key){
			printf("element found at%d",m+1);
			break;
		}
		else 
			l=m-1;
		m=(f+l)/2;
	}
	if(f>l)
		printf("Not found");

 return 0;
}