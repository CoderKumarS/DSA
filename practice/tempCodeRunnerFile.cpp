#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    int length() {
        int len = 0;
        Node* current = head;
        while (current) {
            len++;
            current = current->next;
        }
        return len;
    }

    void leftShift(int n) {
        if (n <= 0) {
            return;
        }

        int listLength = length();

        // If n is greater than or equal to the length of the list, it's equivalent to a full cycle.
        n = n % listLength;

        if (n == 0) {
            return; // No shift needed.
        }

        Node* current = head;
        Node* newHead = nullptr;
        Node* newTail = nullptr;

        // Traverse to the node just before the new head after shifting.
        for (int i = 0; i < listLength - n - 1; i++) {
            current = current->next;
        }

        newHead = current->next;
        newTail = newHead;

        // Move to the end of the shifted portion.
        while (newTail->next) {
            newTail = newTail->next;
        }

        // Connect the last node of the shifted portion to the original head.
        newTail->next = head;

        // Update the new head.
        head = newHead;

        // Set the next pointer of the node before the shifted portion to nullptr.
        current->next = nullptr;
    }
};

int main() {
    LinkedList myList;
    int n, val;

    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        myList.insert(val);
    }

    cout << "Enter the number of places to left shift: ";
    cin >> n;

    myList.leftShift(n);

    cout << "Linked list after left shift: ";
    myList.display();

    return 0;
}
