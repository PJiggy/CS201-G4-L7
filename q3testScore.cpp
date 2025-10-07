#include <iostream>
#include <vector>

using namespace std;

// create the vector for student scores 
vector<double> scores;

void testsAmount(){
    int tests; // temp variable for tests
    
    // prompt user to enter amount of tests to be graded
    cout << "Enter the amount of tests graded: ";  
    cin >> tests; 
    while(tests < 0){ // if users decides to be dumb
        cout << "How would you grade negative tests?...\nBe serious:"; 
        cin >> tests;
    }
    // now to resize the vector for the amount of tests
    scores.resize(tests,0); // resizes and sets values to 0
}

void testEnter(){
    // check if vector is empty
    if(scores.empty()){
        // call the testAmmount() to fill vector
        testsAmount();
    }

    // prompt for user to enter test scores
    cout << "Please enter " << scores.size() << " scores:";

    double value;// temp for value to be read in
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
void scoreCalculate(){
    double highest, lowest, total; // temp variables

    // check if vector is empty
    if(scores.empty()){
        // can just call the two prior functions here
        testsAmount();
        testEnter();
    }
    // now need to interate through array to calculate 
    // keep track of highest, lowest, then sum total for average

    for(int i = 0; i < scores.size(); i++){
        // check if highest
        if(scores[i] > highest){
            highest = scores[i];
        }
        if(scores[i] < lowest){
            lowest = scores[i];
        }
    }

    // now do the outputs 
    cout << "\nAverage score:" << total / scores.size();
    cout << "\nHighest score:" << highest;
    cout << "\nLowest score:" << lowest;
}


