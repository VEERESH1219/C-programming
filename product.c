/*step-1 : start
step-2 : print "To multiply three numbers."
step-3 : print "Enter the first number: "
step-4 : read Num1
step-5 : print "Enter the second number: "
step-6 : read Num2
step-7 : print "Enter the third number: "
step-8 : read Num3
step-9 : Product = Num1 * Num2 * Num3
step-10 : print "The product of " + Num1 + ", " + Num2 + " and " + Num3 + " is " + Product + ".\n"
step-11 : stop*/

#include <stdio.h>

int main()
{
     int Num1, Num2, Num3, Product;

     printf("To multiply three numbers.\n");
     printf("Enter the first number: ");
     scanf("%i", &Num1);
     printf("Enter the second number: ");
     scanf("%i", &Num2);
     printf("Enter the third number: ");
     scanf("%i", &Num3);
     Product = Num1 * Num2 * Num3;
     printf("The sum of %i, %i and %i is %i.\n", Num1, Num2, Num3, Product);

     return 0;

}
