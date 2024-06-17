#include <stdio.h>

int main()
{
    int h = 5;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < h - i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (int l = 0; l < h; l++)
    {
        for (int m = 1; m < h - l; m++)
        {
            printf(" ");
        }
        for (int n = 0; n <= l; n++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
