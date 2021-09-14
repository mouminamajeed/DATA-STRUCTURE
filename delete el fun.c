#include<stdio.h>
int main()
{
	int a[100],n,i;
printf("enter the number of elements (100 max):\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("\nenter element:");
	scanf("%d",&a[i]);
}
printf("\n enter the elemnt you want to delete:");
scanf("%d",&i);
int delete(int a[],int i,int n,int k )
{
	int j=0;
	while(a[j]!=i)
	j=j+1;
	for(k=j;k<n-1;k++)
	a[k]=a[k+1];

}}
