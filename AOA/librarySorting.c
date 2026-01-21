#include <stdio.h>
#include <string.h>

struct book {
    char bookName[50];
    char author[50];
    int number;
};

int main() {
    struct book b[5];
    struct book key;
    int i, j;

    // Input data
    strcpy(b[0].bookName, "C++");
    strcpy(b[0].author, "Suyash");
    b[0].number = 4;

    strcpy(b[1].bookName, "Java");
    strcpy(b[1].author, "Chandu");
    b[1].number = 2;

    strcpy(b[2].bookName, "Python");
    strcpy(b[2].author, "Chauhan");
    b[2].number = 3;

    strcpy(b[3].bookName, "JS");
    strcpy(b[3].author, "Rushi");
    b[3].number = 5;

    strcpy(b[4].bookName, "C");
    strcpy(b[4].author, "Prakash");
    b[4].number = 1;


    for (i = 1; i < 5; i++) {
        key = b[i];
        j = i - 1;

        while (j >= 0 && b[j].number > key.number) {
            b[j + 1] = b[j];
            j--;
        }
        b[j + 1] = key;
    }

    printf("Books sorted by number:\n\n");
    for (i = 0; i < 5; i++) {
        printf("Book Name : %s\n", b[i].bookName);
        printf("Author    : %s\n", b[i].author);
        printf("Number    : %d\n\n", b[i].number);
    }

    return 0;
}
