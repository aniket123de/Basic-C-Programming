// WACP to define a structure student to store name,roll and marks.
#include<stdio.h>
#include<conio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
};

int main()
{
	struct student s[10];
	int i,n;
	printf("How many students ? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nRoll number : ");
		scanf("%d",&s[i].roll);
		printf("\nName : ");
		scanf("%s",&s[i].name);
		printf("\n Total Marks : ");
		scanf("%f",&s[i].marks);
	}
	printf("\nDisplaying Information -->");
	for(i=0;i<n;i++)
	{
		printf("Roll no. - %d\n",s[i].roll);
		printf("Name - %s\n",s[i].name);
		printf("Total Marks - %.2f\n",s[i].marks);
	}
}
