/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Simple Statistics                                                        */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int n1, n2, n3, min, max;
    double avarage;
    
    printf("Please enter the first number: ");
    scanf("%d",&n1);

    printf("Please enter the second number: ");
    scanf("%d",&n2);

    printf("Please enter the third number: ");
    scanf("%d",&n3);

    avarage = (n1 + n2 + n3) / 3;

    if(n1<n2 && n1<n3)
        min = n1;
    else if(n2<n1 && n2<n3)
        min = n2;
    else if(n3<n2 && n3<n1)
        min = n3;
    
    if(n1>n2 && n1>n3)
        max = n1;
    else if(n2>n1 && n2>n3)
        max = n2;
    else if(n3>n1 && n3>n2)
        max = n3;

    printf("\nMinimum: %d\n",min);
    printf("Maximum: %d\n",max);
    printf("Avarage: %lf\n",avarage);
}

//made by Yusuf Emre OZDEN