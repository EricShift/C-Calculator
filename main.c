#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
int main()
{
    int Num1, Num2;
    int OP;
    int var1, var2, vaR2, var3, var4, ANS, ANS2;
    printf("Hello world!\n");
    Sleep(10000);
    printf("This is a four operator calculator \n");
    printf("________________________________________________________________________\n");
    printf("\n");
    printf("Please choose two numbers you'd like to calculate!\n:");
    scanf(" %d",&Num1);
    printf("Please enter the second number \n:");
    scanf(" %d",&Num2);
    var1 = Num1 + Num2;
    var2 = Num1 / Num2;
    vaR2 = Num1 % Num2;
    var3 = Num1 - Num2;
    var4 = Num1 * Num2;
    printf("Please choose the operator you'd like to use by choosing one of the given options(1-4)!\n");
    printf("\n");
    printf("1. +\n");
    printf("2. /\n");
    printf("3. -\n");
    printf("4. *\n");
    printf("\n:");
    scanf(" %d",&OP);
    while(1){
        if( OP <= 4){
            printf("\n");
            break;
        }else{
    printf("\n");
    printf("The answer you have entered is not within the given range!!");
    printf("Please choose the operator you'd like to use by choosing one of the given options(1-4)!\n");
    printf("\n:");
    scanf(" %d",&OP);
        }
    }
    printf("You chose %d and %d as your numbers and %d as you operator\n",Num1, Num2, OP);
    printf("Are these number correct? If yes type Y if no N\n:");
    printf("1.Yes\n");
    printf("2.No\n");
    scanf(" %d",&ANS);
    while(1){
    if ( ANS == 1 ){
     printf("...\n");
     break;
    }else{
    printf("________________________________________________________________________\n");
    printf("\n");
    printf("Please choose two numbers you'd like to calculate!\n:");
    scanf(" %d",&Num1);
    printf("Please enter the second number \n:");
    scanf(" %d",&Num2);
    var1 = Num1 + Num2;
    var2 = Num1 / Num2;
    vaR2 = Num1 % Num2;
    var3 = Num1 - Num2;
    var4 = Num1 * Num2;
    printf("Please choose the operator you'd like to use by choosing one of the given options(1-4)!\n");
    printf("\n");
    printf("1. +\n");
    printf("2. /\n");
    printf("3. -\n");
    printf("4. *\n");
    printf("\n:");
    scanf(" %d",&OP);
    printf("\n");
    printf("You chose %d and %d as your numbers and %d as you operator\n",Num1, Num2, OP);
    printf("Are these number correct? If yes type 1 if No 2\n:");
    printf("1.Yes\n");
    printf("2.No\n");
    scanf(" %d",&ANS);
    }

    }
    printf("__________________________________________________________________________\n:");
    printf("Calculating...\n");
    printf("\n");
    if( OP == 1 ){
        printf("Your answer is\n:");
        printf("%d",var1);
    }
    else if( OP == 2 ){
        printf("Your answer is\n:");
        printf("%d.%d",var2,vaR2);
    }
    else if( OP == 3 ){
        printf("Your answer is\n:");
        printf("%d",var3);
    }
    else if( OP == 4 ){
        printf("Your answer is\n:");
        printf("%d",var4);
    }
    else{
        printf(" Enter a number within a given range!!!");
    }
    printf("\n");
    printf("Would you like to do another calculation?\n");
    printf("1.Yes\n");
    printf("2.No\n:");
    scanf(" %d",&ANS2);
while(1){
    if( ANS2 == 1 ){
    printf("\n");
        printf("________________________________________________________________________\n");
    printf("\n");
    printf("Please choose two numbers you'd like to calculate!\n:");
    scanf(" %d",&Num1);
    printf("Please enter the second number \n:");
    scanf(" %d",&Num2);
    var1 = Num1 + Num2;
    var2 = Num1 / Num2;
    vaR2 = Num1 % Num2;
    var3 = Num1 - Num2;
    var4 = Num1 * Num2;
    printf("Please choose the operator you'd like to use by choosing one of the given options(1-4)!\n");
    printf("\n");
    printf("1. +\n");
    printf("2. /\n");
    printf("3. -\n");
    printf("4. *\n");
    printf("\n:");
    scanf(" %d",&OP);
    while(1){
        if( OP <= 4){
            printf("\n");
            break;
        }else{
    printf("\n");
    printf("The answer you have entered is not within the given range!!");
    printf("Please choose the operator you'd like to use by choosing one of the given options(1-4)!\n");
    printf("\n:");
    scanf(" %d",&OP);
        }
    }
    printf("You chose %d and %d as your numbers and %d as you operator\n",Num1, Num2, OP);
    printf("Are these number correct? If yes type Y if no N\n:");
    printf("1.Yes\n");
    printf("2.No\n");
    scanf(" %d",&ANS);
    while(1){
    if ( ANS == 1 ){
     printf("...\n");
     break;
    }else{
    printf("________________________________________________________________________\n");
    printf("\n");
    printf("Please choose two numbers you'd like to calculate!\n:");
    scanf(" %d",&Num1);
    printf("Please enter the second number \n:");
    scanf(" %d",&Num2);
    var1 = Num1 + Num2;
    var2 = Num1 / Num2;
    vaR2 = Num1 % Num2;
    var3 = Num1 - Num2;
    var4 = Num1 * Num2;
    printf("Please choose the operator you'd like to use by choosing one of the given options(1-4)!\n");
    printf("\n");
    printf("1. +\n");
    printf("2. /\n");
    printf("3. -\n");
    printf("4. *\n");
    printf("\n:");
    scanf(" %d",&OP);
    printf("\n");
    printf("You chose %d and %d as your numbers and %d as you operator\n",Num1, Num2, OP);
    printf("Are these number correct? If yes type 1 if No 2\n:");
    printf("1.Yes\n");
    printf("2.No\n");
    scanf(" %d",&ANS);
    }

    }
    printf("__________________________________________________________________________\n:");
    printf("Calculating...\n");
    printf("\n");
    if( OP == 1 ){
        printf("Your answer is\n:");
        printf("%d",var1);
    }
    else if( OP == 2 ){
        printf("Your answer is\n:");
        printf("%d.%d",var2,vaR2);;
    }
    else if( OP == 3 ){
        printf("Your answer is\n:");
        printf("%d",var3);
    }
    else if( OP == 4 ){
        printf("Your answer is\n:");
        printf("%d",var4);
    }
    else{
        printf(" Enter a number within a given range!!!");
    }
    printf("\n");
    printf("Would you like to do another calculation?\n");
    printf("1.Yes\n");
    printf("2.No\n:");
    scanf(" %d",&ANS2);
    }else{
    printf("Thank You for using ERCAL!!!\n");
    printf("Exiting....\n");
    }
break;

}
    return 0;
}
