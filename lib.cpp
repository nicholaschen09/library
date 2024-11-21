#include "lib.hpp"
#include <iostream>
using namespace std;

// Default constructor
Library::Library() {}

// Constructor with vector of books
Library::Library(vector<Book> b) : books(b) {}

// Method to add a book by details
bool Library::addBook(const string &title, const string &author, const string &date_of_publication)
{
    for (const auto &book : books)
    {
        if (book.getTitle() == title && book.getAuthor() == author && book.getDateOfPublication() == date_of_publication)
        {
            return false; // Duplicate book
        }
    }
    books.push_back(Book(title, author, date_of_publication));
    return true;
}

// Method to add a book by Book instance
bool Library::addBook(const Book &book)
{
    return addBook(book.getTitle(), book.getAuthor(), book.getDateOfPublication());
}

// Method to remove a book by details
bool Library::removeBook(const string &title, const string &author, const string &date_of_publication)
{
    for (auto it = books.begin(); it != books.end(); ++it)
    {
        if (it->getTitle() == title && it->getAuthor() == author && it->getDateOfPublication() == date_of_publication)
        {
            books.erase(it);
            return true;
        }
    }
    return false;
}

// Method to remove a book by Book instance
bool Library::removeBook(const Book &book)
{
    return removeBook(book.getTitle(), book.getAuthor(), book.getDateOfPublication());
}

// Method to print all books in the library
void Library::print() const
{
    for (size_t i = 0; i < books.size(); ++i)
    {
        cout << "Book " << i + 1 << ": ";
        books[i].print();
    }
}