#include "PasteService.h"
#include <iostream>
#include <string>

int main()
{
    PasteService service;
    int choice;
    
    std::cout << "PasteBin Simulation (C++)\n";

    while (true)
    {
        std::cout << "\n1. Create Paste\n2. Get Paste\n3. Exit\nEnter choice: ";
        std::cin >> choice;
        std::cin.ignore();
        
        if(choice == 1)
        {
            std::string line, content;

            std::cout << "Enter paste (type 'EOF' on a new line to end):\n";

            while (true)
            {
                std::getline(std::cin, line);

                if(line == "EOF")
                break;

                content += line + "\n";
            }

            std::string pasteUrl = service.createPaste(content);
            std::cout << "Your paste URL: " << pasteUrl << "\n";
        }
        
        else if(choice == 2)
        {
            std::string url;
            std::cout << "Enter paste URL: ";
            std::getline(std::cin, url);
            std::string content = service.getPaste(url);
            std::cout << "\n--- Paste Content ---\n" << content;
        }

        else if(choice == 3)
        break;

        else
        std::cout << "Invalid choice.\n";
    }

    return 0;
}
