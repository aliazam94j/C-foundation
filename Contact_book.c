// ================================================
// CONTACT BOOK
// Version 2 is the live version — uncommented and compiles.
// Version 1 is kept below as history.
// ================================================


// ===== VERSION 2 — split into functions =====

#include <stdio.h>
#include <string.h>

typedef struct{
    char name[50];
    int nr;
} Contact;

void Add_Contact_name(Contact *p, int *count);
void Contact_name(Contact *p, int *count);
void The_result(Contact *p, int *count);

int main(){
    Contact Book[50];
    int count = 0;
    Contact_name(Book, &count);
    Add_Contact_name(Book, &count);
    The_result(Book, &count);
    return 0;
}

void Contact_name(Contact *p, int *count){
    printf("how many names do u want to add?\n");
    scanf("%d", &*count);
    for (int i = 0; i < *count; i++){
        printf("NAME: ");
        getchar();
        fgets(p[i].name, sizeof(p[i].name), stdin);
        p[i].name[strlen(p[i].name) - 1] = '\0';
        printf("NR: ");
        scanf("%d", &p[i].nr);
    }
}

void Add_Contact_name(Contact *p, int *count){
    int extra = 0;
    printf("how many extra contacts do u want to add?\n");
    scanf("%d", &extra);
    int start = *count;
    *count += extra;
    for (int i = start; i < *count; i++){
        printf("NAME: ");
        getchar();
        fgets(p[i].name, sizeof(p[i].name), stdin);
        p[i].name[strlen(p[i].name) - 1] = '\0';
        printf("NR: ");
        scanf("%d", &p[i].nr);
    }
}

void The_result(Contact *p, int *count){
    for (int i = 0; i < *count; i++){
        printf("%s = %d\n", p[i].name, p[i].nr);
    }
}


// ===== VERSION 1 — single main, no separate functions =====

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>


// typedef struct{
//     char name[50];
//     char number[40];
// } Contact;


// void Search(Contact *recheck , int count){
//     char search[50];
//     char again = 'y';
//     do{
//     int exist = 0;
//     printf("what contact are u looking for? ");
//     fgets(search, sizeof(search), stdin);
//     search[strlen(search) - 1] = '\0';
//     for (int i = 0; i< count; i++){
//         if(strcmp(recheck[i].name,search ) == 0){
//             printf("Contact found =%s - %s", recheck[i].name, recheck[i].number);
//             exist = 1;
//         }
//     }
//     if(exist == 0)
//         printf("NOT found\n");
//         printf("search again(y/n)");
//         scanf(" %c", &again);
//         getchar();
//     } while (again == 'y');
//     again = toupper(again);
// }

// int main()
// {
//     Contact Book[50];
//     int contacts;
//     printf("How many contacts are there? ");
//     scanf("%d", &contacts);
//     for (int i = 0; i < contacts; i++)
//     {
//         getchar();
//         printf("What is your name? ");
//         fgets(Book[i].name, sizeof(Book[i].name), stdin);
//         Book[i].name[strlen(Book[i].name) - 1] = '\0';
//         printf("What is your nr? ");
//         scanf("%s", Book[i].number);
//     }
//     for (int i = 0; i < contacts; i++)
//         printf("%s = %s\n", Book[i].name, Book[i].number);
//     Search(Book, contacts);
//     return 0;
// }
