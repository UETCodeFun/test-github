#include<iostream>
#include<string>

using namespace std;

struct Node{
    int data;
    Node *next;
};

typedef struct Node *queue;

bool IsEmpty(queue q){
    return q = NULL;
}
Node *createNode(int data){
    Node *p = new Node();
    if ( p == NULL){
        return p;
    }
    p -> next = NULL;
    p -> data = data;
}
int endQueue (queue &q, int data){ // chen data vao queue
    Node *p = createNode(data);
    if ( q = NULL ){
        q = p;
    }
    else{
        Node *ptr = q;
        while( ptr != NULL && ptr -> next != NULL ){
            ptr = ptr -> next;
    }
    // ptr chinh la node cuoi cung trong danh sach lien ket
    ptr -> next = p; 
    }
}
int peek ( queue q){
    if (!IsEmpty(q)){
        return q -> data;
    }
    else return 0;
}
int deQueue (queue &q){ //xoa phan tu
    if(IsEmpty(q)){
        int data = q -> data;
        Node *p = q;
        q = q -> next;
        delete(q);        // giai phong bo nho
        return data;
    }
    else return 0;
}
int main()
{
    queue q = NULL;
    endQueue(q, 10);
    endQueue (q, 100);
    endQueue(q, 100);
    endQueue(q, 10000);
    endQueue (q, 10000);
    endQueue(q, 99999);
    cout << "Queue rong ?" << IsEmpty(q) << endl;
    cout << "Fir    st element of Queue" << peek(q) << endl;
    while (!IsEmpty(q)){
        int data = peek(q);
        deQueue(q);
        cout << " " << data << endl;
    }
    cout << "Queue rong ? " << IsEmpty(q) << endl;
    return 0;
}