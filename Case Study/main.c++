#include <iostream>
#include <string>
using namespace std;

class Library
{
    int id[100];
    string title[100];
    string author[100];
    bool issued[100];

    int count;

public:

    Library()
    {
        count = 0;
    }

    // Add a new book
    void addBook()
    {
        if (count >= 100)
        {
            cout << "Library is full!\n";
            return;
        }

        cout << "\nEnter Book ID: ";
        cin >> id[count];

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title[count]);

        cout << "Enter Author Name: ";
        getline(cin, author[count]);

        issued[count] = false;

        count++;

        cout << "\nBook added successfully!\n";
    }

    // Display all books
    void displayBooks()
    {
        if (count == 0)
        {
            cout << "\nNo books available!\n";
            return;
        }

        cout << "\n----- BOOK DETAILS -----\n";

        for (int i = 0; i < count; i++)
        {
            cout << "\nBook ID: " << id[i];
            cout << "\nTitle: " << title[i];
            cout << "\nAuthor: " << author[i];

            if (issued[i])
                cout << "\nStatus: Issued\n";
            else
                cout << "\nStatus: Available\n";
        }
    }

    // Search for a book
    void searchBook()
    {
        int searchId;
        bool found = false;

        cout << "\nEnter Book ID to search: ";
        cin >> searchId;

        for (int i = 0; i < count; i++)
        {
            if (id[i] == searchId)
            {
                cout << "\nBook Found!";
                cout << "\nTitle: " << title[i];
                cout << "\nAuthor: " << author[i];

                if (issued[i])
                    cout << "\nStatus: Issued\n";
                else
                    cout << "\nStatus: Available\n";

                found = true;
                break;
            }
        }

        if (!found)
            cout << "\nBook not found!\n";
    }

    // Issue a book
    void issueBook()
    {
        int bookId;

        cout << "\nEnter Book ID to issue: ";
        cin >> bookId;

        for (int i = 0; i < count; i++)
        {
            if (id[i] == bookId)
            {
                if (issued[i])
                {
                    cout << "\nBook is already issued!\n";
                }
                else
                {
                    issued[i] = true;
                    cout << "\nBook issued successfully!\n";
                }

                return;
            }
        }

        cout << "\nBook not found!\n";
    }

    // Return a book
    void returnBook()
    {
        int bookId;

        cout << "\nEnter Book ID to return: ";
        cin >> bookId;

        for (int i = 0; i < count; i++)
        {
            if (id[i] == bookId)
            {
                if (issued[i])
                {
                    issued[i] = false;
                    cout << "\nBook returned successfully!\n";
                }
                else
                {
                    cout << "\nBook was not issued!\n";
                }

                return;
            }
        }

        cout << "\nBook not found!\n";
    }
};

int main()
{
    Library lib;
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";

        cout << "\n\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                lib.addBook();
                break;

            case 2:
                lib.displayBooks();
                break;

            case 3:
                lib.searchBook();
                break;

            case 4:
                lib.issueBook();
                break;

            case 5:
                lib.returnBook();
                break;

            case 6:
                cout << "\nThank you for using Library System!";
                break;

            default:
                cout << "\nInvalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}