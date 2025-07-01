// // student_average_calculator.cpp

// #include <iostream> // Required for input/output operations (cin, cout)
// #include <string>   // Required for using string data type
// #include <vector>   // Required for using vector to store grades
// #include <numeric>  // Required for std::accumulate to sum up grades
// #include <iomanip>  // Required for std::setprecision and std::fixed for output formatting

// int main() {
//     // --- 1. Declare Variables ---
//     std::string studentName;
//     int numGrades;
//     std::vector<double> grades; // Using a vector to store a dynamic number of grades
//     double sumGrades = 0.0;
//     double average = 0.0;

//     // --- 2. Get Student Name ---
//     std::cout << "--- Student Average Calculator ---" << std::endl;
//     std::cout << "Enter student's name: ";
//     // Use getline to read the full name, including spaces
//     std::getline(std::cin, studentName);

//     // --- 3. Get Number of Grades ---
//     std::cout << "Enter the number of grades for " << studentName << ": ";
//     // Loop until a valid positive integer is entered for the number of grades
//     while (!(std::cin >> numGrades) || numGrades <= 0) {
//         std::cout << "Invalid input. Please enter a positive number for grades: ";
//         std::cin.clear(); // Clear the error flag
//         // Ignore remaining characters in the input buffer up to the newline
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     }

//     // Clear the buffer after reading numGrades to prevent issues with subsequent getline
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

//     // --- 4. Get Grades from User ---
//     std::cout << "\nEnter " << numGrades << " grades:" << std::endl;
//     for (int i = 0; i < numGrades; ++i) {
//         double grade;
//         std::cout << "Grade " << (i + 1) << ": ";
//         // Loop until a valid double is entered for each grade
//         while (!(std::cin >> grade) || grade < 0 || grade > 100) {
//             std::cout << "Invalid input. Please enter a grade between 0 and 100: ";
//             std::cin.clear(); // Clear the error flag
//             // Ignore remaining characters in the input buffer
//             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//         }
//         grades.push_back(grade); // Add the valid grade to the vector
//     }

//     // --- 5. Calculate Sum of Grades ---
//     // std::accumulate from <numeric> header is a convenient way to sum elements in a range
//     sumGrades = std::accumulate(grades.begin(), grades.end(), 0.0);

//     // --- 6. Calculate Average ---
//     if (numGrades > 0) {
//         average = sumGrades / numGrades;
//     } else {
//         // Handle the case where no grades were entered (though input validation prevents this for now)
//         average = 0.0;
//     }

//     // --- 7. Display Results ---
//     std::cout << "\n--- Calculation Results ---" << std::endl;
//     std::cout << "Student Name: " << studentName << std::endl;
//     std::cout << "Number of Grades: " << numGrades << std::endl;
//     std::cout << "Grades Entered: ";
//     for (size_t i = 0; i < grades.size(); ++i) {
//         std::cout << grades[i];
//         if (i < grades.size() - 1) {
//             std::cout << ", ";
//         }
//     }
//     std::cout << std::endl;

//     // Use std::fixed and std::setprecision to display the average with two decimal places
//     std::cout << std::fixed << std::setprecision(2);
//     std::cout << "Total Sum of Grades: " << sumGrades << std::endl;
//     std::cout << "Average Grade: " << average << std::endl;

//     std::cout << "\nThank you for using the Student Average Calculator!" << std::endl;

//     return 0; // Indicate successful program execution
// }
