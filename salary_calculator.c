/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Salary Calculator                                                        */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int hour, salary;
    printf("Please enter the hours you worked: ");
    scanf("%d",&hour);

    if(hour<=40)
        salary = hour*10;
    else
        salary = (hour*10)+(hour-40)*5;
    
    printf("Your salary is %d.\n",salary);

    return 0;
}