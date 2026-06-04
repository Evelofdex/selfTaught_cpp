#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class node {
    public:
    int data;
    node* next;
};

class experiment{
    public:
        node* last;
        experiment() {
            last = NULL;
        }

        void input(int val){
            if (last == NULL){
                node* newnode = new node();
                newnode->data = val;
                newnode->next = newnode;
                last = newnode;
            } else {
                node* newnode = new node();
                newnode->data = val;
                newnode->next = last->next;
                last->next = newnode;
                last = last->next;
            }
        }

        void print(){
            if (last == NULL){
                cout << "List kosong" << endl;  
            }else{
                node* current = last->next;
                while (current != last){
                    cout << current->data << " -> ";
                    current = current->next;
                }
                cout << current->data << endl;
            }
        }
};

int main(){
    experiment exp;
    exp.input(12);
    exp.input(13);
    exp.input(14);
    exp.input(15);
    exp.print();
}