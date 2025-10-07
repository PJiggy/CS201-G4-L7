#include <iostream>
#include <vector>

using namespace std;

// create the vector for student scores 
vector<double> scores;

void testsAmmount(){
    int tests; // temp variable for tests
    
    // prompt user to enter amount of tests to be graded
    cout << "Enter the amount of tests graded: ";  
    cin >> tests; 
    while(tests < 0){ // if users decides to be dumb
        cout << "How would you grade negative tests?...\nBe serious:"; 
        cin >> tests;
    }
    // now to resize the vector for the amount of tests
    scores.resize(tests);
}

void testEnter(){
    // prompt for user to enter test scores
    cout << "Please enter " << scores.size() << " scores:";

    int value;// temp for value to be read in
    // need to enter all values
    for(int i = 0; i < scores.size(); i++){
        // output a space for formatting between values
        cout << " ";
        cin >> value;
        while(value < 0){ // only if user enters negative
            cout << "\nTests cannot be negative scores. Continue:";
            cin >> value; 
        }
        scores[i] = value; // store value at location
    }
}

// need to do the calculations function
