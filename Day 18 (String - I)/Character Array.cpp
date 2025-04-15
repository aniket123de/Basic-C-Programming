/*
n = no. of characters
Take characters as input
input : 5 , abcde
Output : Vowel = 2 , Consonant = 3
*/
#include<stdio.h>
int main()
{
	char arr[50];
	int n;
	int vowel=0,cons=0;
	printf("Enter no. of characters :");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("\n Enter a character : ");
		getchar();
		scanf("%c",&arr[i]);	
	}	
	printf("\n");
	for (int i=0;i<n;i++)
	{
		printf("%c",arr[i]);
		
		if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
		{
			vowel+=1;
		}
		else
		{
			cons+=1;	
		}
	}		
		printf("\n Vowel=%d",vowel);
		printf("\n Consonant=%d",cons);
	return 0;
}

