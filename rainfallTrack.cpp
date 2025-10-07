#include <iostream>
#include <vector>

using namespace std;


// first step is creating the nested vector 

vector<vector<vector<double>>> rainT; // will keep rain values

// make function for creating time span to be recorded
void timeSet(){
    // temp values 
    int years,months, weeks;

    // prompt user for how many years
    cout << "How many years do you want to keep track?"; 
    cin >> years;
    // prompt for how many months
    cout << "\nHow many months per year?"; 
    cin >> months;
    while(months > 12){ // in case they enter more than months in year
        cout << "\nThere's only 12 months in a year. Enter a valid number:";
        cin >> months;
    }

    // prompt for weeks per month
    cout << "\nHow many weeks per month?";
    cin >> weeks;
    while(weeks > 4){
        cout << "\nThere's only 4 weeks in a month. Enter a valid number:";
        cin >> weeks;
    }

    // now to resize the vector
    rainT.resize(years,vector<vector<double>>(months,vector<double>(10)));
}
