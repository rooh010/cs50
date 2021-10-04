#include <cs50.h>
#include <stdio.h>

// prototypes
int getHeight(void);
int getSpaces(int iteration, int height);
int getHashes(int hash);

// variables
int height;
int spaces;
int hashes;

// main program method
int main(void)
{
    height = getHeight();
    printf("\n");

    for (int i = 0; i < height; i++)
    {
        spaces = getSpaces(i, height);
        hashes = getHashes(i + 1);

        for (int spaceCounter = 0; spaceCounter < spaces; spaceCounter++)
        {
            printf(" ");
        }

        for (int hashCounter = 0; hashCounter < hashes; hashCounter++)
        {
            printf("#");
        }

        printf("  ");

        for (int hashCounter2 = 0; hashCounter2 < hashes; hashCounter2++)
        {
            printf("#");
        }

        printf("\n");
    }

}


// gets the height between 1 and 8
int getHeight(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

// works out number of spaces needed using hight minus the interation number
int getSpaces(int i,int h)
{
    int d;
    d = (h - i) - 1;
    return d;
}

// works out number of hashes needed
int getHashes(int ha)
{
    int h;
    h = ha++;
    return h;
}
