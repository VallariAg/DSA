# include <iostream>
# include <list>

using namespace std;
// list - doubly linked list
// forward_list - singly linked list
void displayList(list<int> list1){
    for (auto it = list1.begin(); it != list1.end(); ++it) 
        cout << ' ' << *it; 
    cout << endl;
}
int main(int argc, char* argv[]){
    list<int> list1{1, 2 ,3};
    list1.insert(list1.begin(), 12);
    displayList(list1);
    list1.push_back(31);
    displayList(list1);
    list1.push_front(0);
    displayList(list1);
    list1.reverse();
    displayList(list1);
    return 0;
}
