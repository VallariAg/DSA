# include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};
class Circular_Linked_List {
    Node* head;
    public:
    Circular_Linked_List() {
        head = NULL;
    }
    void add_front(int value);
    Node* getLastNode();
    void displayList();

};

int main(int argc, char* argv[]){
    Circular_Linked_List list1;
    list1.add_front(4);
    list1.add_front(5);
    list1.add_front(3);
    list1.displayList();
    return 0;
}

void Circular_Linked_List :: add_front(int value) {
    // Node* node = head;
    Node* new_node = new Node;
    new_node -> data = value;
    if (head == NULL) {
        new_node ->  next = new_node;
        head = new_node;
        return;
    }
    Node* last_node = getLastNode();    
    new_node -> next = head;
    head = new_node;
    last_node -> next = new_node;
}

Node* Circular_Linked_List :: getLastNode() {
    Node* node = head;
    while(node ->  next != head) {
        node = node -> next;
    }
    return node;
}

void Circular_Linked_List :: displayList() {
    Node* node = head;
    while(node ->  next != head) {
        cout << node -> data << endl;
        node = node -> next;
    }
    cout << node -> data << endl;
}
