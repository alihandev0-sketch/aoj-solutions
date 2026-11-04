// AOJ Lesson: ITP1_1_C: Rectangle
// Calculates the area and perimeter of a rectangle

#include <iostream>

void user_input(int& width, int& height)
{
    std::cin >> width >> height;
}


int pirimiter(int PirimiterWidth, int PirimiterHeight)
{

    return 2 * (PirimiterWidth + PirimiterHeight);
}

int area(int Area_width, int Area_height)
{

    return Area_width * Area_height;
}

int main()
{
    int num1 {};
    int num2 {};
    user_input(num1, num2);
    int result2 = pirimiter(num1, num2);
    int result = area(num1, num2);
    std::cout << result << ' ' << result2 << std::endl;
    return 0;
}