// *******************************************************************
//1)  Write a macro for each of the following:
//
//a) Area of a Circle
//b) Area of a Square
//c) Area of a Rectangle
//d) Area of a Triangle
//
//You can find formulas and detailed explanations at:  http://www.mathisfun.com
// *******************************************************************

// *******************************************************************
// Function area_of_circle
//
// Purpose: This function will calculate the area of a circle, given
// the radius.
//
// Parameters: radius - the radius of the circle to be calculated
//
// Returns: area of the circle
//
// *******************************************************************
float area_of_circle (float radius)
{
    float area; // Stores the area of the circle
    const float PI = 3.14159; // Constant variable of Pi. This would be defined as a constant if it were more than a macro
    
    // Area of a circle equals Pi time radius squared
    area = PI * (radius * radius);
    
    // Return the area of the circle to the calling function
    return area;
}

// *******************************************************************
// Function area_of_square
//
// Purpose: This function will calculate the area of a square, given
// the length of a side.
//
// Parameters: side - the length of one side from the square
//
// Returns: area of the circle
//
// *******************************************************************
float area_of_square (float side)
{
    float area; // Stores the area of the square
    
    // Area of a square equals 1 side squared
    area = side * side;
    
    // Return the area of the square to the calling function
    return area;
}

// *******************************************************************
// Function area_of_rectangle
//
// Purpose: This function will calculate the area of a rectangle, given
// the width and height.
//
// Parameters: width - the width of the rectangle
//             height - the height of the rectangle
//
// Returns: area of the rectangle
//
// *******************************************************************
float area_of_rectangle (float width, float height)
{
    float area; // Stores the area of the rectangle
    
    // Area of a rectangle equals width times height
    area = width * height;
    
    // Return the area of the rectangle to the calling function
    return area;
}

// *******************************************************************
// Function area_of_triangle
//
// Purpose: This function will calculate the area of a triangle, given
// the base and the vertical height.
//
// Parameters: base - the base of the triangle to be calculated
//             height - the vertical height of the triangle
//
// Returns: area of the triangle
//
// *******************************************************************
float area_of_triangle (float base, float height)
{
    float area; // Stores the area of the rectangle
    
    // Area of a triangle is one half times the base times the vertical height
    area = .5 * base * height;
    
    // Return the area of the triangle to the calling function
    return area;
}