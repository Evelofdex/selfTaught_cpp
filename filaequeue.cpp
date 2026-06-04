#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
};

class queue{
    public:
        node* front;
        node* rear;
        queue(){
            front = rear = NULL;
        }

        void push(int val){
            if(front == NULL && rear == NULL){
                node* newnode = new node();
                newnode->data = val;
                newnode->next = NULL;
                front = rear = newnode;
            }else{
                node* newnode = new node();
                newnode->data = val;
                newnode->next = NULL;
                rear->next = newnode;
                rear = rear->next;
            }   
        }

        int empty(){
            if (front == NULL && rear == NULL){
                return -1;
            }else{
                return 1;
            }
        }

        void pop(){
            node *temp;
            if (front == NULL && rear == NULL){
                cout << "queue is empty\n";
            }else if(front == rear){
                temp = front;
                front = rear = NULL;
                cout << "poped data: " << temp->data << endl;
            }else{
                temp = front;
                front = front->next;
                cout << "poped data: " << temp->data << endl;
            }
        }

        void display(){
            if (front == NULL && rear == NULL){
                cout << "queue is empty\n";
            }else{
                node* current;
                current = front;
                while(current != NULL){
                    cout << current->data << " -> ";
                    current = current->next;
                }
                cout << endl;
            }
        }
        
};

int main(){
    int val;
    char choice;
    queue q;

    while(choice != '4'){
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. display\n";
        cout << "4. exit\n";
        cout << "choice: ";
        cin >> choice;

        switch(choice){
            case '1':
                cout << "Add number: ";
                cin >> val;
                q.push(val);
                cout << endl;
                break;
            case '2':
                q.pop();
                cout << endl;
                break;
            case '3':
                q.display();
                cout << endl;
                break;
            case '4':
                break;

        }
    }
}