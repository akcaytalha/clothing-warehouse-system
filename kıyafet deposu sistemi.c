#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct warehouse{ 
	char brand[20];
	char type[20]; 
	char gender[20]; 
	char body[20];
	float price;	
};

int main(){
	struct warehouse clothes[100];
	int input=0,i=0,j=0;
	char body[10];
	
	while(input !=5){
		printf("\n\n\n\t warehouse management system:\n\n\n\t"); 
		printf("\n\n\n\t please make a selection: \n\n\n"); 
		printf("1. please add clothing details: \n"); 
		printf("2. show outfit information: \n"); 
		printf("3. total number of garments in the warehouse: \n"); 
		printf("4. show items in the same saze: \n"); 
		printf("5. use for the exit: \n");
		
		printf("please enter the input: \n");
		scanf("%d",&input);
		if(input<0 || input>5){
			printf("you have logged out: \n");
			exit(0);
			}
			
		switch(input){
			case 1:
				printf("please add brand:");
				scanf("%s",&clothes[i].brand);
				printf("please add type:");
				scanf("%s",&clothes[i].type);
				printf("please add gender:");
				scanf("%s",&clothes[i].gender);
				printf("please add body:");
				scanf("%s",&clothes[i].body);
				printf("please add price:");
				scanf("%f",&clothes[i].price);
				i++;
				break;
			
			case 2:
				printf("Clothing details: \n");
				for(j=0;j<i;j++){
					printf("the brand of the outfit:%s\n ",clothes[j].brand);
					printf("type of clothing:%s\n ",clothes[j].type);
					printf("the gender of the outfit:%s\n ",clothes[j].gender);
					printf("the size of the outfit:%s\n ",clothes[j].body);
					printf("the price of the outfit:%f\n ",clothes[j].price);
					printf("\n");
					}
				break;
			
			case 3:
				printf("total number of garments in the warehouse: %d\n",i);
				break;
			
			case 4:
				printf("Please select a size:\n");
				scanf("%s",&body);
				for(j=0;j<i;j++){
				if(strcmp(body,clothes[j].body)==0){
					printf("the brand of the outfit:%s\n ",clothes[j].brand);
					printf("type of clothing:%s\n ",clothes[j].type);
					printf("the gender of the outfit:%s\n ",clothes[j].gender);
					printf("the size of the outfit:%s\n",clothes[j].body);
					printf("the price of the outfit:%f\n ",clothes[j].price);
					printf("\n");
				}
				}
				break;
			
			case 5:
				printf("you have logged out: ");
				exit(0);
				break;
		}
		
	}
	return 0;
}
