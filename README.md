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