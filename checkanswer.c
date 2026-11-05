#include "kbc.h"

int checkAnswer(Question q[], int index, char answer)
{
    answer = toupper(answer);

    if (answer == q[index].answer)
        return 1;

    return 0;
}