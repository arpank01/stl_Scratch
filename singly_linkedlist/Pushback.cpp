#include <iostream>
using namespace std;
typedef struct node {
        int val;
        node* link;
} node;
// head node
node* head = new node;
// tail node
node* lastnode = head;
// creating a node at the end
void createnode(node* ptr) {
        ptr->link = new node;
        // updating the lastnode pointer to the pointer pointing towards the
        // last node
        lastnode = ptr->link;
        // ending the list
        lastnode->link = nullptr;
}
// the push back function, creates a node at last and updates its value part
// with the given integer input;
void pushback(int x) {
        createnode(lastnode);
        lastnode->val = x;
}
int main() {
        for (int i = 0; i < 6; i++) {
                pushback(i);
        }
        node* copy = head->link;
        while (copy != nullptr) {
                cout << copy->val << endl;
                copy = copy->link;
        }
        return 0;
}
