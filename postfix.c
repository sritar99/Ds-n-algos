 #include<stdio.h>
 #include<ctype.h>
  # define POSTFIXSIZE 100
# define MAXSTACK 100

 int stack[MAXSTACK];int top=-1,x,i;
int push(int x)
{
	if(top>=MAXSTACK-1)
	printf("Stack overflow");
else {
	top=top+1;
	stack[top]=x;
}
return 0;

}

int pop()
{
	if(top<0)
		printf("Stack underflow\n");
	else
	{
		x=stack[top];
	    top=top-1;
	}
	return x;
}

int EvalPostfix(char postfix[])
{
int i ;
	char ch;
	int val;
	int A, B ;


	for (i = 0 ; postfix[i] != ')'; i++)
	{
		ch = postfix[i];
		if (isdigit(ch))
		{
			push(ch - '0');
		}
		else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
			A = pop();
			B = pop();

			switch (ch) /* ch is an operator */
			{
				case '*':
				val = B * A;
				break;

				case '/':
				val = B / A;
				break;

				case '+':
				val = B + A;
				break;

				case '-':
				val = B - A;
				break;
			}
			push(val);
		}
	}
	printf( " \n Result of expression evaluation : %d \n", pop()) ;
	return 0;
 }

 int main()
 {
	int i ;
	char postfix[POSTFIXSIZE];
	printf("ASSUMPTION: There are only four operators(*, /, +, -) in an expression and operand is single digit only.\n");
	printf( " \nEnter postfix expression,\npress right parenthesis ')' for end expression : ");
	for (i = 0 ; i <= POSTFIXSIZE - 1 ; i++)
	{
		scanf("%c", &postfix[i]);

		if ( postfix[i] == ')' ) 
		{ break; } 
	}
	EvalPostfix(postfix);

	
  return 0;
 }

