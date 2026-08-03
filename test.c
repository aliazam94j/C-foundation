// ================================================
// C VELOCITY TRAINING - GENERAL EXERCISES
// Organized by topic. Perfume -> Perfume velocity.c
// Calculator -> Calculator velocity.c
// ================================================


// ===== SECTION 1: LOOPS =====

// --- for loop: count up ---
// #include <stdio.h>
// int main(){
//     for(int i = 1; i <= 10; i++){
//         printf("counting up = %d\n", i);
//     }
//     return 0;
// }

// --- while loop: count down ---
// #include <stdio.h>
// int main(){
//     int num = 5;
//     while(num >= 0){
//         printf("counting down = %d\n", num);
//         num--;
//     }
//     return 0;
// }

// --- do-while: keep playing game ---
// #include <stdio.h>
// #include <stdbool.h>
// int main(){
//     bool isPlaying = true;
//     char response = '\0';
//     do{
//         printf("you are playing a game\n");
//         printf("would you like to keep playing? Y/N\n");
//         scanf(" %c", &response);
//         if(response != 'Y' && response != 'y'){
//             isPlaying = false;
//         }
//     } while(isPlaying);
//     printf("Goodbye see you next time");
// }


// ===== SECTION 2: ARRAYS =====

// --- find the biggest number in an array ---
// #include <stdio.h>
// #include <limits.h>
// int main(){
//     int scores[10];
//     int biggest = INT_MIN;
//     int biggest_index;
//     printf("type in your nrs\n");
//     for(int i = 0; i < 10; i++){
//         scanf("%d", &scores[i]);
//         if(scores[i] > biggest){
//             biggest = scores[i];
//             biggest_index = i;
//         }
//     }
//     for(int i = 0; i < 10; i++){
//         printf("printing box : %d => result = %d\n", i, scores[i]);
//     }
//     printf("the biggest box is this -> %d and the box nr is -> %d", biggest, biggest_index);
//     return 0;
// }

// --- print each box and its index ---
// #include <stdio.h>
// int main(){
//     int score[50];
//     printf("choose your nr\n");
//     for(int i = 0; i < 4; i++){
//         scanf("%d", &score[i]);
//         printf("your nr is this -> %d || your box is this %d\n", score[i], i);
//     }
//     for(int i = 0; i < 4; i++){
//         printf("This is the nr %d || this is the box %d\n", score[i], i);
//     }
//     return 0;
// }

// --- print a fixed array ---
// #include <stdio.h>
// int main(){
//     int nr[] = {200, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000};
//     int size = sizeof(nr) / sizeof(nr[0]);
//     for(int i = 0; i < size; i++){
//         printf("%d ", nr[i]);
//     }
//     return 0;
// }

// --- fill an array with user input, then print it ---
// #include <stdio.h>
// int main(){
//     int scores[10] = {0};
//     int size = sizeof(scores) / sizeof(scores[0]);
//     for(int i = 0; i < size; i++){
//         printf("Enter the score: ");
//         scanf("%d", &scores[i]);
//     }
//     for(int i = 0; i < size; i++){
//         printf("%d ", scores[i]);
//     }
//     return 0;
// }

// --- 2D array: print rows and columns of numbers ---
// #include <stdio.h>
// int main(){
//     int nrs[][3] = {{10, 30, 20},
//                     {50, 60, 70},
//                     {300, 500, 600},
//                     {1000, 2000, 3000}};
//     int rows = sizeof(nrs) / sizeof(nrs[0]);
//     int cols = sizeof(nrs[0]) / sizeof(nrs[0][0]);
//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             printf("%d ", nrs[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// --- 2D char array: print a numpad layout ---
// #include <stdio.h>
// int main(){
//     char numpad[][3] = {{'1','2','3'},
//                         {'4','5','6'},
//                         {'7','8','9'},
//                         {'*','0','#'}};
//     int rows = sizeof(numpad) / sizeof(numpad[0]);
//     int cols = sizeof(numpad[0]) / sizeof(numpad[0][0]);
//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             printf(" %c", numpad[i][j]);
//         }
//         printf("\n");
//     }
// }

