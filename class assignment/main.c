#include <stdio.h>
#include <stdlib.h>


//checking year of study and required points for eligibility of a project
int main() {
	int study_year;
	int points_scored;
	printf("Which year of study are you in: ");
	scanf("%d", &study_year);
	printf("You are in year %d\n",study_year);
	
	if(study_year == 1){
		printf("Great!! Your year is eligible for the project\nplease enter your alevel results:");
		scanf("%d", &points_scored);
		if(points_scored > 10 && points_scored < 21){
			printf("You have the points required to be considered for the project");
		}else{
			printf("Sorry,,you dont have the required points\nYou are not eligible for the project");
		}
	}else{
		printf("Sorry,,You are not eligible for the project");
	}
	
	
	return 0;
}
