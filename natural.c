/*
step-1 : start
step-2 : print "Upto which numbers you want to print natural numbers? "
step-3 : read Num
step-4 : print "The natural numbers upto " + Num + " are " + Counter
step-5 : Counter = 1
step-6 : if Counter < Num
            print ", " + Counter
            Counter = Counter + 1
            goto step 6
step-8 : print Num + ".\n "
Step-9 : stop
*/

#include <stdio.h>

int main()
{
	
	int Num, Counter = 1;

	printf("Upto which number do you want to print natural numbers? ");
    scanf("%i", &Num);
    printf("The natural numbers up to %i are: ", Num);

    while (Counter <= Num) 
    {
            printf("%i", Counter);

         if (Counter < Num)
         {
         	printf(", ");
         }
            Counter = Counter + 1;   
    }

    

    	printf(".\n");
    

    return 0;
}