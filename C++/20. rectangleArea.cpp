// In this challenge, you are required to compute the area of a rectangle using classes.

// Create two classes:
// Rectangle
// The Rectangle class should have two data fields-width and height of int types. The class should have display() method, to print the width and height of the rectangle separated by space.
// RectangleArea
// The RectangleArea class is derived from Rectangle class, i.e., it is the sub-class of Rectangle class. The class should have read_input() method, to read the values of width and height of the rectangle. 
// The RectangleArea class should also overload the display() method to print the area (width x height) of the rectangle.
  
// Sample Input
// 10 5
// Sample Output
// 10 5
// 50

#include <iostream>

using namespace std;

class Rectangle{
    public:
        int width, height;
        
        void display(){
            cout<<width<<" "<<height<<endl;
        }
};

class RectangleArea : public Rectangle{
    public:
        int area; 
        void read_input(){
            cin>>width>>height;
        }
        void display(){
            area=width*height;
            cout<<area;
        }
};



int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
