// Program1_introduction.c

#include <stdio.h>
#include<conio.h>
/*
1. #include :: This is a pre-processor directive in C, 
               that is used to include the contents of the header files.

2. <Header File> :: It will find the header file directly
                    in the header file sections of the installed folder.
                    
   "Header File" :: It will find the .c file in the local 
                    folder first. If Header file is not present there then 
                    only they will search in the header file sections of the installed folder.

3. stdio.h :: standard input output.h(Header file)
*/
int main()
{
	int a;
	a = printf("Classroom");
	printf("\n The no of characters = %d", a);
	return 0;
}

/*
{} -- Curly Braces
*/

/* We can also write the followings -  
int main() {return 0;}
void main (){}
main(){return 0;}
void main(void){}
int main(void){return 0;}
main(void){return 0;}
*/

/*
printf() is a function under stdio.h header file.
This function is used to print the content written within "..."
printf() function returns the number of characters it
successfully prints.
*/


/*
return 0;
Here this value is received by operating system.
0 signifies successful termination of the program.
*/
