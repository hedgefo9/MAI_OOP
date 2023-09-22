#include <iostream>
#include "include/Solution.hpp"

int main() {
    std::string day_of_week;
    int64_t number;

    std::cin >> day_of_week;
    std::cin >> number;

    Solution s;
    std::cout << s.solve(day_of_week, number) << std::endl;

    return 0;
}
