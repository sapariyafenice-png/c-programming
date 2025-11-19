#include <stdio.h>

union Book {
    int accession_no;
    char title[50];
    char author[50];
    float price;
    int issued_flag;
};

int main() {
    union Book book;
    int choice;
    printf("id no:25ce106\n");
    printf("=== Library Book Detail System (Using Union) ===\n");

    printf("\nEnter 1 to store Accession Number\n");
    printf("Enter 2 to store Title\n");
    printf("Enter 3 to store Author Name\n");
    printf("Enter 4 to store Price\n");
    printf("Enter 5 to store Issued/Available Status\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();

    printf("\n");

    switch(choice) {
        case 1:
            printf("Enter Accession Number: ");
            scanf("%d", &book.accession_no);
            printf("Stored Accession No = %d\n", book.accession_no);
            break;

        case 2:
            printf("Enter Book Title: ");
            gets(book.title);
            printf("Stored Title = %s\n", book.title);
            break;

        case 3:
            printf("Enter Author Name: ");
            gets(book.author);
            printf("Stored Author = %s\n", book.author);
            break;

        case 4:
            printf("Enter Price: ");
            scanf("%f", &book.price);
            printf("Stored Price = %.2f\n", book.price);
            break;

        case 5:
            printf("Enter Status (1 = Issued, 0 = Available): ");
            scanf("%d", &book.issued_flag);
            if(book.issued_flag == 1)
                printf("Book Status: Issued\n");
            else
                printf("Book Status: Available\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

