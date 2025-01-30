#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define Book structure
typedef struct {
    char title[50];
    char author[50];
    char isbn[13];
    int year;
} Book;

// Function declarations
void addBook(Book books[], int *count);
void displayBooks(const Book books[], int count);
int searchBookByISBN(const Book books[], int count, const char *isbn);
void searchBookByAuthor(const Book books[], int count, const char *author);
void searchBookByTitle(const Book books[], int count, const char *title);
void updateBook(Book books[], int count, const char *isbn);
void deleteBook(Book books[], int *count, const char *isbn);
void saveToFile(const Book books[], int count, const char *filename);
void loadFromFile(Book books[], int *count, const char *filename);

// Main function
int main() {
    Book books[100];
    int count = 0;
    int choice;
    char isbn[13];
    char author[50];
    char title[50];

    loadFromFile(books, &count, "library.txt");

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add a new book record\n");
        printf("2. Display all book records\n");
        printf("3. Search a book by ISBN\n");
        printf("4. Search a book by Author\n");
        printf("5. Search a book by Title\n");
        printf("6. Update a book record\n");
        printf("7. Delete a book record\n");
        printf("8. Save book records to a file\n");
        printf("9. Load book records from a file\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                displayBooks(books, count);
                break;
            case 3:
                printf("Enter ISBN to search: ");
                scanf("%s", isbn);
                int index = searchBookByISBN(books, count, isbn);
                if (index != -1)
                    printf("Book found: %s by %s\n", books[index].title, books[index].author);
                else
                    printf("Book not found.\n");
                break;
            case 4:
                printf("Enter author to search: ");
                scanf(" %[^\n]%*c", author);
                searchBookByAuthor(books, count, author);
                break;
            case 5:
                printf("Enter title to search: ");
                scanf(" %[^\n]%*c", title);
                searchBookByTitle(books, count, title);
                break;
            case 6:
                printf("Enter ISBN of the book to update: ");
                scanf("%s", isbn);
                updateBook(books, count, isbn);
                break;
            case 7:
                printf("Enter ISBN of the book to delete: ");
                scanf("%s", isbn);
                deleteBook(books, &count, isbn);
                break;
            case 8:
                saveToFile(books, count, "library.txt");
                break;
            case 9:
                loadFromFile(books, &count, "library.txt");
                break;
            case 10:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

// Function to add a new book
void addBook(Book books[], int *count) {
    printf("Enter title: ");
    scanf(" %[^\n]%*c", books[*count].title);
    printf("Enter author: ");
    scanf(" %[^\n]%*c", books[*count].author);
    printf("Enter ISBN: ");
    scanf("%s", books[*count].isbn);
    printf("Enter year: ");
    scanf("%d", &books[*count].year);
    (*count)++;
    printf("Book added successfully.\n");
}

// Function to display all books
void displayBooks(const Book books[], int count) {
    printf("\nAll Books in Library:\n");
    for (int i = 0; i < count; i++) {
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("ISBN: %s\n", books[i].isbn);
        printf("Year: %d\n", books[i].year);
        printf("\n");
    }
}

// Function to search for a book by ISBN
int searchBookByISBN(const Book books[], int count, const char *isbn) {
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].isbn, isbn) == 0)
            return i;
    }
    return -1;
}

// Function to search for a book by Author
void searchBookByAuthor(const Book books[], int count, const char *author) {
    printf("Books by Author %s:\n", author);
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].author, author) == 0)
            printf("Title: %s, ISBN: %s, Year: %d\n", books[i].title, books[i].isbn, books[i].year);
    }
}

// Function to search for a book by Title
void searchBookByTitle(const Book books[], int count, const char *title) {
    printf("Books with Title %s:\n", title);
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0)
            printf("Author: %s, ISBN: %s, Year: %d\n", books[i].author, books[i].isbn, books[i].year);
    }
}

// Function to update a book record
void updateBook(Book books[], int count, const char *isbn) {
    int index = searchBookByISBN(books, count, isbn);
    if (index != -1) {
        printf("Enter new title: ");
        scanf(" %[^\n]%*c", books[index].title);
        printf("Enter new author: ");
        scanf(" %[^\n]%*c", books[index].author);
        printf("Enter new year: ");
        scanf("%d", &books[index].year);
        printf("Book updated successfully.\n");
    } else {
        printf("Book not found.\n");
    }
}

// Function to delete a book record
void deleteBook(Book books[], int *count, const char *isbn) {
    int index = searchBookByISBN(books, *count, isbn);
    if (index != -1) {
        for (int i = index; i < *count - 1; i++) {
            books[i] = books[i + 1];
        }
        (*count)--;
        printf("Book deleted successfully.\n");
    } else {
        printf("Book not found.\n");
    }
}

// Function to save book records to a file
void saveToFile(const Book books[], int count, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, file);
    fwrite(books, sizeof(Book), count, file);
    fclose(file);
    printf("Books saved successfully.\n");
}

// Function to load book records from a file
void loadFromFile(Book books[], int *count, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("No previous data found. Starting fresh.\n");
        *count = 0;
        return;
    }
    fread(count, sizeof(int), 1, file);
    fread(books, sizeof(Book), *count, file);
    fclose(file);
    printf("Books loaded successfully.\n");
}
