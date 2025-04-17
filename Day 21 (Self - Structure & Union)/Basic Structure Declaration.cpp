#include<stdio.h>
#include<string.h>

struct Person
{
	char name[50];
	int roll_no;
	float fees;
} person1;

int main()
{
strcpy(person1.name,"Aniket De");
person1.roll_no = 115;
person1.fees = 562345;

printf("Name - %s\n",person1.name);
printf("Roll Number - %d\n",person1.roll_no);
printf("Fees - %.2f\n",person1.fees);
return 0;
}
