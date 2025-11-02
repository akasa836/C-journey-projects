
/*  Hi ! I'm Proshanto Das
	I'm a Electrical engineer
	I'm using C language in this project  part -01   */




#include<stdio.h>
#include<math.h>

// how to calculate resistance 

int main(){
    
    double r1 =0.0;   // resistance 1 
    double r2=0.0;	  // resistance 2
    double r3=0.0;	// resistance 3
    
    double resistanceSeries =0.0;       //  resistanceSeries
    double resistanceParallel  =0.0;	// resitanceParallel
    double resistance2 =0.0;
    
    
    
    
    printf("enter a r1: ");             
    scanf("%lf", &r1);					// resistance 1   I/O
    
    printf("enter a r2: ");
    scanf("%lf", &r2);					// resistance 2  I/O
    
    printf("enter a r3: ");
    scanf("%lf", &r3);        			//  resistance 3  I/O
    
    printf("enter how many resistance: ");
    scanf("%lf" , &resistance2); 						// how many resistance we have I/O
    
    

    
    resistanceSeries= (r1+r2+r3);                      // formula of RESISTANCE IN SERIES 
    resistanceParallel = (r1/ resistance2 +r2/resistance2+r3/resistance2);   // FORMULA OD RESISTANCE IN PARALLEL 
    
    
    
    printf("resistance series: %.2lf" , resistanceSeries);    // OUTPUT OF RESISTANCE IN SERIES 
    printf("resistance paralle: %.2lf", resistanceParallel);  // OUTPUT OF RESISTANCE IN PARALLEL



    return 0;
}
