// FibonacciSeries.cpp

#include <iostream>
#include <vector>
using namespace std;

//Function to calculate up to the nth element in the fibonacci series
//This algorithm has a time complexity of O(n)
//Implementing it recursively would be O(2^n)
vector<int> fibSerios(int myNum) {
    int holdNum = 0;
    int current = 1;
    int prev = 1;
    vector<int> myVector;

    myVector.push_back(prev);
    for (int i = 0; i < myNum; i++) { //This loop runs myNum times
        holdNum = prev;
        prev = current;
        current = prev + holdNum;
        myVector.push_back(prev);
    }
    return myVector;
}

int main()
{
    vector<int> myVector = fibSerios(10);
    for (int i = 0; i < 10; i++) {
        cout << myVector[i] << ',';
    }
}
