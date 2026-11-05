#include "kbc.h"

void getQuestion(Question q[], int index)
{
    printf("%s\n", q[index].question);

    for (int i = 0; i < 4; i++)
    {
        printf("%c. %s\n",
               'A' + i,
               q[index].options[i]);
    }
}