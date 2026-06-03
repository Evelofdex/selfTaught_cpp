#include <iostream>
using namespace std;

class stack{
    private: 
    int top;
    static const int maxArr = 5;
    int arr[maxArr];

    public:
    stack (){ top = -1; } //starts from zero

    void inputData(){
        // check if stack is full or not
        if (top + 1 == maxArr){
             cout << endl << "stack is full, cannot add more" << endl;
        } else {
            top++;
            cout << "Input data: ";
            cin >> arr[top];
        }
        cout << endl;
    }
    
    void displayData(){
        cout << endl << "=========== Stacks #" << endl;
        for (int i = maxArr - 1; i >= 0; i--){
            
            if (top < 0){
                cout << endl << "Data stack still empty!" << endl << endl;
                break;
            } else {
                if (top == i){
                    cout << arr[i] << " <- TOP " << endl;    
                } else {
                    cout << arr[i] << endl;
                }
            }
            
        }
        cout << "=========== Stacks #" << endl << endl;
    }

    void deleteData(){
        if (top < 0){
            cout << endl << "Stack is underflow/empty" << endl << endl;
        } else {

            cout << endl << "Data " << "'" << arr[top] << "' " << "is now deleted" << endl << endl;
            arr[top] = 0;
            top--;
        }
    }
};


int main(){

    char input;
    stack s;


    do {
        cout << "1. Input data" << endl;
        cout << "2. Display Stack" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Exit" << endl;
        cout << "==================" << endl;
        cout << "-: ";
        cin >> input;
    
        switch(input){
            case '1':
                // input data
                s.inputData();
                break;
            case '2':
                // display
                s.displayData();
                break;
            case '3':
                // Delete
                s.deleteData();
                break;
            case '4':
                //exit
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    } while(input != '4');
}