#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string date_of_publication;

public:
    // Constructors
    Book();
    Book(string t);
    Book(string t, string a);
    Book(string t, string a, string d);

    // Method to print book details
    void print() const;

    // Getter methods
    string getTitle() const;
    string getAuthor() const;
    string getDateOfPublication() const;
};

#endif // BOOK_HPP