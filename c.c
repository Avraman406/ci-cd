/*
Name:ATTIPATI VENKATA RAMANAIAH
Date:
Title:
Sample I/P:
Sample O/p:
*/
#include<stdio.h>
int main()
{
    int f=0,i=2,n;
    scanf("%d",&n);
    while(i<n)
    {
	if(n%i==0)
	    f=1;
	i++;
    }
    if(!f)
	printf("%d is prime\n",n);
    else
	printf("not a prime\n");
}
    
