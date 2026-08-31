#include <stdio.h>
#include <string.h>
#include <ctype.h>


typedef struct{
    char name[50];
    char number[40];
} Contact;


void Search(Contact *book , int count){
    char search[50];
    char again = 'y';
    do{
    int exist = 0;
    printf("what contact are u looking for? ");
    fgets(search, sizeof(search), stdin);
    search[strlen(search) - 1] = '\0';
    for (int i = 0; i< count; i++){
        if(strcmp(book[i].name,search ) == 0){
            printf("Contact found =%s - %s", book[i].name, book[i].number);
            exist = 1;
        }
    }
    if(exist == 0)
        printf("NOT found\n");
        printf("search again(y/n)");
        scanf(" %c", &again);
        getchar();
    } while (again == 'y');
    again = toupper(again);
}

int main()
{
    Contact Book[50];
    int contacts;
    printf("How many contacts are there? ");
    scanf("%d", &contacts);
    for (int i = 0; i < contacts; i++)
    {
        getchar();
        printf("What is your name? ");
        fgets(Book[i].name, sizeof(Book[i].name), stdin);
        Book[i].name[strlen(Book[i].name) - 1] = '\0';
        printf("What is your nr? ");
        scanf("%s", Book[i].number);
    }
    for (int i = 0; i < contacts; i++)
        printf("%s = %s\n", Book[i].name, Book[i].number);
    Search(Book, contacts);
    return 0;
}