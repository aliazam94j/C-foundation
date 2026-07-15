// ================================================
// CALCULATOR PROGRAM - PROGRESS HISTORY
// Each version shows what was learned and improved.
// ================================================


// --- VERSION 1: First try - void function, prints inside ---
// No return value. The function did everything including printing.
// Can't reuse the result anywhere else.

// #include <stdio.h>
// void operator_choice(int num, int num1, char op){
//     if(op == '+'){
//         printf("your result is this = %d", num + num1);
//     }else if(op == '-'){
//         printf("your result is this = %d", num - num1);
//     }else if(op == '*'){
//         printf("your result is this = %d", num * num1);
//     }else{
//         printf("your result is this = %d", num / num1);
//     }
// }
// int main(){
//     int tal; int tal1; char opr;
//     printf("choose your nr\n");
//     scanf("%d %d", &tal, &tal1);
//     printf("choose your operator\n");
//     scanf(" %c", &opr);
//     operator_choice(tal, tal1, opr);
//     return 0;
// }


// --- VERSION 2: Learned to return the result ---
// Changed to int so the result comes back to main.
// Now main can do something with the result.

// #include <stdio.h>
// int operator_choice(int num1, int num2, char op){
//     if(op == '+'){
//         return num1 + num2;
//     }else if(op == '-'){
//         return num1 - num2;
//     }else if(op == '*'){
//         return num1 * num2;
//     }else{
//         return num1 / num2;
//     }
// }
// int main(){
//     int tal1; int tal2; int result; char opr;
//     printf("choose your nr\n");
//     scanf("%d %d", &tal1, &tal2);
//     printf("choose your operator\n");
//     scanf(" %c", &opr);
//     result = operator_choice(tal1, tal2, opr);
//     printf("your result is this = %d\n", result);
//     return 0;
// }


// --- VERSION 3: Added a while loop so it keeps running ---
// Wrapped everything in while(1) so you can calculate multiple times
// without restarting the program.

// #include <stdio.h>
// int calculator(int num1, int num2, char op){
//     if(op == '+') return num1 + num2;
//     else if(op == '-') return num1 - num2;
//     else if(op == '*') return num1 * num2;
//     else return num1 / num2;
// }
// int main(){
//     int tal1; int tal2; char opr; int result;
//     while(1){
//         printf("choose your nrs\n");
//         scanf("%d %d", &tal1, &tal2);
//         printf("choose your operator\n");
//         scanf(" %c", &opr);
//         result = calculator(tal1, tal2, opr);
//         printf("your new result is this %d\n", result);
//     }
//     return 0;
// }


// --- VERSION 4: Switched from if/else to switch ---
// Cleaner to read. Each operator gets its own case.
// Also added division by zero protection.
// Still used int — decimals got cut off.

// #include <stdio.h>
// int calculator_switch(int tal1, int tal2, char operator){
//     switch(operator){
//         case '+': return tal1 + tal2; break;
//         case '-': return tal1 - tal2; break;
//         case '*': return tal1 * tal2; break;
//         case '/':
//             if(tal2 == 0){
//                 printf("you cant divide by 0");
//                 return 0;
//             }else{
//                 return tal1 / tal2;
//             }
//     }
// }
// int main(){
//     int tal1; int tal2; char operator; int result;
//     printf("enter your first nr\n");
//     scanf("%d", &tal1);
//     printf("Enter your operator (+ - / *)\n");
//     scanf(" %c", &operator);
//     printf("enter your 2nd nr\n");
//     scanf("%d", &tal2);
//     result = calculator_switch(tal1, tal2, operator);
//     printf("your result : %d", result);
//     return 0;
// }


// --- VERSION 5: Switched to double so decimals work ---
// int cuts off decimals (7/2 = 3). double keeps them (7/2 = 3.50).
// This version gives correct results for all divisions.

// #include <stdio.h>
// double calculator_switch(double tal1, double tal2, char operator){
//     switch(operator){
//         case '+': return tal1 + tal2; break;
//         case '-': return tal1 - tal2; break;
//         case '*': return tal1 * tal2; break;
//         case '/':
//             if(tal2 == 0){
//                 printf("you cant divide by 0");
//                 return 0;
//             }else{
//                 return tal1 / tal2;
//             }
//     }
// }
// int main(){
//     double tal1; double tal2; char operator; double result;
//     printf("enter your first nr\n");
//     scanf("%lf", &tal1);
//     printf("Enter your operator (+ - / *)\n");
//     scanf(" %c", &operator);
//     printf("enter your 2nd nr\n");
//     scanf("%lf", &tal2);
//     result = calculator_switch(tal1, tal2, operator);
//     printf("your result : %.2lf", result);
//     return 0;
// }


// --- VERSION 6 (CURRENT): Added a function prototype ---
// Prototype at the top tells the compiler the function exists before main.
// Lets you put main first and function body below — cleaner to read.

#include <stdio.h>

// prototype — tells the compiler this function exists below main
double calculator(double num1, double num2, char op);

int main() {
    double num1;
    double num2;
    char op;
    double result;

    printf("enter your 1st nr\n");
    scanf("%lf", &num1);
    printf("enter your operator\n");
    scanf(" %c", &op);
    printf("enter your 2nd nr\n");
    scanf("%lf", &num2);

    result = calculator(num1, num2, op);
    printf("your result is this = %.2lf\n", result);
    return 0;
}

// handles the math — one case per operator
double calculator(double num1, double num2, char op) {
    switch(op) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/':
            if(num2 == 0) {
                printf("you cant divide with 0\n");
                return 0;
            }
            return num1 / num2;
    }
    return 0;
}
