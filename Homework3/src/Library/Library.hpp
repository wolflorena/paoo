#include "Book.hpp"
#include <vector>
#include <memory>
#include <semaphore>
#include "Mutex.hpp"

class Library {
public:
    Library(std::mutex& mutex);
    std::weak_ptr<Book> borrowBook(const std::string& title);
    void returnBook(std::weak_ptr<Book> book);

private:
    std::vector<std::shared_ptr<Book> > books;
    std::mutex& mutex;
};

