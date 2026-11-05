#ifndef KBC_H
#define KBC_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_QUESTIONS 50

typedef struct
{
    char question[300];
    char options[4][150];
    char answer;
    int prize;

} Question;

int loadQuestions(Question q[]);
void getQuestion(Question q[], int index);
int checkAnswer(Question q[], int index, char answer);
void saveScore(char name[], int correct, int winnings);
void showScores(void);

#endif