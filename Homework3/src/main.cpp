#include "Library.hpp"
#include "Mutex.hpp"
#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex;
Library library(mutex);

int bookCountBorrow = 1;
int bookCountReturn = 1;

void borrowBookFunction();
void returnBookFunction();

int main() {
    std::thread borrower(borrowBookFunction);
    std::thread returner(returnBookFunction);
    std::thread borrower1(borrowBookFunction);
    std::thread returner1(returnBookFunction);

    borrower.join();
    returner.join();
    borrower1.join();
    returner1.join();

    return 0;
}

void borrowBookFunction() {
    auto book = library.borrowBook("title " + std::to_string(bookCountBorrow++));
    if (auto sharedBook = book.lock()) {
        std::cout << "Book borrowed: " << sharedBook->getTitle() << std::endl;
    }
}

void returnBookFunction() {
    auto book = std::make_shared<Book>("title " + std::to_string(bookCountReturn++));
    library.returnBook(book);
}
