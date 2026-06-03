#include <iostream>
#include <array>
using namespace std;


class queue{
    private:
    static const int maxData = 5;
    array<int, maxData> data;
    int front, back, num;


    public:
    queue(){ front = -1; back = -1; } // set to -1

    void insertData(){
        // check wether queue is full or not
        if (back + 1 >= 5){
            cout << "Queue overflow/is full" << endl;
            return;
        } 

        cout << "Input data: ";
        cin >> num;

        // if its not full/for the first queue
        if (front <= -1){
            front++;
            back++;
        } else { // if its after the first time and so on
            if (front == back){
                front = 0;
                data[0] = data[back];
                back = 1;
            }
            back++;
        }
        
        data[back] = num;
    }
    void displayData(){
        for (int i = 0; i < maxData; i++){
            cout << data[i] << " ";
        }
        cout << endl;
        
    }
    void frontData(){
        cout << "front data is: " << data[front];
    }
    void backData(){
        cout << "back data is: " << data[back];
    }
    void deleteData(){
        //check if queue is empty or not
        if (back <= -1 || front <= -1){
            cout << "queue underflow/empty" << endl;
            return;
        }

        data[front] = 0;
        front--;

    }

};

int main(){

    char x;

    do{
        cout << "1. Insert Data" << endl;
        cout << "2. Display Data" << endl;
        cout << "3. check Front Data" << endl;
        cout << "4. check back Data" << endl;
        cout << "5. Delete one queue data" << endl;
        cout << "6. exit" << endl;
        cout << "=============================" << endl;
        cout << "-: ";
        cin >> x;

        switch(x){
            case '1':
                // insert data
                break;
            case '2':
                // display data
                break;
            case '3':
                // front data
                break;
            case '4':
                // back data
                break;
            case '5':
                // delete
                break;
            case '6':
                //exit
                break;
            default:
                cout << "Input invalid" << endl;
                break;
        }

    } while(x != '6');    


}