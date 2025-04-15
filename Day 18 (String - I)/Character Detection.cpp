/*
n = no. of characters
Take characters as input
input : 5 , abcde
Output : Vowel = 2 , Consonant = 3

65-90 = A-Z
97-122 = a-z

*/
#include<stdio.h>
int main()
{
	char arr[50];
	int n;
	int vowel=0,cons=0,others=0,digit=0;
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
        if((arr[i]>=65 && arr[i]<90) || (arr[i]>=97 && arr[i]<122))
        {
        	if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
			{
				vowel+=1;
			}
		else
			{
				cons+=1;	
			}
		}
		else if (arr[i]>=48 && arr[i]<57)
		{
			digit++;
		}
		else
		{
			others++;
		}
	}		
		printf("\n Vowel=%d",vowel);
		printf("\n Consonant=%d",cons);
		printf("\n Digit=%d",digit);
		printf("\n Special Characters=%d",others);
	return 0;
}

