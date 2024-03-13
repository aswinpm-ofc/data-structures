
#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList(); // Constructor
    ~LinkedList(); // Destructor
    bool isEmpty() const;
    void insertFront(int value);
    void insertEnd(int value);
    void removeFront();
    void removeEnd();
    void display() const;
    void printMenu() const;

private:
    Node* head; // Pointer to the first node
};

// Constructor: Initializes an empty linked list
LinkedList::LinkedList() {
    head = nullptr;
}

// Destructor: Frees memory by deleting all nodes
LinkedList::~LinkedList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Check if the linked list is empty
bool LinkedList::isEmpty() const {
    return head == nullptr;
}

// Insert a new node at the front of the list
void LinkedList::insertFront(int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

// Insert a new node at the end of the list
void LinkedList::insertEnd(int value) {
    Node* newNode = new Node{value, nullptr};
    if (isEmpty()) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Remove the first node from the list
void LinkedList::removeFront() {
    if (!isEmpty()) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Remove the last node from the list
void LinkedList::removeEnd() {
    if (!isEmpty()) {
        if (!head->next) {
            delete head;
            head = nullptr;
        } else {
            Node* current = head;
            while (current->next->next) {
                current = current->next;
            }
            delete current->next;
            current->next = nullptr;
        }
    }
}
//display the options  for user to select
void LinkedList::printMenu() const{
    std::cout <<" 1. Add a number at the end of the linked list." << std::endl;
    std::cout << "2. Remove a number from the beginning of the linked list."<< std::endl;
    std::cout << "3. Remove a number from the end of the linked list." << std::endl;
    std::cout << "4. insert a number at the beggineing of the linked list." << std::endl;
    std::cout << "5. display all the elemants in the inked list" << std::endl;
    std::cout << "6. exit the program" << std::endl;
}

// Display the contents of the linked list
void LinkedList::display() const {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}


