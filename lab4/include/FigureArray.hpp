#ifndef FIGURELIST_HPP_INCLUDED
#define FIGURELIST_HPP_INCLUDED

#include "Figure.hpp"
#include "Triangle.hpp"
#include <memory>

template<typename T>
class FigureArray {
private:
    std::shared_ptr<std::shared_ptr<Figure<T>>[]> figures;
    size_t sz = 0;

public:
    FigureArray();
    size_t size() const;

    template<typename U>
    friend std::istream& operator>>(std::istream& in, FigureArray<U>& a);
    template<typename U>
    friend std::ostream& operator<<(std::ostream& out, FigureArray<U>& a);

    void print_geom_center() const;
    double total_area() const;
    operator double() const;

    void erase(size_t index);

};

#include "../src/FigureArray.cpp"

#endif
