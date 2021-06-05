#include <iostream>

using namespace std;

//implement linear search
int linearSearch(int array[], int arraySize) {

    //delcare input
    int userInput;
    
    //print inital array
    for(int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    } 

    //ask user to input a number to find 
    cout << " enter a number to search in the array" << endl;
    cin >> userInput;

    //do the linear search to find the number
    for(int i = 0; i < arraySize; i++) {
        if(array[i] == userInput) {
            cout << " you found " << array[i] << " at index " << i << endl;
            return 0;
        } 
            
    }

    cout << "could not find " << userInput << " in the array." << endl;
    return -1;
   
}


int main() {

    int array[5] = { 38, 15, 9, 42, 16 };

    int arraySize = sizeof(array)/sizeof(array[0]);

    linearSearch(array, arraySize);

    return 0;

}
