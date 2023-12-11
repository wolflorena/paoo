#include <string>

class Book {
public:
    Book(const std::string& title);
    std::string getTitle() const;

private:
    std::string title;
};

