#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int n;
	int vowel=0,cons=0,others=0,digit=0;
	printf("Enter a String : ");
	scanf("%s",s);
	printf("\n s=%s",s);
//	n=strlen(s);
	for (int i=0;s[i]!='\0';i++)   // If n=strlen(s) is used , then i<n 
	{
		printf("\n%c",s[i]);
        if((s[i]>=65 && s[i]<90) || (s[i]>=97 && s[i]<122))
        {
        	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				vowel+=1;
			}
		else
			{
				cons+=1;	
			}
		}
		else if (s[i]>=48 && s[i]<57)
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

