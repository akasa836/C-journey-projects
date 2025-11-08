// temperature programming  using c 

#include<stdio.h>

int main(){
	
	char choice ='\0';
	float Fahrenheit =0.0f;
	float Celsius =0.0f;
	
	printf("temperature convergen program ");
	printf("c. Celsius to Fahrenheit");
	printf("f .ferenhiet to Celsius\n");
	printf ("is the temp is Celsius (C) or Fahrenheit (f)?: ");
	scanf("%c" , &choice);
	
	
	if(choice =='c'){								// Celsius to Fahrenheit
		printf("enetr the temp in celsius");
		scanf("%f", &Celsius);
		Fahrenheit = (Celsius*9/5)+32;
		printf("%f Celsius is equal to %f Fahrenheit\n" , Celsius,Fahrenheit);
		
	}
	else if (choice =='f'){							//	ferenhiet to Celsius
		printf("enter the temperature in Fahrenheit:  ");
		scanf("%f", &Fahrenheit);
		Celsius= (Fahrenheit -32)*5/9;
		printf("%f Fahrenheit is equal to %f Celsius\n" , Fahrenheit , Celsius);
	}
	else{
		printf("invalide choice please select c or f\n");
	}
	
	
	return 0;
}

