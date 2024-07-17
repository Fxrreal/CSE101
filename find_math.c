#include <stdio.h>
int main()
{
    //input
        float num1,num2;
        printf("Enter First Number:");
        scanf("%f",&num1);
        printf("Enter Second Number:");
        scanf("%f",&num2);
    //Addition
        printf("Sum:%2f+%2f=%2f\n",num1,num2,num1+num2);
    //Subtraction
         printf("Difference:%2f-%2f=%2f\n",num1,num2,num1-num2);
    //Multiplication
         printf("Product:%2f*%2f=%2f\n",num1,num2,num1*num2);
         //check if num2 is not zero for remainder calculation 
         if (num2!=0)
         {
            //Remainder
            printf("Remainder:%2f %% %2f=%2f\n",num1,num2,fmod(num1,num2));

         }
         else
         {
            printf("cannot calculate remainder because the second number is zero.\n");
         }

    return 0;
   
}