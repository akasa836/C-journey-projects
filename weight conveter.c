#include<stdio.h>

int main(){
	
	int choice =0;
	float pound =0.0f;
	float kilogram =0.0f;
	
	
	printf("weight conversion calculator\n ");
	printf("1 kilogram to pounds\n");
	printf("2. pound to kilogram\n");
	printf("enter your choice (1 or 2):");
	scanf("%d" , &choice);
	
	
	if (choice==1){
		printf("enter the weight in kg: ");
		scanf("%f", &kilogram);
		pound=kilogram*2.20462;
		printf("%f kilogram is equal to %.2f pound\n", kilogram , pound );
		
	}
	else if(choice ==2){
		printf("enter the weight in pounds: ");
		scanf("%f", &pound);
		kilogram=pound*2.20462;
		printf("%f pound is equal to %.2f kilogram\n",pound, kilogram );
	}
	else{
		printf("invalide choice please enter 1 or 2 \n");
	}
	
	
		
	return 0;
}
