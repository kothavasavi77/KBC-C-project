#include "kbc.h"

void saveScore(char name[], int correct, int winnings)
{
    FILE *fp = fopen("scores.txt", "a");

    if (fp == NULL)
    {
        printf("Unable to save score");
        return;
    }

    fprintf(fp, "%s|%d|%d\n",
            name, correct, winnings);

    fclose(fp);
}