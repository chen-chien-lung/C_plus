#include <iostream>

using namespace std;

void printNumber(int* numPtr){
    cout << *numPtr << endl;
}

void printLetter(char* letterPtr){
    cout << *letterPtr << endl;
}

//void pointer can accept any data type of pointer
void print(void* ptr, char type){
    switch (type)
    {
    case 'n':
        cout << *((int*)ptr) << endl;
        break;
    case 'c':
        cout << *((char*)ptr) << endl;
        break;
    default:
        break;
    }
}

int main(int argc, const char** argv) {

    int number = 5;
    char letter = 'a';

    // printNumber(&number);
    // printLetter(&letter);

    print(&number, 'n');
    print(&letter, 'c');

    return 0;
}