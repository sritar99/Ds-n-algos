#include<stdio.h>

int towers(int,char,char,char);

int main()
{
	int num;
	printf("Enter no of disks:\n");
	scanf("%d",&num);
	towers(num,'A','C','B');
	return 0;
}

int towers(int num,char frompeg,char topeg,char supeg)
{
	if(num==1)
	{
	 printf("Move disk from %c peg to %c peg",frompeg,topeg);
	 return 1;
	}
	towers(num-1,frompeg,supeg,topeg);
	printf("\nMove disk from %c peg to %c peg\n",frompeg,topeg);
	towers(num-1,supeg,topeg,frompeg);

	return 0;
}