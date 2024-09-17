#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    for (int row = 0; row < height; row++)
    {
        for(int j = 0; j < height; j++)
        {
            if (height - (row + 1) > j)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("  ");
        for (int k = 0; k <= row; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}