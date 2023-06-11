#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int funds , meals , transport , accomodation , expenses ,totalexpenditure;
/*	int ;
	int ;
	int ;
	int ;
	int ;
	int result;*/
	
	printf("How much have you been given by your guardian?\n");
	scanf("%d", &funds);
	printf("How much do you want to spend on meals?\n");
	scanf("%d", &meals);
	printf("How much do you want to spend on transport?\n");
	scanf("%d", &transport);
	printf("How much do you want to spend on accomodation?\n");
	scanf("%d", &accomodation);
	totalexpenditure = meals + transport + accomodation;
	printf("Your total expenditure will be %d ", totalexpenditure);
	if (totalexpenditure < funds){
		printf("........You will have a balance");
	} else if(totalexpenditure > funds ){
		printf("........You will have a deficit");
	} else {
		printf("\n........The funds will be just enough");
	}
	
	
	
	
	
	return 0;
}