// --- 2D string array: hardcoded drinks, swap first letter ---
// Learned: you can change individual characters in a 2D string array.
// #include <stdio.h>
// int main(){
//     char EnergiDrinks[][25] = {"NOCCO", "CELSIUS", "CLEANDRINK", "MONSTER", "REDBULL"};
//     int size = sizeof(EnergiDrinks) / sizeof(EnergiDrinks[0]);
//     EnergiDrinks[0][0] = 'O';  // change N to O
//     EnergiDrinks[0][4] = 'N';  // change O to N -> "OCCON"
//     for(int i = 0; i < size; i++){
//         printf("%s ", EnergiDrinks[i]);
//     }
//     return 0;
// }


// ===== SECTION 3: STRINGS =====

// --- compare two strings ---
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char blue[50];
//     char red[50];
//     printf("type in the names\n");
//     scanf("%s %s", blue, red);
//     printf("%d || %d\n", strlen(blue), strlen(red));
//     if(strcmp(blue, red) == 0){
//         printf("they are a match\n");
//     }else{
//         printf("they are not a match\n");
//     }
//     return 0;
// }

// --- validate name input (empty check) ---
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name[50];
//     printf("Enter your name\n");
//     fgets(name, sizeof(name), stdin);
//     name[strlen(name) - 1] = '\0';
//     if(strlen(name) == 0){
//         printf("you did not enter your name\n");
//     }else{
//         printf("hello %s", name);
//     }
// }

// --- validate name with while loop ---
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name[50] = "";
//     printf("enter your name: ");
//     fgets(name, sizeof(name), stdin);
//     name[strlen(name) - 1] = '\0';
//     while(strlen(name) == 0){
//         printf("you didnt enter your name, please enter again: ");
//         fgets(name, sizeof(name), stdin);
//         name[strlen(name) - 1] = '\0';
//     }
//     printf("hello %s", name);
// }


// ===== SECTION 4: POINTERS =====

// --- basic pointer: change a value through a pointer ---
// #include <stdio.h>
// int main(){
//     int num1 = 5;
//     int *ptr = &num1;
//     *ptr = 200;
//     printf("your new nr is this = %d", num1);
//     return 0;
// }

// --- function that adds 10 through a pointer ---
// #include <stdio.h>
// void get_new_number(int *ptr){
//     *ptr = *ptr + 10;
// }
// int main(){
//     int num = 5;
//     get_new_number(&num);
//     printf("your new nr is this %d\n", num);
//     return 0;
// }

// --- function that uses two pointers and returns a result ---
// #include <stdio.h>
// int get_new_number(int *ptr, int *num1){
//     return 10 + *num1 * *ptr;
// }
// int main(){
//     int tal1; int tal2; int result;
//     while(1){
//         printf("change your new nr\n");
//         scanf("%d %d", &tal1, &tal2);
//         result = get_new_number(&tal1, &tal2);
//         printf("your new number is this -> %d\n", result);
//     }
//     return 0;
// }

// --- swap two values using pointers and a temp variable ---
// #include <stdio.h>
// void swap(int *a, int *b){
//     int temp = *a;  // save a
//     *a = *b;        // put b into a
//     *b = temp;      // put saved a into b
// }
// int main(){
//     int a = 3;
//     int b = 7;
//     printf("before: a = %d, b = %d\n", a, b);
//     swap(&a, &b);
//     printf("after:  a = %d, b = %d", a, b);
//     return 0;
// }


// ===== SECTION 5: STRUCTS & POINTERS =====

// --- update and multiply a sensor value through a pointer ---
// #include <stdio.h>
// typedef struct{
//     char name[50];
//     int value;
// } Sensor;
// void update_sensor(Sensor *p, int newNr){
//     p->value = newNr;
// }
// void multi_sensor(Sensor *p){
//     p->value = p->value * 2;
// }
// int main(){
//     Sensor shop[50];
//     int num = 0;
//     printf("what is your new nr\n");
//     scanf("%d", &num);
//     update_sensor(shop, num);
//     multi_sensor(shop);
//     printf("this is your -> %d", shop[0].value);
//     return 0;
// }

