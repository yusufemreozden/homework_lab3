/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Quadrant                                                                 */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    double x, y;

    printf("Enter the x coordinate of the point: ");
    scanf("%lf",&x);
    
    printf("Enter the y coordinate of the point: ");
    scanf("%lf",&y);

    if(x<0 && y<0)
        printf("The quadrant of this point is 3.\n");
    else if(x<0 && y>0)
        printf("The quadrant of this point is 2.\n");
    else if(x>0 && y<0)
        printf("The quadrant of this point is 4.\n");
    else if(x>0 && y>0)
        printf("The quadrant of this point is 1.\n");   

    return 0; 
}
