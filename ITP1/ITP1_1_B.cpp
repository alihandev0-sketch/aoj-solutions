#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int x{};

    if (std::cin >> x) {
        int result{x * x * x};
        std::cout << result << '\n';
    }
    return 0;
}