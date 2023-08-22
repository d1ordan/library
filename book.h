#include <iostream>
#include <vector>



class Book {
private:
    std::vector <int> list_of_books;
    int amount_of_book;
    int amount_of_page;
    std::string author;
    std::string name;
    std::string genre;

public:
    Book();
    int push_f();
};

