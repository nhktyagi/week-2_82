 #include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("Enter the first number A ");
 	scanf("%d",&a);
 	printf("Enter the second number B ");
 	scanf("%d",&b);
 	printf("Enter the third number C ");
 	scanf("%d",&c);
 	if (a>b&&a>c)
 	printf("A is the greatest number");
 	else if (b>a&&b>c)
 	printf("B is the greatest number");
 	else
 	printf("C is the greatest number");
 	
 	
 }
