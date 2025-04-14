// Print 1 to 10 using for loop
#include<stdio.h>
int main()
{
	int a;
	for (a=1;a<=10;a++){
		printf("%d",a);
	}
	/*
	1. a=1 (Initialised for one time)
	2. 1<=3 true so 1
	3. print 1
	4. a++ : a=2
	
	2. 2<=3 true so 1
	3. print 2
	4. a++ : a=3
	
	2. 3<=3 true so 1
	3. print 3
	4. a++;a=4
	
	2. 4<=3 false so 0 (Out of loop)
	*/
	return 0;
}

/*
   Initialisation : a=1
   Condition : a<=10
   Increment :a++
   
   What is the meaning of a++ ?
   The value will be incremented by 1.
   let suppose prev. value of a = 5
   then a++
   now a will be 6.
   
   for (1, 2, 4){
      3
    }
    
    Step 1: Initialization
    Step 2: Condition checking
    Step 3: If condition is true , statement will be executed.
    Step 4: Increment/Decrement
    Step 5: Go to step 2
    
    If step 2 returns 0(Condition false),
    then loop will be terminated.
*/
