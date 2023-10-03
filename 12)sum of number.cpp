#include<stdio.h>
int main()
{
	int a,b,c,d,n;
	printf("Enter the number");
	scanf("%d",n);
	
	while(n!=0)
    {
    a=n%10;
    b=b+n*10;
    n=n/10;
    c=a+b+n;
    printf("The sum is %d",c);
}
    
}
