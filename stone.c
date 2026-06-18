#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int user, computer;
    srand(time(0));
    computer = rand() % 3 + 1;
    printf("Stone Paper Scissors Game\n");
    printf("1. Stone\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &user);
    printf("Computer chose: %d\n", computer);
    if (user == computer) {
        printf("It's a Draw!\n"); }
    else if ((user == 1 && computer == 3) ||
             (user == 2 && computer == 1) ||
             (user == 3 && computer == 2)) {
        printf("You Win!\n");}
    else {printf("Computer Wins!\n");}
return 0;
}