// Velocity training exercise — the same program rewritten 7 times from scratch.
// Each version adds one new concept. The goal was repetition, not a finished product.
// Version 7 is uncommented so the file compiles. Versions 1-6 are kept below as history.

#include <stdio.h>
#include <string.h>

typedef struct {
    char Name[50];
    double price;
} Perfume;

void Parfym_Name_Price(Perfume *p);
char The_Choice(Perfume *p);

int main(){
    Perfume Warehouse[10];
    int count;
    double total = 0;
    char choice;

    printf("how many perfumes? ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        Parfym_Name_Price(&Warehouse[i]);
        printf("perfume -> %s || price -> %.2lf\n", Warehouse[i].Name, Warehouse[i].price);

        choice = The_Choice(&Warehouse[i]);

        while (choice == 'n' || choice == 'N') {
            Parfym_Name_Price(&Warehouse[i]);
            printf("perfume -> %s || price -> %.2lf\n", Warehouse[i].Name, Warehouse[i].price);
            choice = The_Choice(&Warehouse[i]);
        }

        total += Warehouse[i].price;
    }

    printf("total -> %.2lf\n", total);
    return 0;
}

void Parfym_Name_Price(Perfume *p) {
    getchar();
    printf("Enter perfume name: ");
    fgets(p->Name, sizeof(p->Name), stdin);
    p->Name[strlen(p->Name) - 1] = '\0';
    printf("Enter price: ");
    scanf("%lf", &p->price);
}

char The_Choice(Perfume *p) {
    printf("is this correct? %s || %.2lf -> y/n\n", p->Name, p->price);
    char Answer;
    scanf(" %c", &Answer);
    return Answer;
}


// ================================================
// VERSION HISTORY
// ================================================

// --- VERSION 1: Very first try - just 2D arrays, no struct ---
// No functions. Name and price stored in separate arrays.
// No confirmation, no error checking.

// #include <stdio.h>
// int main(){
//     int perfume;
//     char name[10][50];
//     int price[10];
//     int total = 0;
//     printf("how many perfumes are you looking for today?\n");
//     scanf("%d", &perfume);
//     for(int i = 0; i < perfume; i++){
//         printf("type the name of each parfym\n");
//         scanf("%s", name[i]);
//         printf("type the price for each parfym\n");
//         scanf("%d",&price[i]);
//     }
//     for(int i = 0; i <perfume; i ++){
//         total += price[i];
//         printf("each name -> %s -> price = %d\n",name[i],price[i]);
//     }
//     printf("this is your total price =  %d\n",total);
//     return 0;
// }


// --- VERSION 2: Introduced a struct ---
// Grouped name and price together inside a Perfume struct.
// Still no functions, no confirmation.

// #include <stdio.h>
// typedef struct{
//     char name[50];
//     int price;
// }Perfume;
// int main(){
//     Perfume shop[10];
//     int count;
//     int total = 0;
//     printf("The perfume for today is how many?\n");
//     scanf("%d",&count);
//     for(int i = 0; i < count; i++){
//         printf("what perfume are you looking for today\n");
//         scanf("%s",shop[i].name);
//         printf("the price for the perfume is\n");
//         scanf("%d",&shop[i].price);
//     }
//     for(int i = 0; i < count; i ++){
//         printf("so you choose this perfume ->%s || this is the price %d\n",shop[i].name,shop[i].price);
//         total +=shop[i].price;
//     }
//     printf("your total is this -> %d\nWill that be card or cash?",total);
//     return 0;
// }


// --- VERSION 3: Added a confirmation function ---
// Learned how to pass a struct to a function and get a yes/no back.

// #include <stdio.h>
// typedef struct{
//     char name[50];
//     int price;
// }Perfume;
// char new_choice(Perfume p){
//     printf("is your order correct -> y/n\n");
//     char Answer;
//     scanf(" %c",&Answer);
//     return Answer;
// }
// int main(){
//     Perfume shop[10];
//     int count;
//     int total = 0;
//     char choice;
//     printf("The perfume for today is how many?\n");
//     scanf("%d",&count);
//     for(int i = 0; i < count; i++){
//         printf("Name the perfume you want\n");
//         scanf("%s",shop[i].name);
//         printf("The price for the perfume is\n");
//         scanf("%d",&shop[i].price);
//     }
//     for(int i = 0; i < count; i ++){
//         printf("So you choose this perfume -> %s || this is the price = %dkr\n",shop[i].name,shop[i].price);
//         choice = new_choice(shop[i]);
//         while(choice == 'n' || choice == 'N'){
//             printf("Repeat the name please!\n");
//             scanf("%s",shop[i].name);
//             printf("The price for that perfume is...\n");
//             scanf("%d",&shop[i].price);
//             choice = new_choice(shop[i]);
//         }
//         total +=shop[i].price;
//     }
//     printf("Your total is this = %dkr\nWill that be card or cash?",total);
//     return 0;
// }


// --- VERSION 4: Added a friendly discount using a pointer ---
// First time using a pointer to a struct to actually change the price.
// Learned the difference between passing by value vs by pointer.

