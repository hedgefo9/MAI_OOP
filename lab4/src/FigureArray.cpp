#include <iostream>
#include <cmath>
#include "../include/FigureArray.hpp"


template<typename T>
FigureArray<T>::FigureArray() {

}

template<typename T>
size_t FigureArray<T>::size() const {
    return sz;
}

template<typename U>
std::istream &operator>>(std::istream &in, FigureArray<U> &a) {
    size_t quantity;
    in >> quantity;

    a.figures = new std::shared_ptr<Figure<U>>[quantity];

    char figure_type = '\0';
    for (size_t i = 0; i < quantity; ++i) {
        in >> figure_type;
        if (figure_type == 'T') {
            std::shared_ptr<Triangle<U>> t(new Triangle<U>());
            in >> *t;
            a.figures[i] = t;
            ++a.sz;
        } else if (figure_type == 'H') {
            std::shared_ptr<Hexagon<U>> h(new Hexagon<U>());
            in >> *h;
            a.figures[i] = h;
            ++a.sz;
        } else if (figure_type == 'O') {
            std::shared_ptr<Octagon<U>> o(new Octagon<U>());
            in >> *o;
            a.figures[i] = o;
            ++a.sz;
        } else {
            throw std::logic_error("Invalid or missed figure type");
        }
    }

    return in;
}

template<typename U>
std::ostream &operator<<(std::ostream &out, FigureArray<U> &a) {
    for (size_t i = 0; i < a.size(); ++i) {
        out << static_cast<double>(*(a.figures[i])) << std::endl;
    }
    return out;
}

template<typename T>
void FigureArray<T>::print_geom_center() const {
    for (size_t i = 0; i < size(); ++i) {
        Point<T> a = figures[i]->geom_center();
        std::cout << a << std::endl;
    }
}

template<typename T>
double FigureArray<T>::total_area() const {
    double current_area = 0;
    for (size_t i = 0; i < size(); ++i) {
        current_area += figures[i]->area();
    }
    return current_area;
}

template<typename T>
FigureArray<T>::operator double() const {
    double current_area = 0;
    for (size_t i = 0; i < size(); ++i) {
        current_area += figures[i]->area();
    }
    return current_area;
}

template<typename T>
void FigureArray<T>::erase(size_t index) {
    figures[index] = nullptr;
    for (size_t i = index; i < sz - 1; ++i) {
        figures[i] = figures[i + 1];
    }
    --sz;
}





