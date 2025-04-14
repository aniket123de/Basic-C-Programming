#include<stdio.h>
int main() {

int num, fact=1,start, end;

printf("Enter start range :");

scanf("%d", &start);

printf("\nEnter end range :");
scanf("%d", &end);
for (int i=1; i<=start; i++)
{
fact=fact*i;
printf("\nFactorial of %d %d", start, fact);
}
for(int starts=start+1; starts<=end; starts++)
{ 
fact =fact *starts;
printf("\nFactorial of %d %d", starts, fact);
}

return 0;
 }
