#include <iostream>
using namespace std;

class node{
    public:

    int data;
    node *next;
};

class queue{
    private:
    int data;
    node *front;
    node *rear;

    public:
    queue(){ front = rear = NULL; }

    bool isEmpty(){
        if (front == NULL && rear == NULL){
            return true;
        } else {
            return false;
        }
    }

    void input(){
        cout << "Masukan data: ";
        cin >> data;

        node *newNode = new node();
        
        if (isEmpty()){ // data pertama
            newNode->data = data;
            newNode->next = NULL;
            rear = front = newNode;
        } else { // data selanjutnya
            newNode->data = data;
            newNode->next = NULL;
            rear->next = newNode;
            rear = rear->next;
        }
    }

    void peek(){
        while(rear != NULL){
            
        }
    }

    void pop(){
        rear = NULL;

    }



};

int main(){

}