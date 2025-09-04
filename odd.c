/*step 1 : start
step 2 : print "Upto which numbers you want to print odd numbers? "
step 3 : read Num
step 4 : Counter = 1
step 5 : print "The odd numbers upto " + Num + " are " + Counter
step 6 : if Counter <= Num 
       print ", " + Counter
       Counter = Counter + 2
       goto step 6
step 8 : print Counter + ".\n "
Step 9 : stop*/

#include <stdio.h>

int main()
{
	
	int Num, Counter = 1;

	printf("Upto which number do you want to print odd numbers? ");
    scanf("%i", &Num);
    printf("The odd numbers up to %i are: ", Num);

    while (Counter <= Num) 
    {
            printf("%i, ", Counter);
            Counter = Counter + 2;   
    }

    

    	printf("\b\b.\n");
    

    return 0;
}
