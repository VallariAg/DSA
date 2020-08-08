# include <cstdlib>
# include <iostream>


using namespace std;
struct Node {
    int data;
    struct Node *next;
};

void displayList(Node*);
void insertAtStart(Node**, int);
void insertAtEnd(Node**, int);
void deleteElement(Node**, int);
int searchElement(Node**, int);

int main(int argc, char* argv[]) {
    Node* head = NULL;


    insertAtEnd(&head, 3);
    displayList(head);
    cout << endl;

    insertAtStart(&head, 2);
    displayList(head);
    cout << endl;

    insertAtEnd(&head, 1);
    displayList(head);
    cout << endl; 

    deleteElement(&head, 5);
    displayList(head);
    cout << endl; 

    cout << searchElement(&head, 5);
    return 0;
}


void displayList(struct Node *node) {
    if (node == NULL) {
        cout << "List empty, can't display nothing!" << endl;
        return;
    }
    cout << node -> data << endl;
    if (node -> next == NULL) {
        return;
    }
    displayList(node -> next);
}
void insertAtStart(Node **head, int value){
    Node *new_node = new Node;
    new_node -> data = value;
    if (*head == NULL) {
        new_node -> next = NULL;
    }
    else{
        new_node -> next = *head;
    }
    *head = new_node;
};
void insertAtEnd(Node** head, int value) {
    Node *new_node = new Node;
    new_node -> data = value;
    new_node -> next = NULL;
  
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    Node *node = *head;
    while(node -> next != NULL){
        node = node -> next;
    }
    node -> next = new_node;
}

void deleteElement(Node** head, int value) {
    Node* node = *head;
    if (*head == NULL) { 
        cout << "List empty, can't delete from empty list!" << endl;
        return; 
    }
    Node* prev_node = new Node;
    while(node -> next != NULL){
        if (node -> data == value){
            if (node == *head){
                *head = node -> next;
            }
            else {
                prev_node -> next = node -> next;
            }
            delete node, prev_node;
            return;
        }
        prev_node = node;
        node = node -> next;
    }
    if (node -> data == value) {
        prev_node -> next = NULL;
        delete node, prev_node;
        return;
    }
    cout << value << " not in list." << endl;
}

int searchElement(Node** head, int value) {
    if (*head == NULL) {
        cout << "List empty!" << endl;
        return -1;
    }

    int index = 0;
    Node* node = *head;
    while(node -> next != NULL) {
        if(node -> data == value){
            return index;
        }
        node = node -> next;
        index++;
    }
    if (node -> data == value) {
        return index;
    }
    return -1;
}
