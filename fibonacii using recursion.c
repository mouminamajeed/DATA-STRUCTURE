#include<stdio.h>
//every num is sum of previous 2 numbers
//fibo(a)=fib(a-1)+fibo(a-2)
int fibo(int );

int main()
{
	int n,i;
	printf("enter you number\n ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("%d \t",fibo(i));
	return 0;
}
int fibo(int a)
{
	if (a==0||a==1)
	return a;
	else
	return(fibo(a-1)+fibo(a-2));
}
