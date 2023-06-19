#include <stdio.h>
#include <stdlib.h>

/* cprogram that determins wether joan has enough for her expenses */

int main() {
	
	int salary;
	printf("Hello Joan ,,, what was this month's salary? ");
	scanf("%d", &salary);
	printf("Your salary is %d\n", salary);
	
	int rent = 0.05 * salary;
	int mother_allowance = 0.1 * salary;
	int monthly_purchases = 380000;
	int total_expenses = rent + mother_allowance + monthly_purchases;
	printf("Your total expenses are %d\n", total_expenses);
	
	if(salary >= total_expenses){
		printf("you have enough to cater for all expenses");
	}else{
		printf("you do not have enough to cater for all expenses");
	} 
	return 0;
}
