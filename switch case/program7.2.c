#include<stdio.h>
main(){
	
	int choice,a,b,c;
	
	printf("press 1 for English\n");
	printf("press 2 for Hindi\n");
	printf("press 3 for Gujarati\n\n");
	
	printf("Choice your language : ");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
			printf("\npress 1 for Internet Recharge\n");
			printf("press 2 for Top-up Recharge\n");
			printf("press 3 for Special Recharge\n");
	
			printf("\nEnter your choice for Recharge : ");
			scanf("%d",&a);
				
			switch(a){
					
				case 1:
					printf("\nYou have successfully done Internet Recharge.");
					break;
				case 2:
					printf("\nYou have successfully done Top-up Recharge.");
					break;
				case 3:
					printf("\nYou have successfully done Special Recharge.");
					break;
				default:
					printf("\nplease enter valid choice :");
					
			}
			
		break;
		
		case 2:
			printf("\nInternet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("Special Recharge ke liye 3 dabaiye\n");
	
			printf("\nEnter your choice for Recharge : ");
			scanf("%d",&b);
				
			switch(b){
					
				case 1:
					printf("\nAapne safaltapurvak Internet Recharge kar liya he.");
					break;
				case 2:
					printf("\nAapne safaltapurvak Top-up Recharge kar liya he.");
					break;
				case 3:
					printf("\nAapne safaltapurvak Special Recharge kar liya he.");
					break;
				default:
					printf("\nplease enter valid choice :");
					
			}
			
		break;
		
		case 3:
			printf("\nInternet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("Special Recharge mate 3 dabavo\n");
	
			printf("\nEnter your choice for Recharge : ");
			scanf("%d",&c);
				
			switch(c){
					
				case 1:
					printf("\nTame safaltapurvak Internet Recharge karyu chhe.");
					break;
				case 2:
					printf("\nTame safaltapurvak Top-up Recharge karyu chhe.");
					break;
				case 3:
					printf("\nTame safaltapurvak Special Recharge karyu chhe.");
					break;
				default:
					printf("\nplease enter valid choice :");
					
			}
			
		break;
		
		default:
					printf("\nplease enter valid choice :");
		
	}
	
}
