// AOJ Lesson: ITP1_1_C: Rectangle
// Calculates the area and perimeter of a rectangle

#include <iostream>

// Reads the dimensions from standard input using references (&)
void user_input(int& width, int& height)
{
    std::cin >> width >> height;
}

// Calculates the perimeter: 2 * (width + height)
int perimeter(int width, int height)
{
    return 2 * (width + height);
}

// Calculates the area: width * height
int area(int width, int height)
{
    return width * height;
}

int main()
{
    int num1 {}; // Stores width
    int num2 {}; // Stores height
    
    // 1. Get input from AOJ system
    user_input(num1, num2);
    
    // 2. Perform calculations
    int rect_perimeter = perimeter(num1, num2);
    int rect_area = area(num1, num2);
    
    // 3. Print area and perimeter separated by a space, followed by a newline
    // AOJ strictly checks the format: "[Area] [Perimeter]\n"
    std::cout << rect_area << ' ' << rect_perimeter << std::endl;
    
    return 0;
}
