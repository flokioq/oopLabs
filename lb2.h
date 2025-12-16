#ifndef LB2_H
#define LB2_H

#include <iostream>
#include <string>

namespace B {
    void runDemo();
    class LinkedList {
    private:
        struct Node {
            char data;
            Node* next;
            Node(char d) : data(d), next(nullptr) {}
        };

        Node* head;

        void printReversedRecursive(Node* node) const;

    public:
        LinkedList();
        ~LinkedList();

        void addChar(char c);
        void inputString(const std::string& str);
        void printReversed() const;
        void clear();
        bool isEmpty() const;
    };

} // namespace B

#endif
