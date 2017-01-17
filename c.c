#include<stdio.h>

int main (void)
{
    int i,j;

    j = 9; 
    
    for(i = 0; i < 10; i++)
    {
        j++;
    }

    printf("j = %d\n", j);

    return 0;
}
