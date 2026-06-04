#include <iostream>
#include <deque>
using namespace std;

int main(){

    char x;
    int tumbal;
    deque<int> q;

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
                cout << "Masukan data: ";
                cin >> tumbal;
                q.(tumbal);
                break;
            case '2':
                // display data
                break;
            case '3':
                // front data
                cout << q.front() << endl;
                break;
            case '4':
                // back data
                cout << q.back() << endl;
                break;
            case '5':
                // delete
                q.pop();
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