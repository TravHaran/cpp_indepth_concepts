#ifndef CLASSTEMPLATES_SHAPELIST_H
#define CLASSTEMPLATES_SHAPELIST_H

#include <iostream>
#include <vector>

template <class T>
class ShapeList {
    public:
        ShapeList();
        void addShape(T s);
        void printList();
        T getLargestShape();
    private:
        std::vector<T> _shapeList;
};
#include "ShapeList.cpp"
#endif 