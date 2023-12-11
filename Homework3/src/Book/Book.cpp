#include "Book.hpp"

Book::Book(const std::string& title) : title(title) {}

std::string Book::getTitle() const {
    return title;
}
