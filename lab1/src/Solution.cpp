#include "../include/Solution.hpp"
#include <iostream>

bool Solution::solve(const std::string &day_of_week, const int64_t &number) {
    if (day_of_week == "Понедельник") {
        if (number == 12)
            return true;
    } else if (day_of_week == "Вторник") {
        if (number > 95)
            return true;
    } else if (day_of_week == "Среда") {
        if (number == 34)
            return true;
    } else if (day_of_week == "Четверг") {
        if (number == 0)
            return true;
    } else if (day_of_week == "Пятница") {
        if (((2 + number % 2) % 2) == 0)
            return true;
    } else if (day_of_week == "Суббота") {
        if (number == 56)
            return true;
    } else if (day_of_week == "Воскресенье") {
        if (number == 666 || number == -666)
            return true;
    }

    return false;
}