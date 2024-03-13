#include "linkedlist.h"
int main()
{
    LinkedList lst;
    
    int option=-1;
    std::cout<<"\n\tMENU";
    lst.printMenu();
    std::cin>>option;

while (option <=6) {
    std::cout << "\n\tMENU\n";
    lst.printMenu();
    std::cin >> option;

    if (option > 0 && option <= 5) { // Checking
        switch (option) {
            case 1: {
                int val = 0;
                std::cout << "enter a number";
                std::cin >> val;
                lst.insertEnd(val);
            break;
            }
            case 2:
                lst.removeFront();
            break;
            case 3:
                lst.removeEnd();
            break;
            case 4: {
                int val = 0;
                std::cout << "enter a number";
                std::cin >> val;
                lst.insertFront(val);
            break;
            }
            case 5:
                lst.display();
            break;
            default:
                std::cout << "Invalid;";
            break;
        }
    } else if (option == 6) {
        exit(0);
    } else {
        std::cout << "Invalid option. Please enter a number between 1 and 6.";
    }
}

    
    


    
}
