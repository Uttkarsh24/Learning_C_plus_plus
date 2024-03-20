# Question
Write a C++ program to determine whether a 2D array entered by the user is an
identity matrix or not, using the given Array class declaration. Below is the provided
class declaration:
Your program should implement the following member and friend functions:
- initialize_size(): This function initializes the number of rows and columns of the
matrix.
- declare_array(): This function dynamically allocates memory for the array based
on the specified number of rows and columns.
- initialize_Array(): This friend function initializes the elements of the array with
user input.
- display_array(): This friend function displays the elements of the array.
- check_identity(): This friend function checks whether the passed array is an
identity matrix or not. It returns 1 if the matrix is an identity matrix, and 0
otherwise. If the matrix is an identity matrix, display the message "Entered matrix
is identity". Otherwise, display the message "Entered matrix is not identity".
- deallocate_array(): This function deallocates the memory allocated to the array
using free().
- Write the main function to use the functions mentioned in the class declaration.
-Note: Adhere to the exact names for the functions and data members provided in the
class declaration. Deductions will be made for using alternative names. You may choose
your own names for any additional variables or objects required.
