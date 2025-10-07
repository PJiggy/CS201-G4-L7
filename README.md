# CS201-G4-L7
CSU EB CS201 Fall Semester. Group 4. Lab 7.
---------------------------------------------
Submission instructions:
1. Attach your C++ code file (.cpp).
• Make sure your code is well-indented and commented.
2. Attach screenshots of your executed program output covering
different test case scenarios.
3. Include Group number and names.
Lab Question 1: Student Scores
Write a C++ program that stores student test scores using a two-dimensional array. The
program should first ask the user to enter the number of students and the number of test
scores per student. Then, it should dynamically create a 2D array based on those values,
accept all the scores, and display each student’s average as well as the overall class average.
Requirements:
1. Allow the user to input the number of students and number of tests.
2. Use a dynamically sized 2D array (e.g., using `vector<vector<double>>`).
3. Display each student’s average score and the overall class average.
Example Input:
Enter number of students: 3
Enter number of tests per student: 2
Enter test scores for student 1: 90 85
Enter test scores for student 2: 78 88
Enter test scores for student 3: 95 92
Expected Output:
Average for student 1: 87.50
Average for student 2: 83.00
Average for student 3: 93.50
Class average: 88.00
Lab Question 2: Rainfall Tracker
Write a C++ program that uses a three-dimensional array (or nested vectors) to store
rainfall data. The program should ask the user how many years, months per year, and
weeks per month to record. It should then store rainfall data (in mm) for each week,
calculate the average monthly rainfall for each year, and display the results.
Requirements:
1. Accept dynamic input for number of years, months, and weeks.
2. Use a 3D structure (e.g., `vector<vector<vector<double>>>`).
3. Display the average rainfall per month for each year.
Example Input:
Enter number of years: 2
Enter number of months per year: 2
Enter number of weeks per month: 3
Enter rainfall (mm) for Year 1, Month 1 (3 weekly values): 10 12 8
Enter rainfall (mm) for Year 1, Month 2 (3 weekly values): 14 16 15
Enter rainfall (mm) for Year 2, Month 1 (3 weekly values): 9 11 10
Enter rainfall (mm) for Year 2, Month 2 (3 weekly values): 7 8 9
Expected Output:
Year 1 average rainfall per month:
Month 1: 10.00 mm
Month 2: 15.00 mm
Year 2 average rainfall per month:
Month 1: 10.00 mm
Month 2: 8.00 mm
Lab Question 3: Test Score Manager
Write a C++ program that uses an STL vector to store test scores entered by the user. The
program should first ask how many scores will be entered, then store all scores in a vector.
After input, display the average, highest, and lowest score.
Requirements:
1. Use an STL vector to dynamically store user-entered scores.
2. Allow the user to specify how many scores to enter.
3. Display the average, highest, and lowest scores using STL algorithms.
Example Input:
How many test scores do you want to enter? 4
Enter 4 scores: 88 92 75 95
Expected Output:
Average score: 87.50
Lowest score: 75.00
Highest score: 95.00