#include<iostream>
using namespace std;


class Node{
    Node* next;
    int data;
    
    friend class LinkedList;
};

class LinkedList{
private:
    Node* head;
    Node* tail;
    int n;
public:
    LinkedList();
    int size();
    bool empty();
};
LinkedList::LinkedList(){
    head = tail = nullptr;
    n = 0;
}
int LinkedList::size(){
    return n;
}
bool LinkedList::empty(){
    return size() == 0;
}


class Node{
    Node* next;
    int data;
};


int main(){
    int a = 1, b = 2;
    cout << a + b;

}

int main(){
    
}