// #include <stdio.h>
// typedef struct{
//     char name[50];
//     int price;
// }Perfume;
// char new_choice(Perfume p){
//     printf("is your order correct -> y/n\n");
//     char Answer;
//     scanf(" %c",&Answer);
//     return Answer;
// }
// char Friendly_discount(Perfume *p){
//     printf("Should we give this person a discount?\n");
//     char friendly;
//     scanf(" %c",&friendly);
//     if(friendly == 'y' || friendly == 'Y'){
//         p->price = p->price * 0.9;
//     }
//     return friendly;
// }
// int main(){
//     Perfume shop[10];
//     int count;
//     int total = 0;
//     char choice;
//     printf("The perfume for today is how many?\n");
//     scanf("%d",&count);
//     for(int i = 0; i < count; i++){
//         printf("Name the perfume you want\n");
//         scanf("%s",shop[i].name);
//         printf("The price for the perfume is\n");
//         scanf("%d",&shop[i].price);
//     }
//     for(int i = 0; i < count; i ++){
//         printf("So you choose this perfume -> %s || this is the price = %dkr\n",shop[i].name,shop[i].price);
//         choice = new_choice(shop[i]);
//         while(choice == 'n' || choice == 'N'){
//             printf("Repeat the name please!\n");
//             scanf("%s",shop[i].name);
//             printf("The price for that perfume is...\n");
//             scanf("%d",&shop[i].price);
//             choice = new_choice(shop[i]);
//         }
//         Friendly_discount(&shop[i]);
//         total +=shop[i].price;
//     }
//     printf("Your total is this = %dkr\nWill that be card or cash?",total);
//     return 0;
// }


// --- VERSION 5: Added password protection ---
// Added a login function before accessing the perfumes.
// Learned how to use strcmp to compare strings.

// #include <stdio.h>
// #include <string.h>
// typedef struct{
//     char name[50];
//     int price;
// }Perfume;
// int The_Password(char Password[50],char Access[10]){
//     printf("type your password to access the perfumes!\n");
//     scanf("%s",Access);
//     strcpy(Password,"Dragon");
//     if(strcmp(Password,Access) == 0){
//         printf("Welcome! Access Granted!\n");
//         return 1;
//     }else{
//         printf("Access denied! Shutting off\n");
//         return 0;
//     }
// }
// char new_choice(Perfume p){
//     printf("is this right -> %s || is this correct = %dkr? -> y/n\n",p.name,p.price);
//     char answer;
//     scanf(" %c",&answer);
//     return answer;
// }
// int main(){
//     Perfume factory[10];
//     char P[50];
//     char A[10];
//     int newAcess;
//     int count;
//     int total = 0;
//     char choice;
//     newAcess = The_Password(P,A);
//     if(newAcess != 1){ return 0; }
//     printf("whats the nr of perfume you are looking for?\n");
//     scanf("%d",&count);
//     for(int i = 0; i <count; i++){
//         printf("What would you like to call it\n");
//         scanf("%s",factory[i].name);
//         printf("What price would you like to put on the perfume?\n");
//         scanf("%d",&factory[i].price);
//     }
//     for(int i = 0; i <count; i++){
//         printf("This is the name -> %s || The price -> %dkr\n",factory[i].name,factory[i].price);
//         choice = new_choice(factory[i]);
//         while(choice == 'n' || choice == 'N'){
//             printf("What shall we call this perfume?\n");
//             scanf("%s",factory[i].name);
//             printf("what price would you like to put?\n");
//             scanf("%d",&factory[i].price);
//             choice = new_choice(factory[i]);
//         }
//         total +=factory[i].price;
//     }
//     printf("The total is this = %dkr",total);
//     return 0;
// }


// --- VERSION 6: Switched to fgets and double for price ---
// scanf("%s") breaks on names with spaces (e.g. "Bleu de Chanel").
// fgets fixes that. Also switched price to double so decimals work.
// Confirmation function now takes a pointer instead of a copy.

// #include <stdio.h>
// #include <string.h>
// typedef struct{
//     char name[50];
//     double price;
// } Perfume;
// char Choice(Perfume *p){
//     printf("is this the correct name %s and price %.2lf? -> y/n ", p->name, p->price);
//     char Answer;
//     scanf(" %c", &Answer);
//     return Answer;
// }
// int main(){
//     Perfume warehouse[50];
//     int count;
//     double total = 0;
//     char choice;
//     printf("how many perfumes? ");
//     scanf("%d", &count);
//     for (int i = 0; i < count; i++){
//         getchar();
//         printf("what is the name of the perfume? ");
//         fgets(warehouse[i].name, sizeof(warehouse[i].name), stdin);
//         warehouse[i].name[strlen(warehouse[i].name) - 1] = '\0';
//         printf("what is the price for each item? ");
//         scanf("%lf", &warehouse[i].price);
//     }
//     for (int i = 0; i < count; i++){
//         printf("the perfume is this -> %s || The price is this -> %.2lf\n", warehouse[i].name, warehouse[i].price);
//         choice = Choice(&warehouse[i]);
//         while(choice == 'n' || choice == 'N'){
//             getchar();
//             printf("what is the name of the perfume? ");
//             fgets(warehouse[i].name, sizeof(warehouse[i].name), stdin);
//             warehouse[i].name[strlen(warehouse[i].name) - 1] = '\0';
//             printf("what is the price for each item? ");
//             scanf("%lf", &warehouse[i].price);
//             choice = Choice(&warehouse[i]);
//         }
//         total += warehouse[i].price;
//     }
//     printf("these are the prices %.2lf\n", total);
//     return 0;
// }
