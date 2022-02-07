#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

class LinkedList {
    private:
        Node *head, *tail;
    public:
        LinkedList() {
            head = NULL;
            tail = NULL;
        }
    void add_node(int n) {
        Node *tmp = new Node;
        tmp->data = n;
        tmp->next = NULL;

        if (head == NULL) {
            head = tmp;
            tail = NULL;
        }
        else {
            tail->next = tmp;
            tail = tail->next;
        }
        cout << head->data << endl;
    }

    void traversal() {
        Node *tmp;
        tmp = head;
        while (tmp->data != tail->data) {
            cout << tmp->data << ", ";
        }
        cout << head->data << " " << tail->data;
    }
};


int main() {
    LinkedList l;
    l.add_node(1);
    l.add_node(2);
    l.traversal();
    return 0;
}