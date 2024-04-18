#include <stdio.h>

int shape(int height);

int main(void)
{
    int h = 5;

    shape(h);
}

int shape(int height)
{
    for (int i = 0; i < height; i++)
    {
        for(int j = 0 ; j < height - i ; j++){
            printf(" ");
        }
        
        for(int k = 0 ; k <=  i ; k ++){
            printf("*");
        }
        printf("\n");
    }
}