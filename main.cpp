#include "Shape.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Polygon.h"

void expand(double *&arr, int &size);

int main(int argc, const char * argv[])
{
    int size = 2;
    double a = 0;
    int n = 0;
    char tempChar;
    char endLine = '\n';
    std::string line;

    //std::cout.setprecision() only available with iomanip
    //std::cout.precision() doesn't work for decimals

    //(new, mem-leak)
    double * numbers = new double[size];
   
    //Read numbers from file. filename through argv[]
    std::ifstream myReadFile;
    myReadFile.open(argv[1]);

    //If file can't be opened, throw
    if (!(myReadFile.is_open()))
    {
        throw ("error opening file");
    }
    else
    {
        //Read loop
        while (!(myReadFile.eof()))
        {
            //if a number
            if (myReadFile >> a)
            {   
                numbers[n] = a;
                n++;
                //if no space in array, expand
                if (n >= size)
                {
                    expand(numbers, size);
                }
            }   
            //if not a number
            else
            {
                myReadFile.clear();
                myReadFile.ignore(1, ' ');
            }
        }
    }
    myReadFile.close();
    
    double arr[n];

    for(int i = 0; i <n; i++)
        arr[i] = numbers[i];
    
    //Run everything through Shape ???
    //Set Shape as below ??? (getType / setType ?)
    //Typecast, C-style

    //Staticly allocated Shape will always be a Shape
    //can't become Point/Line/Triangle/Polygon??

    //Constructor for v these v take vertices coordinates as input
    //1 point(s) = Point
    //2 point(s) = Line
    //3 point(s) = Triangle
    //4 or more point(s) = Polygon

    //Polymorphism, base class pointer

    //Run only if n is even VVVVVVVV
    if( (n %2) == 0 )
    {
        Shape * s1;
        if(n == 2)
        {
            s1 = new Point(numbers);
            std::cout << s1->area();
        }
        else if(n == 4)
        {
            s1 = new Line(numbers);
            std::cout << s1->area();
        }
        else if(n == 6)
        {
            s1 = new Triangle(numbers);
            std::cout << s1->area();
        }
        else
        {
            s1 = new Polygon(arr, n);
            std::cout << s1->area();
        }

        delete s1;
    }

    //Delete dynamic array (del, mem leak)
    delete [] numbers;

    return 0;
}

void expand(double *&arr, int &size)
{
    int n = size;
    size = size * 2;
    //1. New bigger array (new, mem-leak)
    double * tmp = new double[size];
    //2. Copy elements to new array
    for (int i = 0; i < n; i++)
        tmp[i] = arr[i];

    //3. Delete pointer (del, mem-leak)
    delete [] arr;
    //4. Redirect pointer
    arr = tmp;
}