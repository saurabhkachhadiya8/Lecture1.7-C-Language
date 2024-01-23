#include<stdio.h>
main(){
	
	int a,b,c,d;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	printf("Enter the value of d : ");
	scanf("%d",&d);
	
	(a < b) ? ((a < c) ? ((a < d) ? printf("a is min") :printf("d is min")) 
			: ((c < d) ? printf("c is min") :printf("d is min"))) 
	: ((b < c) ? ((b < d) ? printf("b is min") :printf("d is min")) 
			   : ((c < d) ? printf("c is min") :printf("d is min")));
	
}
