
#include<stdio.h>
int main() {
	int day;
	
	printf("Enter a value of day: ");
	scanf("%d",&day);
	
	switch(day){
		case 1: printf("Sunday\n"); break;
		case 2: printf("Monday\n"); break;
		case 3: printf("Tuesday\n"); break;
		case 4: printf("Wednesday\n"); break;
		default: printf("Good day\n"); break;
	}
	return 0;
}







/*
Switch Case general syntax:

switch(){
    case 1: Statement; break;
    case 2: Statement; break;
    case 3: Statement; break;
    default: Statement; break;
}

*/
