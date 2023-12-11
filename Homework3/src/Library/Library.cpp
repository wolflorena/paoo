#include "Library.hpp"
#include "Mutex.hpp"
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

Library::Library(std::mutex& mutex) : mutex(mutex){
    books.push_back(std::make_shared<Book>("title 1"));
    books.push_back(std::make_shared<Book>("title 2"));
    books.push_back(std::make_shared<Book>("title 3"));
}

std::weak_ptr<Book> Library::borrowBook(const std::string& title) {
    //std::unique_lock<std::mutex> lock(libraryMutex);
    Mutex mutex(this->mutex);
    for (const auto& book : books) {
        if (book->getTitle() == title) {
            // semaphore.release();
            std::this_thread::sleep_for(std::chrono::seconds(1));
            // std::cout << "Book borrowed: " << title << std::endl;

            return book;
        } 
    }
    return std::weak_ptr<Book>(); 
}

void Library::returnBook(std::weak_ptr<Book> book) {
    //std::unique_lock<std::mutex> lock(libraryMutex);
    Mutex mutex(this->mutex);
    // std::lock_guard<Mutex> lock(mutex);
    if (auto sharedBook = book.lock()) { 
        books.push_back(sharedBook);
        std::this_thread::sleep_for(std::chrono::seconds(1));

        std::cout << "Book returned: " << sharedBook->getTitle() << std::endl;
    }
}
