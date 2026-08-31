#include <stdio.h>
#include <string.h>

// ================================================
// DEBUG EXERCISES - SET 2
// Each function has exactly ONE bug.
// The comment tells you what it should do.
// Uncomment one exercise at a time in main.
// ================================================


// -----------------------------------------------
// EXERCISE 1 - Easy
// Should swap a and b.
// After the swap: a = 20, b = 10.
// // -----------------------------------------------
void exercise_1() {
    int a = 10;
    int b = 20;
    int temp = a;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a,b);
}

int main(){
    exercise_1();
    return 0;

}

    // -----------------------------------------------
    // EXERCISE 2 - Easy
    // Should count down from 10 to 1.
    // -----------------------------------------------
    // void exercise_2() {
    //     int i = 10;
    //     while (i> 0) {
    //         printf("%d\n", i);
    //         i--;
    //     }
    // }

    // int main(){
    //     exercise_2();
    //     return 0;
    // }

        // -----------------------------------------------
        // EXERCISE 3 - Easy
        // Should print the bigger of two numbers.
        // bigger(10, 20) should print 20.
        // -----------------------------------------------
    //     int bigger(int a, int b) {
    //         if (a > b) {
    //             return a;
    //         }else{
    //         return b;
    //     }
    // }
    //     void exercise_3() {
            
    //         printf("Bigger: %d\n", bigger(10, 20));
    //     }

    //     int main(){
    //         exercise_3();
    //         return 0;
    //     }
            // -----------------------------------------------
            // EXERCISE 4 - Medium
            // Should keep asking for a number until the user enters 0.
            // It stops immediately no matter what you type.
            // -----------------------------------------------
            // void exercise_4() {
            //     int num;
            //     do {
            //         printf("Enter a number (0 to stop): ");
            //         scanf("%d", &num);
            //         printf("You entered: %d\n", num);
            //     } while (num != 0);
            // }

            // int main(){
            //     exercise_4();
            //     return 0;
            // }

                // -----------------------------------------------
                // EXERCISE 5 - Medium
                // Should count how many numbers in the array are greater than 10.
                // The array has 6 numbers: {5, 15, 3, 20, 8, 12}
                // Answer should be 3 (15, 20, 12).
                // -----------------------------------------------
                // void exercise_5() {
                //     int nums[6] = {5, 15, 3, 20, 8, 12};
                //     int count = 0;
                //     int result = sizeof(nums) / sizeof(nums[0]);
                //     for (int i = 0; i < result; i++)
                //     {
                //         if (nums[i] > 10) {
                //             count++;
                            
                //         }
                //     }
                //         printf("Numbers greater than 10: %d\n", count);

                // }

                // int main(){
                //     exercise_5();
                // }

                    // -----------------------------------------------
                    // EXERCISE 6 - Medium
                    // Should print the total price of all items in the cart.
                    // Bread 25.00 + Milk 15.50 + Eggs 35.00 = 75.50
                    // -----------------------------------------------
                    // typedef struct {
                    //     char item[50];
                    //     double price;
                    // } Product;
                    // void exercise_6() {
                    //     Product cart[3];
                    //     strcpy(cart[0].item, "Bread"); cart[0].price = 25.0;
                    //     strcpy(cart[1].item, "Milk");  cart[1].price = 15.5;
                    //     strcpy(cart[2].item, "Eggs");  cart[2].price = 35.0;
                    //     double total = 0;
                    //     for (int i = 0; i < 3; i++) {
                    //         total += cart[i].price;
                    //     }
                    //     printf("Total: %.2f\n", total);
                    // }
                    // int main(){
                    //     Product shop[10];
                    //     exercise_6();
                    //     return 0;
                    // }
                        // -----------------------------------------------
                        // EXERCISE 7 - Hard
                        // Should add up all numbers in the array using a pointer.
                        // {1, 2, 3, 4, 5} should print Sum: 15
                        // -----------------------------------------------
                        // int sum_array(int *p, int size) {
                        //     int total = 0;
                            
                        //     for (int i = 0; i < size; i++) {

                        //         total += *(p + i);
                        //     }
                        //     return total;
                        // }
                        // void exercise_7() {
                        //     int nums[5] = {1, 2, 3, 4, 5};
                        //     // for (int i = 1; i <= 5; i ++){  
                        //         printf("Sum: %d\n", sum_array(nums,5));
                        // }
                        
                    

                        // int main(){
                        //     exercise_7();
                        //     return 0;
                        // }

                            // -----------------------------------------------
                            // EXERCISE 8 - Hard
                            // Should find and print the most expensive perfume.
                            // Perfume B at 599 is the most expensive.
                            // -----------------------------------------------
                            // typedef struct {
                            //     char name[50];
                            //     double price;
                            // } Perfume;
                            // Perfume most_expensive(Perfume *arr, int size) {
                            //     Perfume best = arr[0];
                            //     for (int i = 1; i < size; i++) {
                            //         if (arr[i].price > best.price) {
                            //             best = arr[i];
                            //         }
                            //     }
                            //     return best;
                            // }
                            // void exercise_8() {
                            //     Perfume shop[3];
                            //     strcpy(shop[0].name, "Perfume A"); shop[0].price = 299.0;
                            //     strcpy(shop[1].name, "Perfume B"); shop[1].price = 599.0;
                            //     strcpy(shop[2].name, "Perfume C"); shop[2].price = 149.0;
                            //     Perfume winner = most_expensive(shop, 3);
                            //     printf("Most expensive: %s (%.0f kr)\n", winner.name, winner.price);
                            // }

                            // int main(){
                            //     exercise_8();
                            //     return 0;
                            // }

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
