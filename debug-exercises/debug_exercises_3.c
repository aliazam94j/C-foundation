#include <stdio.h>
#include <string.h>

// ================================================
// DEBUG EXERCISES - SET 3
// Each function has exactly ONE bug.
// The comment tells you what it should do.
// Uncomment one exercise at a time in main.
// Answers are in debug_exercises_3_answers.c
// ================================================


// -----------------------------------------------
// EXERCISE 1 - Easy
// Should count how many numbers are in the array.
// Array has 5 numbers. Answer should be 5.
// -----------------------------------------------
// void exercise_1() {
//     int nums[5] = {3, 7, 1, 9, 4};
//     int count = 0;
//     for (int i = 0; i<=4; i++) {
//         count++;
//     }
//     printf("Count: %d\n", count);
// }

// int main(){
//     exercise_1();
//     return 0;
// }

    // -----------------------------------------------
    // EXERCISE 2 - Easy
    // Should print "Negative" when the number is below 0.
    // num is -5, so it should print "Negative".
    // -----------------------------------------------
    // void exercise_2() {
    //     int num = -5;
    //     if (num < 0) {
    //         printf("Negative\n");
    //     } else {
    //         printf("Positive or zero\n");
    //     }
    // }

    // int main(){
    //     exercise_2();
    //     return 0;
    // }

        // -----------------------------------------------
        // EXERCISE 3 - Easy
        // Should print: Name: Ali, Age: 25
        // -----------------------------------------------
        // void exercise_3() {
        //     char name[] = "Ali";
        //     int age = 25;
        //     printf("Name: %s, Age: %d\n", name, age);

        // }
        // int main(){
        //     exercise_3();
        //     return 0;
        // }

            // -----------------------------------------------
            // EXERCISE 4 - Medium
            // Should add up all 5 numbers: 10+20+30+40+50 = 150
            // -----------------------------------------------
            // void exercise_4() {
            //     int nums[5] = {10, 20, 30, 40, 50};
            //     int total = 0;
            //     for (int i = 0; i < 5; i++) {
            //         total += nums[i];
            //     }
            //     printf("Total: %d\n", total);
            // }

            // int main(){
            //     exercise_4();
            //     return 0;
            // }
                // -----------------------------------------------
                // EXERCISE 5 - Medium
                // Should print "Valid" only if the number is between 1 and 10.
                // num is 5, so it should print "Valid".
                // num is 50, so it should print "Invalid".
                // -----------------------------------------------
                // void exercise_5() {
                //     int num = 4;
                //     if (num == 1 || num <= 10) {
                //         printf("Valid\n");
                //     } else {
                //         printf("Invalid\n");
                //     }
                // }


                // int main(){
                //     exercise_5();
                //     return 0;
                // }

                    // -----------------------------------------------
                    // EXERCISE 6 - Medium
                    // Should copy src into dest.
                    // Should print: Dest: Hello
                    // -----------------------------------------------
                    // void exercise_6() {
                    //     char src[10] = "Hello";
                    //     char dest[50] = "";
                    //     strcpy(dest,src);
                    //     printf("Dest: %s\n", dest);
                    // }
                    
                    // int main(){
                    //     exercise_6();
                    //     return 0;
                    // }
                        // -----------------------------------------------
                        // EXERCISE 7 - Hard
                        // Should print the array in reverse order: 5 4 3 2 1
                        // -----------------------------------------------
                        // void exercise_7() {
                        //     int nums[5] = {1, 2, 3, 4, 5};
                        //     int *p = &nums[4];
                        //     for (int i = 0; i < 5; i++) {
                        //         printf("%d ", *p);
                        //         p--;
                        //     }
                        //     printf("\n");
                        // }
                        // int main(){
                        //     exercise_7();
                        //     return 0;
                        // }
                            // -----------------------------------------------
                            // EXERCISE 8 - Hard
                            // A struct with name and 3 scores.
                            // Should print the total score for each player.
                            // Player 1: 10+20+30 = 60
                            // Player 2: 5+15+25  = 45
                            // -----------------------------------------------
                            typedef struct {
                                char name[50];
                                int scores[3];
                            } Player;
                            void print_totals(Player *arr, int size) {
                                for (int i = 0; i < size; i++) {
                                    int total = 0;
                                    for (int j = 0; j < 3; j++) {
                                        total += arr[i].scores[j];
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


                            int main(){
                                exercise_8();
                                return 0;
                            }

                                // int main()
                                // {
                                //     // exercise_1();
                                //     // exercise_2();
                                //     // exercise_3();
                                //     // exercise_4();
                                //     // exercise_5();
                                //     // exercise_6();
                                //     // exercise_7();
                                //     // exercise_8();
                                //     return 0;
                                // }
