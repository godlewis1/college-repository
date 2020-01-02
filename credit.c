#include <cs50.h>
#include <stdio.h>
int main(void)
{
    //ask for credit card number and break into smaller digits 
    long number= get_long("What is your credit card number?\n");
    int number1=(number/1000000000000000)%10;
    int number2=(number/100000000000000)%10;
    int number3=(number/10000000000000)%10;
    int number4=(number/1000000000000)%10;
    int number5=(number/100000000000)%10;
    int number6=(number/10000000000)%10;
    int number7=(number/1000000000)%10;
    int number8=(number/100000000)%10;
    int number9=(number/10000000)%10;
    int number10=(number/1000000)%10;
    int number11=(number/100000)%10;
    int number12=(number/10000)%10;
    int number13=(number/1000)%10;
    int number14=(number/100)%10;
    int number15=(number/10)%10;
    int number16=number%10;
//credit cards 
    // if number begins with 34 or 37
    if ((number>339999999999999 && number<350000000000000) || (number>369999999999999 && number<380000000000000))
    {
    if (number1*2>9)
    {
        int numberdouble=(number1/5)%10;
        int numberdouble2=(number1*2%10);
        number1= numberdouble+numberdouble2;     
    }
    else
    {
        number1=number1*2;
    }
           
    if (number3*2>9)
    {
        int numberdouble=(number3/5)%10;
        int numberdouble2=(number3*2%10);
        number3= numberdouble+numberdouble2;     
    }
    else
    {
        number3=number3*2;
    }
    if (number5*2>9)
    {
        int numberdouble=(number5/5)%10;
        int numberdouble2=(number5*2%10);
        number5= numberdouble+numberdouble2;     
    }
    else
    {
        number5=number5*2;
    }  
    if (number7*2>9)
    {
        int numberdouble=(number7/5)%10;
        int numberdouble2=(number7*2%10);
        number7= numberdouble+numberdouble2;     
    }
    else
    {
        number7=number7*2;
    }
    if (number9*2>9)
    {
        int numberdouble=(number9/5)%10;
        int numberdouble2=(number9*2%10);
        number9= numberdouble+numberdouble2;     
    }
    else
    {
        number9=number9*2;
    }
    if (number11*2>9)
    {
        int numberdouble=(number11/5)%10;
        int numberdouble2=(number11*2%10);
        number11= numberdouble+numberdouble2;     
    }
    else
    {
        number11=number11*2;
    }   
    if (number13*2>9)
    {
        int numberdouble=(number13/5)%10;
        int numberdouble2=(number13*2%10);
        number13= numberdouble+numberdouble2;     
    }
    else
    {
        number13=number13*2;
    }
    if (number15*2>9)
    {
        int numberdouble=(number15/5)%10;
        int numberdouble2=(number15*2%10);
        number15= numberdouble+numberdouble2;     
    }
    else
    {
        number15=number15*2;
    }
    if((number2+number4+number6+number8+number10+number12+number14+number1+number3+number5+number7+number9+number11+number13+number15+number16)%10==0)
    {
        printf("AMEX\n");
    }
        else
        {
            printf("INVALID\n");
        }
    }
else if(number>5099999999999999&&number<5600000000000000)
{
    if (number1*2>9)
    {
        int numberdouble=(number1/5)%10;
        int numberdouble2=(number1*2%10);
        number1= numberdouble+numberdouble2;     
    }
    else
    {
        number1=number1*2;
    }
           
    if (number3*2>9)
    {
        int numberdouble=(number3/5)%10;
        int numberdouble2=(number3*2%10);
        number3= numberdouble+numberdouble2;     
    }
    else
    {
        number3=number3*2;
    }
    if (number5*2>9)
    {
        int numberdouble=(number5/5)%10;
        int numberdouble2=(number5*2%10);
        number5= numberdouble+numberdouble2;     
    }
    else
    {
        number5=number5*2;
    }  
    if (number7*2>9)
    {
        int numberdouble=(number7/5)%10;
        int numberdouble2=(number7*2%10);
        number7= numberdouble+numberdouble2;     
    }
    else
    {
        number7=number7*2;
    }
    if (number9*2>9)
    {
        int numberdouble=(number9/5)%10;
        int numberdouble2=(number9*2%10);
        number9= numberdouble+numberdouble2;     
    }
    else
    {
        number9=number9*2;
    }
    if (number11*2>9)
    {
        int numberdouble=(number11/5)%10;
        int numberdouble2=(number11*2%10);
        number11= numberdouble+numberdouble2;     
    }
    else
    {
        number11=number11*2;
    }   
    if (number13*2>9)
    {
        int numberdouble=(number13/5)%10;
        int numberdouble2=(number13*2%10);
        number13= numberdouble+numberdouble2;     
    }
    else
    {
        number13=number13*2;
    }
    if (number15*2>9)
    {
        int numberdouble=(number15/5)%10;
        int numberdouble2=(number15*2%10);
        number15= numberdouble+numberdouble2;     
    }
    else
    {
        number15=number15*2;
    }
if((number2+number4+number6+number8+number10+number12+number14+number1+number3+number5+number7+number9+number11+number13+number15+number16)%10==0)
    {
        printf("MASTERCARD\n");
    }
        else
        {
            printf("INVALID\n");
        }
    }
else if(number>3999999999999999&&number<5000000000000000)
{
    if (number1*2>9)
    {
        int numberdouble=(number1/5)%10;
        int numberdouble2=(number1*2%10);
        number1= numberdouble+numberdouble2;     
    }
    else
    {
        number1=number1*2;
    }
           
    if (number3*2>9)
    {
        int numberdouble=(number3/5)%10;
        int numberdouble2=(number3*2%10);
        number3= numberdouble+numberdouble2;     
    }
    else
    {
        number3=number3*2;
    }
    if (number5*2>9)
    {
        int numberdouble=(number5/5)%10;
        int numberdouble2=(number5*2%10);
        number5= numberdouble+numberdouble2;     
    }
    else
    {
        number5=number5*2;
    }  
    if (number7*2>9)
    {
        int numberdouble=(number7/5)%10;
        int numberdouble2=(number7*2%10);
        number7= numberdouble+numberdouble2;     
    }
    else
    {
        number7=number7*2;
    }
    if (number9*2>9)
    {
        int numberdouble=(number9/5)%10;
        int numberdouble2=(number9*2%10);
        number9= numberdouble+numberdouble2;     
    }
    else
    {
        number9=number9*2;
    }
    if (number11*2>9)
    {
        int numberdouble=(number11/5)%10;
        int numberdouble2=(number11*2%10);
        number11= numberdouble+numberdouble2;     
    }
    else
    {
        number11=number11*2;
    }   
    if (number13*2>9)
    {
        int numberdouble=(number13/5)%10;
        int numberdouble2=(number13*2%10);
        number13= numberdouble+numberdouble2;     
    }
    else
    {
        number13=number13*2;
    }
    if (number15*2>9)
    {
        int numberdouble=(number15/5)%10;
        int numberdouble2=(number15*2%10);
        number15= numberdouble+numberdouble2;     
    }
    else
    {
        number15=number15*2;
    }
if((number2+number4+number6+number8+number10+number12+number14+number1+number3+number5+number7+number9+number11+number13+number15+number16)%10==0)
    {
        printf("VISA\n");
    }
        else
        {
            printf("INVALID\n");
        }
    }
else if(number>3999999999999&&number<5000000000000)
{if (number1*2>9)
    {
        int numberdouble=(number1/5)%10;
        int numberdouble2=(number1*2%10);
        number1= numberdouble+numberdouble2;     
    }
    else
    {
        number1=number1*2;
    }
           
    if (number3*2>9)
    {
        int numberdouble=(number3/5)%10;
        int numberdouble2=(number3*2%10);
        number3= numberdouble+numberdouble2;     
    }
    else
    {
        number3=number3*2;
    }
    if (number5*2>9)
    {
        int numberdouble=(number5/5)%10;
        int numberdouble2=(number5*2%10);
        number5= numberdouble+numberdouble2;     
    }
    else
    {
        number5=number5*2;
    }  
    if (number7*2>9)
    {
        int numberdouble=(number7/5)%10;
        int numberdouble2=(number7*2%10);
        number7= numberdouble+numberdouble2;     
    }
    else
    {
        number7=number7*2;
    }
    if (number9*2>9)
    {
        int numberdouble=(number9/5)%10;
        int numberdouble2=(number9*2%10);
        number9= numberdouble+numberdouble2;     
    }
    else
    {
        number9=number9*2;
    }
    if (number11*2>9)
    {
        int numberdouble=(number11/5)%10;
        int numberdouble2=(number11*2%10);
        number11= numberdouble+numberdouble2;     
    }
    else
    {
        number11=number11*2;
    }   
    if (number13*2>9)
    {
        int numberdouble=(number13/5)%10;
        int numberdouble2=(number13*2%10);
        number13= numberdouble+numberdouble2;     
    }
    else
    {
        number13=number13*2;
    }
    if (number15*2>9)
    {
        int numberdouble=(number15/5)%10;
        int numberdouble2=(number15*2%10);
        number15= numberdouble+numberdouble2;     
    }
    else
    {
        number15=number15*2;
    }
if((number2+number4+number6+number8+number10+number12+number14+number1+number3+number5+number7+number9+number11+number13+number15+number16)%10==0)
    {
        printf("VISA\n");
    }
        else
        {
            printf("INVALID\n");
        }
    }
else
{
    printf("INVALID\n");
}
}
    
