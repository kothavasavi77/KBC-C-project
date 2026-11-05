#include "kbc.h"

void showScores(void)
{
    FILE *fp = fopen("scores.txt", "r");

    char name[50];
    int correct, winnings;

    if (fp == NULL)
    {
        printf("No previous scores");
        return;
    }

    while (fscanf(fp, " %49[^|]|%d|%d",
                  name, &correct, &winnings) == 3)
    {
        printf("%s - %d - Rs.%d\n",
               name, correct, winnings);
    }

    fclose(fp);
}