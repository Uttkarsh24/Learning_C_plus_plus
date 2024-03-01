# LAB EXERCISE 3

## Questions:-

1. Write C++ Program to swap two variable using reference variables.
2. Write a function that finds the minimum and the maximum value in an array of N integers.
Inputs to the function are the array of integers, an integer variable containing the length of the
array and references to integer variables that will contain the minimum and the maximum
values. The function prototype is:
void minmax( int array[], int length, int& min, int & max);
3. Create a four-function calculator for fractions. Here are the formulas for the four arithmetic
operations applied to fractions:
Addition: a/b + c/d = (a*d + b*c) / (b*d)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Multiplication: a/b * c/d = (a*c) / (b*d)
Division: a/b / c/d = (a*d) / (b*c)
The user should type the first fraction (two values a and b), an operator, and a second fraction
(two values c and d). The program should then display the results in fraction ie. (Numerator/
denominator).
4. Write four overloaded function to perform addition of different types as follows: First function
to add three integers, second to add three floats, third function to add three doubles, and fourth
to add three long doubles. Call these functions from main function.
5. Write a function that accepts two arguments: a string name of a movie and an integer running
time in minutes. Provide a default value for the minutes so that if you call the function without
an integer argument, the minutes default to 90. Write a main () function that proves that you
can call the function with a string argument alone as well as with a string and an integer.
6. Create a class rectangle with attributes length and width. Provide member functions that
calculate the perimeter and area of the rectangle. Provide member functions to get the values
from users and display the values of member variables. Write a program to test the class.

7. Create a class named Shirt that has the public data members collarsize and sleeveLength.
Create a class named Pants that has the public data members waistSize and inSeam. Write a
program that declares one object of each type Shirt and Pants and assigns values to the objects’
data fields. Write two overloaded functions named displayClothingFacts(). One version of the
function takes a Shirt object as an argument; the other version takes a Pants object. Each
version displays the facts about the piece of clothing. Your main() function should demonstrate
that you can call displayClothingFacts() with either type of clothing.
8. Define a class named Movie. Include private fields for the title, year, and name of the director.
Include three public functions with the prototypes void Movie::setTitle(char *); , void
Movie::setYear(int); and void Movie::setDirector(char *);. Include another function that
displays all the information about a Movie. Write a main() function that declares a movie
object named myFavoriteMovie. Set and display the object’s fields.
9. Write a class definition for an order class for a nightclub that contains a table number, a
server’s name, and the number of patrons at the table. Include a private static data member for
the table minimum charge, which is $4.75. Write a main() function that declares no object of
order class type, but uses a static member function to display the table minimum charge.
Advanced Problems:
10. An automobile company has serial number for engine parts starting from AA0 to FF9.
The other characteristics of parts to be specified in a structure are: Year of
manufacturing, material (Steel, Aluminum, Iron etc.) and quantity manufactured.
Write a C++ program to include following tasks:
(a) Specify a C structure that includes four members viz. serial numbers, year of
manufacturing, material type, and quantity. Declare an array of structure of size
60.
(b) Automatically initialize the values of structure members as follows :
i. Generate serial numbers such that first part has serial number AA0 and 60th
part has serial number FF9.
ii. Randomly generate year of manufacturing in the range [1990-2018]
iii. Randomly initialize material type from three choices ie. Steel, Aluminum, Iron
iv. Randomly initialize quantity in the range [1-1000]
(c) Display the information of the parts with serial numbers between any given range
such as [BB1,CC6].