// --- set value, add to it, then reset ---
// #include <stdio.h>
// typedef struct{
//     char Name[50];
//     int Number;
// } Sensor;
// void update_sensor(Sensor *p, int NewNr){
//     p->Number = NewNr;
// }
// void reset_sensor(Sensor *p){
//     p->Number = 0;
// }
// void add_to_sensor(Sensor *p){
//     p->Number = p->Number + 20;
// }
// void double_sensor(Sensor *p){
//     p->Number = p->Number * 2;
// }
// int main(){
//     int num;
//     Sensor shop[50];
//     printf("add new nr\n");
//     scanf("%d", &num);
//     update_sensor(shop, num);
//     reset_sensor(shop);
//     add_to_sensor(shop);
//     double_sensor(shop);
//     printf("sensor value is -> %d\n", shop[0].Number);
//     return 0;
// }

// --- Worker struct: collect name and age, check if eligible ---
// NOTE: the do-while logic inside the function has a structural bug —
// the while condition ended up inside the else block. Left as-is to show the attempt.
// #include <stdio.h>
// #include <string.h>
// typedef struct{
//     char name[50];
//     int Age;
// } Worker;
// void worker_Info(Worker *p){
//     getchar();
//     printf("Enter worker name: ");
//     fgets(p->name, sizeof(p->name), stdin);
//     p->name[strlen(p->name) - 1] = '\0';
//     printf("Enter age of worker: ");
//     scanf("%d", &p->Age);
//     if(p->Age >= 18 && p->Age <= 49){
//         printf("You can work at the warehouse\n");
//     }else if(p->Age >= 50){
//         printf("Too old for warehouse — can work in the office\n");
//     }else{
//         printf("Too young...\n");
//     }
// }
// int main(){
//     Worker Job[10];
//     int count;
//     printf("Hello! Welcome to the Warehouse!\n");
//     printf("How many workers today? ");
//     scanf("%d", &count);
//     for(int i = 0; i < count; i++){
//         worker_Info(&Job[i]);
//         printf("Name: %s || Age: %d\n", Job[i].name, Job[i].Age);
//     }
//     return 0;
// }


// ===== SECTION 6: CONDITIONS & BOOL =====

// --- age check using a bool function ---
// #include <stdio.h>
// #include <stdbool.h>
// bool ageCheck(int age){
//     if(age >= 18) return true;
//     else return false;
// }
// int main(){
//     int age = -10;
//     if(ageCheck(age)){
//         printf("you can join!\n");
//     }else{
//         printf("you can not sign up (18+)\n");
//     }
//     return 0;
// }

// --- student and senior discount (nested if) ---
// #include <stdio.h>
// #include <stdbool.h>
// int main(){
//     float price = 5.00;
//     bool isStudent = false;
//     bool isSenior = false;
//     if(isStudent){
//         if(isSenior){
//             printf("you get a student discount of 10% and senior of 20%\n");
//             price *= 0.7;
//         }else{
//             printf("you get a student discount of 10%\n");
//             price *= 0.9;
//         }
//     }else{
//         if(isSenior){
//             printf("you get a senior discount of 20%\n");
//             price *= 0.8;
//         }
//     }
//     printf("the price for the bus ticket is: $%.2f\n", price);
//     return 0;
// }

// --- temperature converter (Celsius <-> Fahrenheit) ---
// #include <stdio.h>
// int main(){
//     char choice = '\0';
//     float fahrenheit = 0.0f;
//     float celsius = 0.0f;
//     printf("temp conversion program\n");
//     printf("C. Celsius to Fahrenheit\n");
//     printf("F. Fahrenheit to Celsius\n");
//     printf("Choose: C/c or F/f\n");
//     scanf(" %c", &choice);
//     if(choice == 'C' || choice == 'c'){
//         printf("Enter the temp in Celsius: ");
//         scanf("%f", &celsius);
//         fahrenheit = (celsius * 9 / 5) + 32;
//         printf("%.1f Celsius = %.1f Fahrenheit", celsius, fahrenheit);
//     }else if(choice == 'F' || choice == 'f'){
//         printf("Enter the temp in Fahrenheit: ");
//         scanf("%f", &fahrenheit);
//         celsius = (fahrenheit - 32) * 5 / 9;
//         printf("%.1f Fahrenheit = %.1f Celsius\n", fahrenheit, celsius);
//     }else{
//         printf("invalid choice");
//     }
// }

