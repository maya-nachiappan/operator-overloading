//
//  point.hpp
//  operator overloading
//
//  Created by maya nachiappan on 11/1/24.
//

#ifndef point_hpp
#define point_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;

    bool operator==(const Point& other) const;
};

// Overloading the stream insertion operator
ostream& operator<<(ostream& os, const Point& point);

void print();

#endif /* point_hpp */
