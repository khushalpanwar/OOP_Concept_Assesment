#include<stdio.h>
int main()
{
	int price,choice,quantity,sandwitch,Burger,Pizza,Roll,Biryani;
	char name[50];
	float total;
	total=price*quantity;
	printf("Enter your name here :");
	scanf("%s",&name);
	printf("Hey! %s",name);
	printf("\n\tWhat would you like to order..?");
	
	printf("\n1)Sandwitch");
	printf("\n2)Burger");
	printf("\n3)Pizza");
	printf("\n4)Rolls");
	printf("\n5)Biryani");
	
	printf("\nEnter your choise :");
	scanf("%i",&choice);
	
	switch (choice)
	{
		case 1:
			
				printf("\nWhich kind of Sandwitch would you like to have.");
				printf("\n1)Masala Sandwitch ");
				printf("\n2)Cheese Sandwitch ");
				printf("\n3)Bombay Sandwitch");
				printf("\n4)Desi Tadka Sandwitch ");
				printf("\nEnter your Choise");
				
				scanf("%i",&sandwitch);
				switch (sandwitch)
				{
					case 1:
						
						price = 100;
						printf("You selected Masala Sandwitch. How many would you like to order?\n");
                        scanf("%d", &quantity);
                        printf("You ordered %d Masala Sandwitch for a total of %f.\n", quantity,total);
						break;
						
					case 2:
						
						price = 120;	
						printf("You selected Cheese Sandwitch. How many would you like to order?\n");
                        scanf("%d", &quantity);
                        printf("You ordered %d Cheese Sandwitch for a total of %f.\n", quantity, price * quantity);
						break;
						
					case 3:
						
						price = 135;
						printf("You selected Bombay Sandwitch. How many would you like to order?\n");
                        scanf("%d", &quantity);
                        printf("You ordered %d Bombay Sandwitch for a total of %f.\n", quantity, price * quantity);
						break;
						
					case 4:
						
						price = 135;
						printf("You selected Desi Tadka Sandwitch. How many would you like to order?\n");
                        scanf("%d", &quantity);
                        printf("You ordered %d Desi Tadka Sandwitch for a total of %f.\n", quantity, price * quantity);
						break;
						
					default:
						printf("Invalid Input...");
						break;
				}
		break;
			
			
		case 2:
		
			printf("\nWhich kind of burger wold you like to order?");
			printf("\n1)Aloo Tikki Burger");
			printf("\n2)Veg Burger");
			printf("\n3)American Burger");
			printf("\n4)Chicken Burger");	
			
			printf("Enter your choise :");
			scanf("%i",&Burger);
			
			switch(Burger)
			{
				case 1:
					
						price=70;
						printf("You selected Aloo Tikki Burger. How many would you like to order?\n");
                        scanf("%d", &quantity);
                        printf("You ordered %d Aloo Tikki Burger for a total of %f.\n", quantity, price * quantity);
						break;
						
					
				case 2:
					
						price=85;
						printf("You selected Veg Burger. How many would you like to order?\n");
                        scanf("%d", &quantity);
                        printf("You ordered %d Veg Burger for a total of %f.\n", quantity, price * quantity);
						break;
					
				case 3:
					
						price=100;
						printf("You selected American Burger. How many would you like to order?\n");
                        scanf("%d", &quantity);
                        printf("You ordered %d American Burger for a total of %f.\n", quantity, price * quantity);
						break;
					
				case 4:
					
						price=110;
						printf("You selected Chicken Burger. How many would you like to order?\n");
                        scanf("%d", &quantity);
                        printf("You ordered %d Chicken Burger for a total of %f.\n", quantity, price * quantity);
						break;
					
				default:
					printf("Invalid Input ...");
					break;
			}
		break;
		
		case 3:
			printf("\nWhich kind of Pizza would you like to have");
			printf("\n1)Margerita Pizza");
			printf("\n2)Farm_house Pizza");
			printf("\n3)Italian Pizza");
			
			printf("\nEnter your choise :");
			scanf("%i",&Pizza);
			switch (Pizza)
			{
				case 1:
					price=225;
					printf("You selected Margerita Pizza. How many would you like to order?\n");
                    scanf("%d", &quantity);
                    printf("You ordered %d Margerita Pizza for a total of %f.\n", quantity, price * quantity);
					break;
				case 2:
					price=225;
					printf("You selected Farm_house Pizza. How many would you like to order?\n");
                    scanf("%d", &quantity);
                    printf("You ordered %d Farm_house Pizza for a total of %f.\n", quantity, price * quantity);
					break;
				case 3:
					price=110;
					printf("You selected Italan Pizza. How many would you like to order?\n");
                    scanf("%d", &quantity);
                    printf("You ordered %d Italian Pizza for a total of %f.\n", quantity, price * quantity);
					break;
				default :
					printf("Invalid Input...");
					break;
			}
			
			break;
			
		case 4:
			printf("\nWhich kind of Rolls would you like to have");
			printf("\n1)Veg Roll");
			printf("\n2)Non-veg Roll");
			
			printf("\nEnter your choise");
			scanf("%i",Roll);
			
			switch(Roll)
			{
				case 1:
					price=100;
					printf("You selected Veg Roll. How many would you like to order?\n");
                    scanf("%d", &quantity);
                    printf("You ordered %d Veg Roll for a total of %f.\n", quantity, price * quantity);
					break;
				case 2:
					price=120;
					printf("You selected Non-veg Roll. How many would you like to order?\n");
                    scanf("%d", &quantity);
                    printf("You ordered %d Non-veg Roll for a total of %f.\n", quantity, price * quantity);
					break;
				default:
					printf("Invalid Input...");
					break;
			}
			
			break;
			
		case 5:
			printf("\nWhich kind of Biryani would you like to have");
			printf("\n1)Veg Biryani");
			printf("\n2)Non-Veg Biryani");
			
			printf("\nEnter your choise :");
			scanf("%i",&Biryani);
			
			switch(Biryani)
			{
				case 1:
					price=100;
					printf("You selected Veg Biryani. How many would you like to order?\n");
                    scanf("%d", &quantity);
                    printf("You ordered %d Veg Biryani for a total of %f.\n", quantity, price * quantity);
					break;
				case 2:
					price=120;
					printf("You selected Non-veg Biryani. How many would you like to order?\n");
                    scanf("%d", &quantity);
                    printf("You ordered %d Non-veg Biryani for a total of %f.\n", quantity, price * quantity);
					break;
				default:
					printf("Invalid Input...");
					break;
			}
			
			
		default:
			printf("Invalid Input...");
			break;
	}
	
return 0;
}