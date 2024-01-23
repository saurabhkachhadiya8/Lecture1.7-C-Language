#include<stdio.h>
main(){
	
	int a,b,c,d,e;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	printf("Enter the value of d : ");
	scanf("%d",&d);
	printf("Enter the value of e : ");
	scanf("%d",&e);
	
	(a < b) ? ((a < c) ? ((a < d) ? ((a < e) ? printf("a is min") :printf("e is min")) 
					   : ((d < e) ? printf("d is min") :printf("e is min"))) 
			: ((c < d) ? ((c < e) ? printf("c is min") :printf("e is min")) 
			: ((d < e) ? printf("d is min") :printf("e is min")))) 
	: ((b < c) ? ((b < d) ? ((b < e) ? printf("b is min") :printf("e is min")) 
						  : ((d < e) ? printf("d is min") :printf("e is min"))) 
			   : ((c < d) ? ((c < e) ? printf("c is min") :printf("e is min")) 
			   			  : ((d < e) ? printf("d is min") :printf("e is min"))));
	
}
