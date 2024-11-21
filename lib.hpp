#ifndef LIB_HPP
#define LIB_HPP

#include <vector>
#include "book.hpp"
using namespace std;

class Library
{
private:
    vector<Book> books;

public:
    // Constructors
    Library();
    Library(vector<Book> b);

    // Methods
    bool addBook(const string &title, const string &author, const string &date_of_publication);
    bool addBook(const Book &book);
    bool removeBook(const string &title, const string &author, const string &date_of_publication);
    bool removeBook(const Book &book);
    void print() const;
};

#endif // LIB_HPP