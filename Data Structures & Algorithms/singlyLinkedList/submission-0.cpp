class ListNode {
public:
    int val_;
    ListNode* next = nullptr;

    ListNode(int val) {
        val_ = val;
    }
};


class LinkedList {
public:
    ListNode* head;
    ListNode* tail;

    LinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    int get(int index) {
        ListNode* curr = head;
        int i=0;

        while(curr!=nullptr){
            if(i==index){
                return curr->val_;
            }
            curr=curr->next;
            i++;

        }
        return -1;
    }

    void insertHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next=head;
        head = newNode;
        if(tail==nullptr){
            tail = newNode;
        }

    }
    
    void insertTail(int val) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
        else{
        tail->next=newNode;
        tail = newNode;
        }
    }

  bool remove(int index) {
    if (head == nullptr) {
        return false;
    }

    if (index == 0) {
        ListNode* toDelete = head;
        head = head->next;

        if (head == nullptr) {
            tail = nullptr;
        }

        delete toDelete;
        return true;
    }

    int i = 0;
    ListNode* curr = head;

    while (i < index - 1 && curr != nullptr) {
        curr = curr->next;
        i++;
    }

    if (curr == nullptr || curr->next == nullptr) {
        return false;
    }

    ListNode* toDelete = curr->next;
    curr->next = curr->next->next;

    if (toDelete == tail) {
        tail = curr;
    }

    delete toDelete;
    return true;
}

    vector<int> getValues() {
        vector<int> res;
    ListNode* curr = head;

    while (curr != nullptr) {
        res.push_back(curr->val_);
        curr = curr->next;
    }

    return res;
    }
};
