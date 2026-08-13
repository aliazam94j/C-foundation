#include <stdio.h>
#include <string.h>

// ================================================
// DEBUG EXERCISES - SET 3 - ANSWERS
// ================================================


// EXERCISE 1 - count starts at 1, should be 0
void exercise_1() {
    int nums[5] = {3, 7, 1, 9, 4};
    int count = 0;              // FIX: was 1
    for (int i = 0; i < 5; i++) {
        count++;
    }
    printf("Count: %d\n", count);
}


// EXERCISE 2 - wrong comparison, > should be <
void exercise_2() {
    int num = -5;
    if (num < 0) {              // FIX: was >
        printf("Negative\n");
    } else {
        printf("Positive or zero\n");
    }
}


// EXERCISE 3 - wrong format specifier, %s for age should be %d
void exercise_3() {
    char name[] = "Ali";
    int age = 25;
    printf("Name: %s, Age: %d\n", name, age);   // FIX: was %s for age
}


// EXERCISE 4 - loop starts at 1, misses first element, should start at 0
void exercise_4() {
    int nums[5] = {10, 20, 30, 40, 50};
    int total = 0;
    for (int i = 0; i < 5; i++) {              // FIX: was i = 1
        total += nums[i];
    }
    printf("Total: %d\n", total);
}


// EXERCISE 5 - || should be &&
// With ||: any number passes because every number is either >= 1 or <= 10
// With &&: both conditions must be true at the same time
void exercise_5() {
    int num = 50;
    if (num >= 1 && num <= 10) {               // FIX: was ||
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
}


// EXERCISE 6 - strcpy arguments are reversed
// strcpy(destination, source) -- dest comes first
void exercise_6() {
    char src[] = "Hello";
    char dest[50] = "";
    strcpy(dest, src);                         // FIX: was strcpy(src, dest)
    printf("Dest: %s\n", dest);
}


// EXERCISE 7 - pointer goes forward instead of backward
// Start at last element, must move left with p--
void exercise_7() {
    int nums[5] = {1, 2, 3, 4, 5};
    int *p = &nums[4];
    for (int i = 0; i < 5; i++) {
        printf("%d ", *p);
        p--;                                   // FIX: was p++
    }
    printf("\n");
}


// EXERCISE 8 - total = instead of total +=
// With =: only the last score is kept, previous ones are lost
// With +=: each score is added to the running total
typedef struct {
    char name[50];
    int scores[3];
} Player;
void print_totals(Player *arr, int size) {
    for (int i = 0; i < size; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++) {
            total += arr[i].scores[j];         // FIX: was =
        }
        printf("%s: %d\n", arr[i].name, total);
    }
}
void exercise_8() {
    Player players[2];
    strcpy(players[0].name, "Player 1");
    players[0].scores[0] = 10;
    players[0].scores[1] = 20;
    players[0].scores[2] = 30;
    strcpy(players[1].name, "Player 2");
    players[1].scores[0] = 5;
    players[1].scores[1] = 15;
    players[1].scores[2] = 25;
    print_totals(players, 2);
}


int main() {
    exercise_1();
    exercise_2();
    exercise_3();
    exercise_4();
    exercise_5();
    exercise_6();
    exercise_7();
    exercise_8();
    return 0;
}
