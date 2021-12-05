#include <iostream>

using namespace std;

int main(int argc, const char** argv) {

    int luckyNumbers[5];
    
    for(int i = 0; i <5 ; i++ ){
        cout << "Number : ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << *(luckyNumbers+i) << " ";
    }
    


    return 0;
}