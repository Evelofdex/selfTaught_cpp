#include <iostream>
using namespace std;

class stack{
    private:
    int top;
    static const int maksData = 5;
    int arr[maksData];

    public:
    stack(){ top = -1; }

    bool isEmpty(){
        if (top <= -1){
            return true;
        } else {
            return false;
        }
    }
    

    void push(){
        //cek penuh atau gk
        if (top + 1 == maksData){
            cout << "array penuh" << endl;
            return;
        } 

        top++;
        cout << "Masukan data: ";
        cin >> arr[top];
    }
    void peek(){
        //cek kosong atau gk
        if (isEmpty()){
            cout << "stack kosong" << endl;
        } else {
            for (int i = maksData - 1; i >= 0; i--){
                cout << arr[i] << endl;
            }
        }
    }
    void pop(){
        if (isEmpty()){ // cek kosong atau gk
            cout << endl << "mau hapus apaan, data masih kosong" << endl;
            return;
        }

        cout << endl << "data: " << arr[top] << " dihapus" << endl; //tampilan doang
        arr[top] = 0;
        top--;
    }

};

int main(){

    char pilihan;
    stack s;

    do{
        cout << "1. Input push data" << endl;
        cout << "2. Peek data" << endl;
        cout << "3. delete data" << endl;
        cout << "4. exit" << endl;
        cout << "===================" << endl;
        cout << "->";
        cin >> pilihan;
    
        switch(pilihan){
            case '1':
                s.push();
                break;
            case '2':
                s.peek();
                break;
            case '3':
                s.pop();
                break;
            case '4':
                break;
    
            default:
                cout << "input tidak valid" << endl;
                break;
        }
    } while(pilihan != '4');



}


