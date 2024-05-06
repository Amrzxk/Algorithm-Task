/*
This program calculates the absolute difference between the sums of the primary and secondary diagonals of a square matrix.

Function: diagonalDifference
Purpose: Calculates the absolute difference between the sums of the primary and secondary diagonals of a square matrix.
Parameters:
- arr: 2D array representing the square matrix
- n: Size of the square matrix
Return Value: The absolute difference between the sums of the primary and secondary diagonals.

Function: main
Purpose: Reads input matrix from the user, calculates the diagonal difference, and displays the result.
Steps:
1. Prompt the user to enter the size of the matrix.
2. Read the elements of the matrix from the user.
3. Calculate the diagonal difference using the diagonalDifference function.
4. Display the input matrix.
5. Display the diagonal difference.
Variable: MAX_SIZE
Variable: primarySum, secondarySum


Pseudocode:

function diagonaldifference(arr, n)
    primarysum = 0
    secondarysum = 0
    
    // Calculate the sum of the primary diagonal
    for i = 0 to n
        primarysum += arr[i][i]

    // Calculate the sum of the secondary diagonal
    for i = 0 to n
        secondarysum += arr[i][n - i - 1]

    // Calculate the difference
    diagdiff = primarysum - secondarysum

    // Return the absolute difference
    if diagdiff < 0 then
        return -diagdiff
    else
        return diagdiff

main
    output "this code uses an iterative algorithm to calculate the absolute diagonal difference"
    
    // Input matrix size
    input n
    output "enter the size of matrix:"
    
    // Initialize the array matrix
    declare matrix[max_size][max_size]

    // Input the elements of the matrix
    output "enter the elements of the matrix:"
    for i <- 0 to n
        for j <- 0 to n
            input matrix[i][j]

    // Display matrix
    output "your matrix:"
    for x <- 0 to n
        for y <- 0 to n
            for z <- 0 to n
                output " "
            output matrix[x][y]
        output "\n"

    // Display diagonal difference
    output "the diagonal difference:", diagonaldifference(matrix, n)

*/


#include <iostream>

using namespace std;
const int MAX_SIZE = 100;

int diagonalDifference(int arr[MAX_SIZE][MAX_SIZE], int n) {
    int primarySum = 0, secondarySum = 0;
    
    // Calculate the sum of the primary diagonal
    for (int i = 0; i < n; ++i) {
        primarySum += arr[i][i];
    }
    
    // Calculate the sum of the secondary diagonal
    for (int i = 0; i < n; ++i) {
        secondarySum += arr[i][n - i - 1];
    }
    
    //function to calclate the difference
     int diagDiff = primarySum - secondarySum;
    //return the absolute
      if (diagDiff < 0) {
        return -diagDiff;
    } else {
        return diagDiff;
    }

}

