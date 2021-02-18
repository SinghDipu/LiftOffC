//3. Write a C program to count the total number of words in a string.
#include<stdio.h>
#include<string.h>
int main()
{   char s[500];
    int count=1;
    printf("Enter the Sentence\n");
    gets(s);
    for (int i = 0; i <= 500; i++)
    {
        if (s[i]==' ')
        {
            count++;
        }
        
    } 
    printf("There are %d words.",count);
    
    return 0;
}
