#include <stdio.h>
 
int main()
{
    float celsius, fahrenheit=0;
 
    printf("Please Enter temperature in Celsius: \n");
    scanf("%f", &celsius);
     fahrenheit = ((celsius * 9)/5) + 32;

 
    printf("\n %celsius = %fahrenheit", celsius,fahrenheit);
 
    return 0;
}