int main1() {
    cout << "This code uses an iterative algorithm to calculate the absolute diagonal difference" << endl;
    //input matrx size
    int n;
    cout << "Enter the Size of matrix:" << endl;
    cin >> n;

    //initialize the array matrix
    int matrix[MAX_SIZE][MAX_SIZE];
    
    // Input the elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    
   // Display matrix
    cout << "Your matrix:";
    for (int x = 0; x < n; ++x) {
        cout << "\n";
        for (int y = 0; y < n; ++y) {
            //creation of n spaces
            for (int z = 0; z < n; ++z) {
                cout << " ";
            }
            cout << matrix[x][y];
        }
    }
    cout << endl;


    //display diagonal difference

    cout << "The diagonal difference:" << diagonalDifference(matrix, n) << endl;
    
    return 0;
}
 
 /*
This code calculates the absolute difference between the sums of the primary and secondary diagonals of a square matrix using recursive algorithms.

Functions:
1) primarySum
  - Purpose: Recursively calculates the sum of the primary diagonal of the matrix.
  - Parameters:
    - matrix: The square matrix.
    - n: Size of the matrix.
    - row: Current row index.
    - col: Current column index.
  - Returns: The sum of the primary diagonal elements.
2) secondarySum
  - Purpose: Recursively calculates the sum of the secondary diagonal of the matrix.
  - Parameters:
    - matrix: The square matrix.
    - n: Size of the matrix.
    - row: Current row index.
    - col: Current column index.
   - Returns: The sum of the secondary diagonal elements.
3) diagonalDifference
  - Purpose: Calculates the absolute difference between two integers.
  - Parameters:
    - x: First integer.
    - y: Second integer.
  - Returns: The absolute difference between x and y.
Main Function:
Purpose: Reads the size and elements of the square matrix from the user, calculates the sums of the primary and secondary diagonals using recursive functions, calculates the absolute diagonal difference, and displays the results.
Steps:
Prompt the user to enter the size of the matrix.
Read the elements of the matrix from the user.
Display the input matrix.
Calculate the sum of the primary diagonal using primarySum function.
Calculate the sum of the secondary diagonal using secondarySum function.
Calculate the absolute diagonal difference using diagonalDifference function.
Display the sums of the primary and secondary diagonals, and the diagonal difference.
Variables:
MAX_SIZE: Maximum size for the matrix.
matrix: Square matrix to store input elements.
primarysum: Sum of the primary diagonal elements.
secondarysum: Sum of the secondary diagonal elements.
diagdiff: Absolute diagonal difference.


Pseudocode:

function primarysum(matrix, n, row, col)
    if row >= n or col >= n then
        return 0
    else
        return matrix[row][col] + primarysum(matrix, n, row + 1, col + 1)

function secondarysum(matrix, n, row, col)
    if row >= n or col < 0 then
        return 0
    else
        return matrix[row][col] + secondarysum(matrix, n, row + 1, col - 1)

function diagonaldifference(x, y)
    diagdiff = x - y
    if diagdiff < 0 then
        return -diagdiff
    else
        return diagdiff

main
    output "this code uses a recursive algorithm to calculate the absolute diagonal difference"
    
    input n
    output "enter the size of matrix:"
    
    declare matrix[max_size][max_size]

    output "enter the elements of the matrix:"
    for i = 0 to n
        for j = 0 to n
            input matrix[i][j]

    output "your matrix:"
    for x = 0 to n
        for y = 0 to n
            for z = 0 to n
                output " "
            output matrix[x][y]
        output "\n"

    primarysum = primarysum(matrix, n, 0, 0)
    secondarysum = secondarysum(matrix, n, 0, n - 1)
    diagdiff = diagonaldifference(primarysum, secondarysum)

    output "the diagonal difference:", diagdiff


*/


// Recursive function to calculate the sum of the primary diagonal
int primarySum(int matrix[][MAX_SIZE], int n, int row, int col) {
    if(row >= n || col >= n) // Base case: if row or column exceeds matrix size, return 0
        return 0;
    else
        return matrix[row][col] + primarySum(matrix, n, row + 1, col + 1); // Add current element and move to next diagonal element
}

// Recursive function to calculate the sum of the secondary diagonal
int secondarySum(int matrix[][MAX_SIZE], int n, int row, int col) {
    if(row >= n || col < 0) // Base case: if row exceeds matrix size or column is less than 0, return 0
        return 0;
    else
        return matrix[row][col] + secondarySum(matrix, n, row + 1, col - 1); // Add current element and move to next diagonal element
}

// function to calculate the difference
int diagonalDifference(int x , int y){
    int diagdiff = x-y;
// return the absolute
    if (diagdiff < 0)
        return -diagdiff;
    else
        return  diagdiff;
}


int main() {
    cout << "This code uses a recursive algorithm to calculate the absolute diagonal difference" << endl;
    //input matrx size
    int n;
    cout << "Enter the Size of matrix:" << endl;
    cin >> n;

    //initialize the array matrix
    int matrix[MAX_SIZE][MAX_SIZE];
    
    // Input the elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    
   // Display matrix
    cout << "Your matrix:";
    for (int x = 0; x < n; ++x) {
        cout << "\n";
        for (int y = 0; y < n; ++y) {
            //creation of n spaces
            for (int z = 0; z < n; ++z) {
                cout << " ";
            }
            cout << matrix[x][y];
        }
    }
    cout << endl;
     int primarysum = primarySum(matrix , n ,0 ,0);
     int secondarysum = secondarySum(matrix , n ,0 ,n-1);
     int diagdiff = diagonalDifference(primarysum , secondarysum);

    //display diagonal difference
    cout << "The diagonal difference:" <<   diagdiff << endl;
    
    return 0;
}


/*
as for the time complexity of the two algorithms:
they both have nested for loops for inserting the items into the array matrices
,making the time complexity for both of them O(n)
but the iterative approach can be faster due to not needing functions calls.    
*/