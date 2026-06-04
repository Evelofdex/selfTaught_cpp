#include <iostream>
#include <vector>
using namespace std;

class stack{
    private:
    vector<int> data;
    int dat;
    int top;


    public:
    stack(){ top = -1; }

    bool isEmpty(){
        if (top == -1 ) return true;
        else return false;
    }

    void push(){
        top++;
        cout << "Input data: ";
        cin >> dat;
        data.push_back(dat);
        cout << endl;
    }
    void display(){
        //checking
        if (isEmpty()){
            cout << "\nStack still empty, cant display\n\n";
            return;  
        } 
        //displaying
        cout << endl;
        for (int i = data.size() - 1; i >= 0; i--){
            if (i == top) cout << data.at(i) << " <- TOP"<< endl;    
            else cout << data.at(i) << endl;
        }
        cout << endl;
    }
    void pop(){
        //checking
        if (isEmpty()){
            cout << "\nStack still empty, cant delete\n\n";
            return;  
        } 
        // deleting
        cout << "\nData stack " << "'" << data.at(top) << "' " << "is deleted\n";
        data.pop_back();
        top--;
    }
};

int main(){

    char pilihan;
    stack s;

    do{
        cout << "1. Push data\n";
        cout << "2. Display data\n";
        cout << "3. Pop/Delete data\n";
        cout << "4. exit\n";
        cout << "=====================\n";
        cout << "-: ";
        cin >> pilihan;
    
        switch(pilihan){
            case '1':
                s.push();
                break;
            case '2':
                s.display();
                break;
            case '3':
                s.pop();
                break;
            case '4':
                break;
            default:
                break;
        }
    } while (pilihan != '4');
}




