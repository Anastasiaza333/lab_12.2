#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void doubleList(Node* head, int val) {
    Node* current = head;
    while (current != NULL) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = current->next;
        current->next = newNode;
        current = newNode->next;
    }
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int n, val;
    cout << "Enter the number of elements in the list: ";
    cin >> n;
    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = head;
        head = newNode;
    }
    cout << "Enter the value to duplicate: ";
    cin >> val;
    doubleList(head, val);
    printList(head);
    return 0;
}
/*#include <iostream>

struct Node {
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

void print_list(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

void duplicate_elements(Node*& head, int value) {
    Node *curr = head;
    while (curr != nullptr) {
        if (curr->data == value) {
            Node *new_node = new Node(value);
            new_node->next = curr->next;
            curr->next = new_node;
            curr = curr->next->next;
        } else {
            curr = curr->next;
        }
    }
}

int main() {
    // створюємо список
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(4);

    // дублюємо всі елементи зі значенням 2
    duplicate_elements(head, 2);

    // виводимо список після дублювання
    print_list(head);

    return 0;
}
*/