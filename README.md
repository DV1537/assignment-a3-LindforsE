### A2: Classes
Instructions:
- Implement an abstract class Shape with methods:
	- getType() returns a string denoting type of a shape (point, line, polygon ..)
	- area() returns area of the object, or -1 if the shape is concave, intersecting, or does not have an area
	- circumreference() returns circumreference of the object
	- position() returns center coordinates of the object
	- isConvex() returns true if shape is convex
	- distance(Shape s) returns distance to the center of another shape
- Extend the Object classe into Point, Line, Triangle, and Polygon. Overload the inherited methods. Constructors of these classes take vertices coordinates as an input.

- The program should load a shape from a file and output its surface area. The input file contains a series of real numbers indicating coordinates of vertices. Example:
```
1 2 3 4 5 6.43  // Denotes a triange with vertices at (1, 2) (3, 4) (5, 6.43) 
```
There should not be a limitation of how many points the program can load.

Example:
```
Input: 1 1 1 2 2 2  		Output: 0.5
Input: 1 3.4 3 3 13.13 3	Output: 2.026
Input: 1 1 1 2 2 2 3 1 2 0	Output: 2.5
Input: 0 -10			Output: -1
```	

## General instructions

1. Use GIT version control to manage your code and submit assignments unless specified otherwise (see separate instructions on how to set up and use GIT Classroom)
2. Your program should use text files as the only input. No keyboard input is permitted. Path to the input file should be the first parameter to the program.
3. Format output exactly as specified/exemplified in the assignment descriptions
4. Follow good code writing practices:
	
	1. Do not use global variables
	2. Divide classes into .cpp and .h files
	3. All parameters that are constants should be declared as such
	4. All variable and class names should be in English, self-explanatory, and must use camelCase. 
	5. All code that is not used should be removed
	6. Use code comments when the reasoning behind the solution is not obvious
	7. Always check that that all allocated memory is released and avoid memory leaks

5. You should not use any external libraries other than `cmath`, `iostream`, `fstream`, and `strings`. If you wish to use another library please check with the lab assistants first. 
6. The program should be robust against wrong input data. If there is an error with input file the program should gracefully terminate with an non zero exit code.
7. Real numbers should be printed with the precision of 3 decimal digits.


## Assignment A

The aim of assignment A is to test your understanding on pointers and working with classes. The focus
is on memory management, class inheritance, encapsulation, and overloading.