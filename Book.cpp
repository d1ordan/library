#include "Book.h"

Book::Book() :amount_of_page(0), author("Unknown"), name("Unknown"), genre("Unknown") {
}

int Book::push_f() {
	std::cout << name;
}
int Book::push_f() {
	std::cout << author;
}
int Book::push_f() {
	std::cout << genre;
}