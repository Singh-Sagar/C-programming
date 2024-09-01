#include <iostream>

int main()
{

    std::string message;
    std::string messageCopy;

    std::cout << "Enter something: ";
    std::getline(std::cin, message);
    messageCopy = message;

    // length() method
    std::cout << "length of the provided string: " << message.length() << std::endl;

    // append() method
    std::cout << "before append: " << message << std::endl;
    message.append(" you are joking right");
    std::cout << "after append: " << message << std::endl;
    message = messageCopy;

    // at() method
    std::cout << "first character in the provided string " << message.at(0);

    // insert() method
    std::cout << "lets insert 'cool, ' in the beginning";
    message.insert(0, "cool, ");
    std::cout << message << std ::endl;
    message = messageCopy;

    // find() method
    int first = message.find('x');
    if (first >= 0)
    {
        std::cout << "match found at " << first << std::endl;
    }
    else
    {
        std::cout << "no match exists" << std::endl;
    }
    message = messageCopy;

    // erase() method
    std::cout << "let erase the first 5 character of the provided string" << std::endl;
    std::cout << "original message " << message << std::endl;
    message.erase(5);
    std::cout << "message after erase() " << message << std::endl;
}