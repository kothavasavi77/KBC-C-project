#include "kbc.h"

int loadQuestions(Question q[])
{
    FILE *fp = fopen("questions.txt", "r");

    if (fp == NULL)
        return 0;

    int count = 0;

    while (count < MAX_QUESTIONS &&
           fscanf(fp,
           " %299[^|]|%149[^|]|%149[^|]|%149[^|]|%149[^|]| %c|%d",
           q[count].question,
           q[count].options[0],
           q[count].options[1],
           q[count].options[2],
           q[count].options[3],
           &q[count].answer,
           &q[count].prize) == 7)
    {
        q[count].answer = toupper(q[count].answer);
        count++;
    }

    fclose(fp);

    return count;
}