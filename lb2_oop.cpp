#include "lb2.h"

using namespace std;

namespace B {

    LinkedList::LinkedList() : head(nullptr) {}

    LinkedList::~LinkedList() {
        clear();
    }

    void LinkedList::addChar(char c) {
        Node* newNode = new Node(c);

        if (!head) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    void LinkedList::inputString(const string& str) {
        clear();
        for (char c : str) {
            addChar(c);
        }
    }

    void LinkedList::printReversedRecursive(Node* node) const {
        if (node == nullptr)
            return;

        printReversedRecursive(node->next);
        cout << node->data;
    }

    void LinkedList::printReversed() const {
        if (head == nullptr) {
            cout << "Список пуст." << endl;
            return;
        }
        printReversedRecursive(head);
        cout << endl;
    }

    void LinkedList::clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
    }

    bool LinkedList::isEmpty() const {
        return head == nullptr;
    }

} // namespace B
