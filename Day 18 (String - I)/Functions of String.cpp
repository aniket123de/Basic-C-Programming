#include<stdio.h>
#include<string.h>
int main()
{
	// Taking String from User
	char t[15]="abcdefghij";
	char s[10];
	char a[15]="Hello";
	
	printf("\n Length of string : %d",strlen(t));
	
	strcpy(s,t);
	printf("\n s= %s",s);
	
	strcat(a,s); // a=a+s = Helloabcdefghij
	printf("\n a= %s",a);
	
	/* strcmp() - The ASCII difference between first two 
	              mismatched characters*/
	char c[10]="Madam";
	char d[10]="Mam";
	char e[10]="Madam";
	printf("\n strcmp(c,d)=%d",strcmp(c,d));
	printf("\n strcmp(c,d)=%d",strcmp(d,c));
	printf("\n strcmp(c,e)=%d",strcmp(c,e)); // When both strings are equal then we get zero
	
	// strlwr
	char y[10] = "KOLKATA";
	printf("\n y=%s",strlwr(y));
	
	// strstr : If the substring is found at x(let) index , strstr(...) will return back that index.
	char p[10] = "Khardaha";
	printf("\n Address of d = %u",&p[3]);
	printf("\n p=%u" , strstr(p,"Khar"));
	printf("\n p=%u",strstr(p,"Patna")); // As patna is not present in main string , so output is 0.
	
	return 0;
}
