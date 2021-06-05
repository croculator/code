//Binary search
//works only with sorted arrays
//works by doing "divide and conquer" on an ordered array
//runtime complexity of O(log n)
#include <iostream>
using namespace std;

int binarySearch(int array[], int arraySize);

int main() {
    
    int array[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int arraySize = sizeof(array)/sizeof(array[0]);

    binarySearch(array, arraySize);
    
    return 0;
}

int binarySearch(int array[], int arraySize) {
    
    int userInput;
    int low = 0;
    int midpoint;
    int high = arraySize;

    //print array
    for(int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }

    cout << "enter a number to search. " << endl;
    cin >> userInput;

        //while userInput is not found 
        while (low <= high) {
            //calculate the midpoint of the array
            midpoint= low + (high - low)/ 2;
    
            //array[midpoint] < userInput
            if (array[midpoint] < userInput) {
                low = midpoint +  1;
            }
            //if array[midpoint] is greater than the user input
            //set the highpoint to the midpoint + 1
            if (array[midpoint] > userInput) {
                high = midpoint - 1;
            }
            if (array[midpoint] == userInput) {
                cout << "found number " << array[midpoint] << " ";
                return 0;
            }
        }

        cout << "could not find " << userInput << endl;
    return 0;
    
}