// --- find the greater of two numbers ---
// #include <stdio.h>
// double getMax(double x, double y){
//     if(x > y) return x;
//     else return y;
// }
// int main(){
//     double x; double y; double result;
//     printf("enter your first nr\n");
//     scanf("%lf", &x);
//     printf("enter your 2nd nr\n");
//     scanf("%lf", &y);
//     result = getMax(x, y);
//     printf("%.2lf is the greatest", result);
//     return 0;
// }


// ===== SECTION 7: NESTED LOOPS =====

// --- multiplication table ---
// #include <stdio.h>
// int main(){
//     for(int i = 1; i <= 10; i++){
//         for(int j = 1; j <= 10; j++){
//             printf("%3d ", i * j);
//         }
//         printf("\n");
//     }
// }

// --- print a grid of symbols ---
// NOTE: original had a bug — both loops used 'i' (should be i and j)
// #include <stdio.h>
// int main(){
//     int row = 0;
//     int people = 0;
//     char symbol;
//     printf("how many rows do you want?\n");
//     scanf("%d", &row);
//     printf("how many people are you?\n");
//     scanf("%d", &people);
//     printf("Enter a symbol to use: ");
//     scanf(" %c", &symbol);
//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < people; j++){  // fixed: was 'i', now 'j'
//             printf(" %c", symbol);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// ===== SECTION 8: MINI PROGRAMS =====

// --- energy drink order with quantity check ---
// #include <stdio.h>
// #include <unistd.h>
// typedef struct{
//     char name[50];
//     int price;
// } EnergiDrink;
// int main(){
//     EnergiDrink Shop[10];
//     int count;
//     char choice;
//     printf("how many EnergiDrinks are you looking for today?\n");
//     scanf("%d", &count);
//     if(count >= 3){
//         printf("are you sure you want that many? -> y/n\n");
//         scanf(" %c", &choice);
//         sleep(1);
//         while(choice == 'n' || choice == 'N'){
//             printf("how many do you want?\n");
//             scanf("%d", &count);
//             printf("are you sure about that? -> y/n\n");
//             scanf(" %c", &choice);
//         }
//         printf("Too many energy drinks are not good for you but ok...\n");
//     }
//     return 0;
// }

// --- shopping item with fgets ---
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char item[50] = "";
//     float price = 0.0f;
//     int quantity = 0;
//     char currency = '$';
//     float total = 0.0f;
//     printf("what item would you like to buy?: ");
//     fgets(item, sizeof(item), stdin);
//     item[strlen(item) - 1] = '\0';
//     printf("what is the price for each?: ");
//     scanf("%f", &price);
//     printf("how many would you like?: ");
//     scanf("%d", &quantity);
//     total = price * quantity;
//     printf("\nyou have bought %d %s\n", quantity, item);
//     printf("your total is -> %c%.2f", currency, total);
//     return 0;
// }

// --- madlibs game ---
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char noun[50] = "";
//     char verb[50] = "";
//     char adjective1[50] = "";
//     char adjective2[50] = "";
//     char adjective3[50] = "";
//     printf("Enter an adjective (description): ");
//     fgets(adjective1, sizeof(adjective1), stdin);
//     adjective1[strlen(adjective1) - 1] = '\0';
//     printf("Enter a noun (animal or person): ");
//     fgets(noun, sizeof(noun), stdin);
//     noun[strlen(noun) - 1] = '\0';
//     printf("Enter an adjective (description): ");
//     fgets(adjective2, sizeof(adjective2), stdin);
//     adjective2[strlen(adjective2) - 1] = '\0';
//     printf("Enter a verb (ending with -ing): ");
//     fgets(verb, sizeof(verb), stdin);
//     verb[strlen(verb) - 1] = '\0';
//     printf("Enter an adjective (description): ");
//     fgets(adjective3, sizeof(adjective3), stdin);
//     adjective3[strlen(adjective3) - 1] = '\0';
//     printf("\nToday the hedgehog went to a %s zoo.\n", adjective1);
//     printf("in an exhibit i saw a %s\n", noun);
//     printf("%s was %s and %s!\n", noun, adjective2, verb);
//     printf("i was %s\n", adjective3);
//     return 0;
// }

