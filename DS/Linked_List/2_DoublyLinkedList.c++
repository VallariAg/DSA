# include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};
class Doubly_Linked_List {
    Node *head;
    Node *tail;
    public:
    Doubly_Linked_List() {
        head = NULL;
        tail = NULL;
    }
    void add_front(int );
	void add_after(Node* , int );
	void add_end(int );
	void delete_node(Node*);
	void forward_traverse();
	void backward_traverse();
}; 

int main(int argc, char* argv[]) {
    Doubly_Linked_List node;
    node.add_end(4);
    node.add_end(3);
    node.add_front(5);
    node.forward_traverse();
    node.backward_traverse();
    
    return 0;
}

//  ---------
void Doubly_Linked_List :: forward_traverse() {
    // trying add_after and delete_node methods while displaying
    // this->add_after(head, 12);
    // this->delete_node(head ->  next);
    Node* node = head;
    while(node -> next != NULL) {
        cout << node -> data <<  endl;
        node = node -> next;
    }
    cout << node -> data << endl;
}

void Doubly_Linked_List :: backward_traverse() {
    Node* node = tail;
    while(node -> prev != NULL) {
        cout << node -> data <<  endl;
        node = node -> prev;
    }
    cout << node -> data << endl;
}
void Doubly_Linked_List :: add_front(int value) {
    Node* new_node = new Node;
    new_node -> data = value;
    new_node ->  prev = NULL;
    if (head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }
    head -> prev = new_node;
    new_node -> next = head;
    head = new_node;
    return;
}

void Doubly_Linked_List :: add_end(int value) {
    Node* new_node = new Node;
    new_node -> next = NULL;
    new_node -> data = value;
    new_node -> prev = tail;
    if (head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }
    tail -> next = new_node;
    tail = new_node;
}

void Doubly_Linked_List :: add_after(Node* node, int value) {
    Node* new_node = new Node;
    new_node -> next = node -> next;
    new_node -> prev = node;
    new_node -> data = value;
    node -> next = new_node;
}

void Doubly_Linked_List :: delete_node(Node* node){
    if (head == node and tail == node) {
        head = NULL;
        tail = NULL;
    }
    else if (node == head) {
        head = node -> next;
        head -> prev = NULL;
    }
    else if (node == tail) {
        tail = node -> prev;
        tail -> next = NULL;
    }
    else {
        node -> prev -> next = node -> next;
        node -> next -> prev = node -> prev;
    }
    delete node;

}
