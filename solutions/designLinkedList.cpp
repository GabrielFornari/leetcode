class MyLinkedList {
private:
    struct Node{
        int val;
        Node* next;
        Node* prev;
        Node(int x) : val(x), next(nullptr), prev(nullptr) {}
    };
    Node *head;
    int size;
    
public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= size)
            return -1;
        Node *tmp = head;
        for(int i=0; i<index; i++)
            tmp = tmp->next;
        
        return tmp->val;
    }
    
    void addAtHead(int val) {
        Node *newNode = new Node(val);
        //newNode->val = val;
        newNode->next = head;
        newNode->prev = nullptr;
        if(head)
            head->prev = newNode;
        head = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        if(head == nullptr)
            return addAtHead(val);
        
        Node *tmp = head;
        Node *newNode = new Node(val);
        while(tmp->next != nullptr)
            tmp = tmp->next;
        tmp->next = newNode;
        newNode->prev = tmp;
        //newNode->val = val;
        //newNode->next = nullptr;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0 || index > size)
            return;
        if(index == 0)
            return addAtHead(val);
        
        Node *tmp = head;
        Node *newNode = new Node(val);        
        for(int i=1; i<index; i++)
            tmp = tmp->next;
        newNode->next = tmp->next;
        newNode->prev = tmp;
        if(tmp->next)
            tmp->next->prev = newNode;
        tmp->next = newNode;
        //newNode->val = val;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size)
            return;
        
        Node *aux;
        if(index == 0){
            if(head->next)
                head->next->prev = nullptr;
            aux = head;
            head = head->next;
            delete aux;
            size--;
            return;
        }
        Node *tmp = head;
        for(int i=1; i<=index; i++)
            tmp = tmp->next;
        
        cout << "Deleting: " << tmp->val << endl;
        
        aux = tmp;
        tmp->prev->next = tmp->next;
        
        cout << "something" << endl;
        if(tmp->next)
            tmp->next->prev = tmp->prev;
        delete aux;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */