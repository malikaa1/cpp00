#include "Phonebook.Class.hpp"
int main()
{
    std::string command;
    Phonebook phonebook;

    while (1)
    {
        std::cout << "Enter a command: ADD, SEARCH OR EXIT > ";
        std::cin >> command;
        if (command.compare("ADD") == 0)
            phonebook.add_contact();
        if (command.compare("SEARCH") == 0)
            phonebook.search_contacts();
        if (command.compare("EXIT") == 0)
            return 0;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return 0;
}
