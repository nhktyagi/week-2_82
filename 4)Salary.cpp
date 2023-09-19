#include<stdio.h>
int main()
{
	int b,h,r,t,g,d;
	printf("Enter the basic salary \n");
	scanf("%d",&b);
	printf("Enter the area of residence \n1.Tier 1 \n2.Tier2 \n3.Tier3 \n");
	scanf("%d",&r);
	{
	
	if(r==1)
	h=b*27/100;
	else if(r==2)
	h=b*24/100;
	else
	h=b*16/100;
}
	d=b*48/100;
	t=b*8/100;
	g=h+b+d+t;
	printf("The gross salary is %d",g);
	printf("\n The HRA is %d",h);
	printf("\n The Da is %d",d);
	printf("\n The TA is %d",t);
	
	}
