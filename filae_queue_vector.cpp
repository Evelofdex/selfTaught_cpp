#include <iostream>
#include <vector>
using namespace std;

class queue{
    private:
    vector<int> data;
    int dat;
    int front;
    int rear;

    public:
    queue(){ front = rear = -1; }

    bool isEmpty(){ 
        if (front == -1 && rear == -1) return true;
        else return false;
    }

    void push(){
        cout << "Input data: ";
        cin >> dat;

        if (isEmpty()){
            front++;
            rear++;
        } else {
            rear++;
        }
        data.push_back(dat);
    }
    void displayFront(){
        //check empty or not
        if (isEmpty()){
            cout << "\nData still empty, cant display front\n\n";
            return;
        }

        cout << "\nFront data: "<< data.front() << endl << endl;
    }
    void displayRear(){
        if (isEmpty()){
            cout << "\nData still empty, cant diplay rear\n\n";
            return;
        }

        cout << "\nRear data: "<< data.back() << endl << endl;
    }
    void displayFull(){
        if (isEmpty()){
            cout << "\nData still empty, cant diplay full\n\n";
            return;
        }
        cout << endl;
        for (int i = data.size() - 1; i >= 0; i--){
            cout << data.at(i) << " ";
        }
        cout << endl;
    }
    void pop(){
        cout << "Deleted data: " << data.front() << endl << endl;
        data.erase(data.begin());
        front++;
    }
};

int main(){
    
    char pilihan;
    queue q;

    do{
        cout << "1. Push data\n";
        cout << "2. Display FRONT\n";
        cout << "3. Display REAR\n";
        cout << "4. Display all\n";
        cout << "5. Pop/Delete data\n";
        cout << "6. exit\n";
        cout << "=====================\n";
        cout << "-: ";
        cin >> pilihan;
    
        switch(pilihan){
            case '1':
                q.push();
                break;
            case '2':
                q.displayFront();
                break;
            case '3':
                q.displayRear();
                break;
            case '4':
                q.displayFull();
                break;
            case '5':
                q.pop();
                break;
            case '6':
                break;
            default:
                cout << "\nInput not valid\n\n";
                break;
        }
    } while (pilihan != '6');
}