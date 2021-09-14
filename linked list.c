#include<stdio.h>
struct node   
{  
    int data;  
    struct node *next;   
}; 
struct node n1,n2,n3;
int main()
{
	n1.data=10;
	n2.data=20;
	n3.data=30;
	n1.next=&n2;
	n2.next=&n3;
	printf("%d\n",n1.next->data);
	printf("%d\n",n2.next->data);
	printf("%d\n",n1.next->next->data);
	return 0;
}
