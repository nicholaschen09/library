#include "book.hpp"
#include <iostream>
using namespace std;

// Default constructor
Book::Book() : title("n/a"), author("n/a"), date_of_publication("n/a") {}

// Constructor with title
Book::Book(string t) : title(t), author("n/a"), date_of_publication("n/a") {}

// Constructor with title and author
Book::Book(string t, string a) : title(t), author(a), date_of_publication("n/a") {}

// Constructor with title, author, and date of publication
Book::Book(string t, string a, string d) : title(t), author(a), date_of_publication(d) {}

// Method to print book details
void Book::print() const
{
    cout << "Title: " << title << ", Author: " << author << ", Date of Publication: " << date_of_publication << endl;
}

// Getter methods
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getDateOfPublication() const { return date_of_publication; }