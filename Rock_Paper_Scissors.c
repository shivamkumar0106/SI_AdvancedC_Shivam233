#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int user = -1, comp;
    int userScore = 0, compScore = 0, draws = 0;

    srand(time(0));

    while (user != 0) {

        printf("\n===== ROCK PAPER SCISSORS =====\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &user);

        while (user < 0 || user > 3) {
            printf("Invalid choice! Enter again: ");
            scanf("%d", &user);
        }

        if (user == 0) {
            printf("\n===== FINAL SCORE =====\n");
            printf("You: %d\n", userScore);
            printf("Computer: %d\n", compScore);
            printf("Draws: %d\n", draws);

            if (userScore > compScore)
                printf("Overall Winner: You!\n");
            else if (compScore > userScore)
                printf("Overall Winner: Computer!\n");
            else
                printf("Overall Result: Tie!\n");

            printf("\nThanks for playing!\n");
            break;
        }

        comp = rand() % 3 + 1;

        printf("\nYou chose: ");
        if (user == 1)
            printf("Rock");
        else if (user == 2)
            printf("Paper");
        else
            printf("Scissors");

        printf("\nComputer chose: ");
        if (comp == 1)
            printf("Rock");
        else if (comp == 2)
            printf("Paper");
        else
            printf("Scissors");

        printf("\n");

        if (user == comp) {
            printf("Result: Draw!\n");
            draws++;
        }
        else if ((user == 1 && comp == 3) ||
                 (user == 2 && comp == 1) ||
                 (user == 3 && comp == 2)) {
            printf("Result: You Win!\n");
            userScore++;
        }
        else {
            printf("Result: Computer Wins!\n");
            compScore++;
        }

        printf("\nCurrent Score\n");
        printf("You: %d | Computer: %d | Draws: %d\n",
               userScore, compScore, draws);
    }

    return 0;
}
