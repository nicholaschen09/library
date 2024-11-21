//*****************************************************************************
// Student Name: Nicholas Chen
// Student Number: 21124383
//
// SYDE 121 Lab: MC 4045 Assignment: 2
// Filename: nicholaschen_21124383_lab_assignment2.zip
//
// I hereby declare that this code, submitted for credit for the course
// SYDE 121, is a product of my own efforts. This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others.
//
// Project: Simulating a Library Program
// Purpose: The purpose of this program is to simulate a library system
// where users can add, remove, and view books in the library.

// Due Date: Tuesday, November 19, 2024 11:59PM
//**************************************************************

// Testing and Debugging Documentation:

/*
To debug the program, I followed a systematic approach. First,
I compiled the code to catch any syntax errors or missing dependencies.
Once the code compiled successfully, I ran the program and checked
the output to see if it matched what I expected. I used print statements
to trace the execution flow and inspect the state of the library and book
objects at different points. I focused on checking the addition of books,
handling of duplicate entries, and removal of books. When I found
discrepancies, I reviewed the relevant parts of the code, especially
the addBook and removeBook methods, to identify and fix logical errors.
This iterative process of running the program, observing the output, and
refining the code helped ensure the program behaved as intended.
*/

#include <iostream>
#include "book.cpp"
#include "lib.cpp"
using namespace std;

int main()
{
    // Create some book instances with different constructors
    Book book1("Brave New World", "Aldous Huxley", "1932");        // All attributes provided
    Book book2("Pride and Prejudice", "Jane Austen", "1813");      // All attributes provided
    Book book3("The Catcher in the Rye", "J.D. Salinger", "1951"); // All attributes provided
    Book book4("War and Peace", "Leo Tolstoy", "1869");            // All attributes provided

    // Test Book constructors
    Book book5("1984", "George Orwell"); // Title and authors provided, date set to "n/a"
    Book book6("Moby Dick");             // Only title provided, others set to "n/a"
    Book book7;                          // Default constructor, all attributes set to "n/a"

    // Print books to verify constructors
    cout << "Testing Book constructors:" << endl;
    book5.print();
    book6.print();
    book7.print();

    // Create a library instance using the default constructor
    Library library;

    // Add books to the library
    library.addBook(book1); // Add book1 to the library
    library.addBook(book2); // Add book2 to the library
    library.addBook(book3); // Add book3 to the library

    // Try to add a duplicate book
    // Expected output: "Duplicate book not added."
    if (!library.addBook(book1))
    {
        cout << "Duplicate book not added." << endl; // Print message if duplicate book is not added
    }

    // Print all books in the library
    // Expected output: List of books including "Brave New World", "Pride and Prejudice", "The Catcher in the Rye"
    cout << "Books in the library:" << endl;
    library.print(); // Print all books in the library

    // Remove a book from the library
    // Expected output: "Book removed successfully."
    if (library.removeBook(book2))
    {
        cout << "Book removed successfully." << endl; // Print message if book is removed successfully
    }
    else
    {
        cout << "Book not found." << endl; // Print message if book is not found
    }

    // Try to remove a book that was never inserted
    // Expected output: "Book not found, cannot remove."
    if (!library.removeBook(book4))
    {
        cout << "Book not found, cannot remove." << endl; // Print message if book is not found and cannot be removed
    }

    // Print all books in the library after removal
    // Expected output: List of books including "Brave New World", "The Catcher in the Rye"
    cout << "Books in the library after removal:" << endl;
    library.print(); // Print all books in the library after removal

    // Test insertion by title, authors, and date
    if (library.addBook("War and Peace", "Leo Tolstoy", "1869"))
    {
        cout << "Book added successfully by title, authors, and date." << endl;
    }

    // Test removal by title, authors, and date
    if (library.removeBook("War and Peace", "Leo Tolstoy", "1869"))
    {
        cout << "Book removed successfully by title, authors, and date." << endl;
    }

    return 0; // End of the program
}