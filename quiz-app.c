#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int points = 0;
int guess;
char questions[][100] = {
    "What does HTML stand for?",
    "Which programming language is NOT OOP?",
    "Which is the oldest one?"
    };
char options[][4][100] = {
    {"1) Home Tool Markup Language",
     "2) Hyperlinks and Text Markup Language",
     "3) Hyper Text Markup Language",
     "4) Happy Text Market Languages"},
    {"1) Javascript",
     "2) C",
     "3) Java",
     "4) C#"},
    {"1) Java",
     "2) C#",
     "3) C",
     "4) Assembly"}
    };
int answers[] = {3, 2, 4};

int main()
{

    printf("\nWELCOME TO MY QUIZ APP!\n\n");

    for (int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++)
    {
        int invalidInput = 0;
        printf("***********************\n");
        printf("\e[0;33m%s\e[0m\n\n", questions[i]);
        for (int j = 0; j <= 3; j++)
        {
            printf("%s\n", options[i][j]);
        }
        printf("\n***********************\n");
        scanf(" %d", &guess);

        while (guess < 1 || guess > 4)
        {
            printf("Invalid option! Only 1-4! Try again\n");
            scanf(" %d", &guess);
        }

        if (guess == answers[i])
        {
            printf("\n\e[0;32mCORRECT ANSWER!\e[0m\n");
            points++;
            invalidInput = 0;
            Sleep(1000);
            system("cls");
        }
        else
        {
            printf("\n\e[0;31mWRONG ANSWER!\e[0m\n");
            invalidInput = 0;
            Sleep(1000);
            system("cls");
        }
    }

    printf("\n************************************\n");

    if (points == 1)
    {
        printf("Finish! %d correct answer from %d!", points, sizeof(questions) / sizeof(questions[0]));
    }
    else if (points > 1)
    {
        printf("Finish! %d correct answers from %d!", points, sizeof(questions) / sizeof(questions[0]));
    }
    else if (points == 0)
    {
        printf("0 Correct answers from %d", sizeof(questions) / sizeof(questions[0]));
    }

    printf("\n************************************\n");

    return 0;
}