#include <iostream>

void user_input(int& a, int& b)
{
    std::cin >> a >> b;
}


int pirimiter(int PirimiterA, int PirimiterB)
{

    return 2 * (PirimiterA + PirimiterB);
}

int S(int S_A, int S_B)
{

    return S_A * S_B;
}

int main()
{
    int num1 {};
    int num2 {};
    user_input(num1, num2);
    int result2 = pirimiter(num1, num2);
    int result = S(num1, num2);
    std::cout << result << ' ' << result2 << std::endl;
    return 0;
}