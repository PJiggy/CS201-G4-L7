#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    
    //declaring variables for both students and tests
    int numStudents, numTests;

    //Ask for the number of students and tests
    cout<<"Enter number of students: ";
    cin>>numStudents;

    cout<<"Enter number of tests per student: ";
    cin>>numTests;
    //Dynamically create a 2D array to store the test scores
    vector<vector<double>>scores(numStudents,vector<double>(numTests));

    //Input test scores for each of the students
    for(int i = 0; i < numStudents; ++i) {
        cout<<"Enter test scores for student: "<< i+1 <<": ";
        for (int j = 0; j < numTests; ++j) {
            cin >> scores[i][j];
        }
    }
    //Variable to store the total class average
    double classTotal=0;

    //Display each student's average score and make a class average
    cout<<fixed<<setprecision(2);
    for(int i=0; i<numStudents; ++i) {
        double studentTotal=0;
        
        // Sum all test scores for the current student
        for (int j=0; j < numTests; ++j) {
            studentTotal += scores[i][j];
        }


        // Calculate the average for the current student
        double studentAverage=studentTotal/numTests;
        cout<<"Average for student " << i + 1 << ": " << studentAverage << endl;


        // Add the student's average to the class total
        classTotal += studentAverage;
    }


    // Calculate the overall class average
    double classAverage=classTotal/numStudents;


    // Display the class average
    cout<<"Class average: "<<classAverage<<endl;


    return 0;
}
