#include <stdio.h>
#include <string.h>

// ================================================
// DEBUG EXERCISES
// Each function has exactly ONE bug.
// The comment tells you what it should do.
// Your job: find the bug and fix it.
// ================================================


// -----------------------------------------------
// EXERCISE 1 - Easy
// Should print the numbers 1 to 5.
// -----------------------------------------------
// void exercise_1() {
//     for (int i = 1; i <=5; i++) {
//         printf("%d\n", i);
//     }
// }
//     int main(){
//         exercise_1();
//         return 0;
//     }

        // -----------------------------------------------
        // EXERCISE 2 - Easy
        // Should print the total of 10 + 20, which is 30.
        // -----------------------------------------------
        // void exercise_2() {
        //     int a = 10;
        //     int b = 20;
        //     int total = a + b;
        //     printf("Total: %d\n", total);
        // }
        // int main(){
        //     exercise_2();
        //     return 0;
        // }

            // -----------------------------------------------
            // EXERCISE 3 - Easy
            // Should print the price 49.99
            // -----------------------------------------------
            // void exercise_3() {
            //     double price = 49.99;
            //     printf("Price: %.2lf\n", price);
            // }

            // int main(){
            //     exercise_3();
            //     return 0;
            // }

                // -----------------------------------------------
                // EXERCISE 4 - Medium
                // Should print the last item in the array, which is 50.
                // // -----------------------------------------------
                // void exercise_4() {
                //     int numbers[5] = {10, 20, 30, 40, 50};
                //     printf("Last item: %d\n", numbers[4]);
                // }

                // int main(){
                //     exercise_4();
                //     return 0;
                // }

                    // // -----------------------------------------------
                    // // EXERCISE 5 - Medium
                    // // Should print "Access granted" when code is 1234.
                    // // -----------------------------------------------
                    // void exercise_5() {
                    //     int code = 1234;
                    //     printf("Enter your Code\n");
                    //     scanf("%d",&code);
                    //     if (code == 1234){
                    //         printf("Access granted\n");
                    //     }
                    //     else
                    //     {
                    //         printf("Wrong code\n");
                    //     }
                    // }


                    // int main(){
                    //     exercise_5();
                    //     return 0;
                    // }

                        // -----------------------------------------------
                        // EXERCISE 6 - Medium
                        // Should print "Correct password!" when the user types Dragon.
                        // It never prints it, even when the password is right.
                        // -----------------------------------------------
                        void exercise_6() {
                            char input[50];
                            char password[] = "Dragon";

                            printf("Enter password: ");
                            scanf("%s", input);

                            if(strcmp(input,password ) == 0){
                            printf("Correct password!\n");
                            } else {
                                printf("Wrong password\n");
                            }
                        }

                        int main(){
                            exercise_6();
                            return 0;
                        }

                            // -----------------------------------------------
                            // EXERCISE 7 - Hard
                            // Should give a 10% discount by changing the price through a pointer.
                            // The price stays the same after the function runs.
                            // -----------------------------------------------
                            // void apply_discount(int *p) {
                            //     *p = *p * 0.9;
                            // }

                            // void exercise_7() {
                            //     int price = 200;
                            //     apply_discount(&price);
                            //     printf("Price after discount: %d\n", price);
                            // }

                            // int main(){
                            //     int price;
                            //     exercise_7();
                            //     apply_discount(&price);
                            //     return 0;
                            // }

                                // // // -----------------------------------------------
                                // // // EXERCISE 8 - Hard
                                // // // A struct that stores a name and a score.
                                // // // The function should update the score to 100.
                                // // // The score stays at 0 after the function runs.
                                // // // -----------------------------------------------
                                // typedef struct {
                                //     char name[50];
                                //     int score;
                                // } Player;

                                // void set_score(Player *p) {
                                //     p->score = 100;
                                // }

                                // void exercise_8() {
                                //     Player p1;
                                //     strcpy(p1.name, "Ali");
                                //     p1.score = 0;

                                //     set_score(&p1);
                                //     printf("Score: %d\n", p1.score);
                                // }

                                // int main(){
                                //     exercise_8();
                                //     return 0;
                                // }

                                    // // -----------------------------------------------
                                    // // Run them one at a time.
                                    // // Comment out the ones you haven't reached yet.
                                    // // -----------------------------------------------
                                    // int main() {
                                    //     exercise_1();
                                    //     // exercise_2();
                                    //     // exercise_3();
                                    //     // exercise_4();
                                    //     // exercise_5();
                                    //     // exercise_6();
                                    //     // exercise_7();
                                    //     // exercise_8();
                                    //     return 0;
                                    // }