// --- circle: area, surface area, volume ---
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double radius = 0.0;
//     const double PI = 3.14159;
//     printf("Enter the radius: ");
//     scanf("%lf", &radius);
//     printf("Area        : %.2lf\n", PI * pow(radius, 2));
//     printf("Surface area: %.2lf\n", 4 * PI * pow(radius, 2));
//     printf("Volume      : %.2lf\n", (4.0 / 3.0) * PI * pow(radius, 3));
// }


// ===== SECTION 9: FILE I/O =====

// --- write to a file and read it back ---
// Always check if fopen returns NULL before using the file pointer.
// If you skip the check and the file fails to open, the program crashes.

// #include <stdio.h>
// int main(){
//     FILE *fp;
//     FILE *fp2;
//     char size[50];
//
//     fp = fopen("note.txt", "w");
//     if(fp == NULL){
//         printf("Error: could not open file for writing\n");
//         return 1;
//     }
//     fprintf(fp, "Hello world!\n");
//     fclose(fp);
//
//     fp2 = fopen("note.txt", "r");
//     if(fp2 == NULL){
//         printf("Error: could not open file for reading\n");
//         return 1;
//     }
//     fgets(size, 50, fp2);
//     printf("%s", size);
//     fclose(fp2);
//     return 0;
// }


// ===== SECTION 10: EXTRA PROGRAMS =====

