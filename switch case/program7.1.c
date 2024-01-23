#include<stdio.h>
main(){
	
	int choice,a,b,c;
	
	printf("press 1 for pizza\n");
	printf("press 2 for burger\n");
	printf("press 3 for dosa\n\n");
	
	printf("Enter your choice for order : ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("\npress 1 for margarita pizza\n");
			printf("press 2 for farm house pizza\n");
			printf("press 3 for mexicon pizza\n");
	
			printf("\nEnter your choice for pizza : ");
			scanf("%d",&a);
				
			switch(a){
					
				case 1:
					printf("\nyou ordered margarita pizza");
					break;
				case 2:
					printf("\nyou ordered farm house pizza");
					break;
				case 3:
					printf("\nyou ordered mexicon pizza");
					break;
				default:
					printf("\nplease enter valid choice : ");
					
			}
			
		break;
		
		case 2:
			printf("\npress 1 for beef burger\n");
			printf("press 2 for cheese burger\n");
			printf("press 3 for hawaiian burger\n");
	
			printf("\nEnter your choice for burger : ");
			scanf("%d",&b);
				
			switch(b){
					
				case 1:
					printf("\nyou ordered beef burger");
					break;
				case 2:
					printf("\nyou ordered cheese burger");
					break;
				case 3:
					printf("\nyou ordered hawaiian burger");
					break;
				default:
					printf("\nplease enter valid choice :");
					
			}
			
		break;
		
		case 3:
			printf("\npress 1 for plain dosa\n");
			printf("press 2 for masala dosa\n");
			printf("press 3 for mysore dosa\n");
	
			printf("\nEnter your choice for dosa : ");
			scanf("%d",&c);
				
			switch(c){
					
				case 1:
					printf("\nyou ordered plain dosa");
					break;
				case 2:
					printf("\nyou ordered masala dosa");
					break;
				case 3:
					printf("\nyou ordered mysore dosa");
					break;
				default:
					printf("\nplease enter valid choice :");
					
			}
			
		break;
		
		default:
					printf("\nplease enter valid choice :");
		
	}
	
}
