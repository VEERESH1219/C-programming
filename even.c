/*step 1 : start
step 2 : print "Upto which numbers you want to print even numbers? "
step 3 : read Num
step 4 : Counter = 0
step 5 : print "The even numbers upto " + Num + " are " + Counter
step 6 : if Counter < Num 
            print ", " + Counter
            Counter = Counter + 2
            goto step 6
step 7 : print Counter + ".\n "
Step 8 : stop*/

#include <stdio.h>

int main()
{
	
	int Num, Counter = 0;

	printf("Upto which number do you want to print even numbers? ");
    scanf("%i", &Num);
    printf("The even numbers up to %i are: ", Num);

    while (Counter < Num) 
    {
            printf("%i", Counter);

         if (Counter + 2 < Num)
         {
         	printf(", ");
         }
            Counter = Counter + 2;   
    }

    

    	printf(".\n");
    

    return 0;
}