// --- random numbers with min/max formula ---
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(){
//     srand(time(NULL));
//     int min = 1;
//     int max = 6;
//     int randomNum1 = (rand() % (max - min + 1)) + min;
//     int randomNum2 = (rand() % (max - min + 1)) + min;
//     int randomNum3 = (rand() % (max - min + 1)) + min;
//     printf("%d %d %d", randomNum1, randomNum2, randomNum3);
//     return 0;
// }

// --- number guessing game ---
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(){
//     int secretNR = 0;
//     int Guess = 0;
//     int Tries = 0;
//     srand(time(NULL));
//     secretNR = (rand() % 20) + 1;
//     do{
//         printf("enter your guess (1-20)!\n");
//         scanf("%d", &Guess);
//         Tries++;
//         if(Guess < secretNR)       printf("too low!\n");
//         else if(Guess > secretNR)  printf("too high!\n");
//         else                       printf("correct!\n");
//     } while(Guess != secretNR);
//     printf("the secret number was %d\n", secretNR);
//     printf("it took you %d tries\n", Tries);
//     return 0;
// }

// --- ATM machine ---
// #include <stdio.h>
// void checkBalance(double balance);
// double deposit();
// double withdraw(double balance);
// int main(){
//     int choice;
//     double balance = 0.0;
//     printf("Welcome to the ATM!\n");
//     do{
//         printf("\n1. Check Balance\n");
//         printf("2. Deposit\n");
//         printf("3. Withdraw\n");
//         printf("4. Exit\n");
//         scanf("%d", &choice);
//         switch(choice){
//             case 1: checkBalance(balance); break;
//             case 2: balance += deposit(); break;
//             case 3: balance -= withdraw(balance); break;
//             case 4: printf("Goodbye!\n"); break;
//             default: printf("Invalid choice\n");
//         }
//     } while(choice != 4);
//     return 0;
// }
// void checkBalance(double balance){
//     printf("Your balance: $%.2lf\n", balance);
// }
// double deposit(){
//     double amount;
//     printf("How much to deposit? $");
//     scanf("%lf", &amount);
//     if(amount < 0){ printf("Invalid amount\n"); return 0.0; }
//     printf("Deposited $%.2lf\n", amount);
//     return amount;
// }
// double withdraw(double balance){
//     double amount;
//     printf("How much to withdraw? $");
//     scanf("%lf", &amount);
//     if(amount < 0){ printf("Invalid input\n"); return 0.0; }
//     if(amount > balance){ printf("Not enough funds\n"); return 0.0; }
//     printf("Withdrawn $%.2lf\n", amount);
//     return amount;
// }


// ===== ROCK PAPER SCISSORS =====

// --- VERSION 1: Two separate switch statements ---
// Duplicate logic — same switch written twice, once for user and once for computer.
// Improvement: one function that converts a number to a name handles both.

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int thePcChoice();
// int getUserChoice();
// void checkWinner(int userChoice, int pcChoice);
// int main(){
//     srand(time(NULL));
//     printf("****ROCK PAPER SCISSORS****\n");
//     int userChoice = getUserChoice();
//     int computerChoice = thePcChoice();
//     switch(userChoice){
//         case 1: printf("you choose ROCK!\n"); break;
//         case 2: printf("you choose PAPER!\n"); break;
//         case 3: printf("you choose SCISSORS!\n"); break;
//     }
//     switch(computerChoice){
//         case 1: printf("computer chose ROCK!\n"); break;
//         case 2: printf("computer chose PAPER!\n"); break;
//         case 3: printf("computer chose SCISSORS!\n"); break;
//     }
//     checkWinner(userChoice, computerChoice);
//     return 0;
// }
// int thePcChoice(){ return (rand() % 3) + 1; }
// int getUserChoice(){
//     int choice = 0;
//     do{
//         printf("Choose Rock/Paper/Scissors (1/2/3)\n");
//         scanf("%d", &choice);
//     } while(choice < 1 || choice > 3);
//     return choice;
// }
// void checkWinner(int userChoice, int pcChoice){
//     if(userChoice == pcChoice) printf("its a Tie!\n");
//     else if((userChoice == 1 && pcChoice == 3) ||
//             (userChoice == 2 && pcChoice == 1) ||
//             (userChoice == 3 && pcChoice == 2)) printf("you win!\n");
//     else printf("you lose to the MACHINE!!\n");
// }


// --- VERSION 2: GetChoice function replaces duplicate switches ---
// One function converts a number to a name — used for both user and computer.
// Learned: const char* as a return type for string functions.

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <windows.h>
// int UserChoice();
// int ComputerChoice();
// const char* GetChoice(int Choice);
// void Check_Winner(int User, int Computer);
// int main() {
//     srand(time(NULL));
//     printf("Welcome to the game of.....\n");
//     Sleep(1000);
//     printf("*** ROCK *** PAPER *** SCISSORS ***\n");
//     int theUserChoice = UserChoice();
//     int theComputerChoice = ComputerChoice();
//     printf("You chose: %s\n", GetChoice(theUserChoice));
//     printf("Computer chose: %s\n", GetChoice(theComputerChoice));
//     Check_Winner(theUserChoice, theComputerChoice);
//     return 0;
// }
// int UserChoice() {
//     int choice = 0;
//     do {
//         printf("\n1. ROCK\n");
//         printf("2. PAPER\n");
//         printf("3. SCISSORS\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
//     } while(choice < 1 || choice > 3);
//     return choice;
// }
// int ComputerChoice() { return (rand() % 3) + 1; }
// const char* GetChoice(int Choice) {
//     switch(Choice) {
//         case 1: return "ROCK";
//         case 2: return "PAPER";
//         case 3: return "SCISSORS";
//         default: return "Unknown";
//     }
// }
// void Check_Winner(int User, int Computer) {
//     if(User == Computer) {
//         printf("It's a Tie!\n");
//     } else if((User == 1 && Computer == 3) ||
//               (User == 2 && Computer == 1) ||
//               (User == 3 && Computer == 2)) {
//         printf("You Win!\n");
//     } else {
//         printf("You Lose to a Machine!\n");
//     }
// }


// ===== CURRENT ACTIVE PROGRAM =====

// --- 2D string array with fgets input ---
// User types in energy drink names — stored in a 2D char array.
// fgets handles spaces in names. strlen strips the newline at the end.

#include <stdio.h>
#include <string.h>

int main() {
    char EnergiDrinks[3][25] = {0};
    int size = sizeof(EnergiDrinks) / sizeof(EnergiDrinks[0]);

    for(int i = 0; i < size; i++){
        printf("Enter energy drink %d: ", i + 1);
        fgets(EnergiDrinks[i], sizeof(EnergiDrinks[i]), stdin);
        EnergiDrinks[i][strlen(EnergiDrinks[i]) - 1] = '\0';
    }

    for(int i = 0; i < size; i++){
        printf("%s ", EnergiDrinks[i]);
    }
    printf("\n");
    return 0;
}
