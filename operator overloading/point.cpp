//
//  point.cpp
//  operator overloading
//
//  Created by maya nachiappan on 11/1/24.
//

#include "point.hpp"
using namespace std;

// Overloading the equality operator
bool Point::operator==(const Point& other) const {
    return (x == other.x) && (y == other.y);
}

// Overloading the stream insertion operator
ostream& operator<<(ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

void print()
{
    Point p1, p2, p3;

    // Taking input for point p1
    cout << "Enter coordinates for point p1 (x y): ";
    cin >> p1.x >> p1.y;

    // Taking input for point p2
    cout << "Enter coordinates for point p2 (x y): ";
    cin >> p2.x >> p2.y;

    // Taking input for point p3
    cout << "Enter coordinates for point p3 (x y): ";
    cin >> p3.x >> p3.y;

    // Testing the overloaded operators
    if (p1 == p2) {
        cout << "p1 is equal to p2" << endl;
    } else {
        cout << "p1 is not equal to p2" << endl;
    }

    if (p1 == p3) {
        cout << "p1 is equal to p3" << endl;
    } else {
        cout << "p1 is not equal to p3" << endl;
    }

    // Outputting points using the overloaded << operator
    cout << "Point p1: " << p1 << endl;
    cout << "Point p2: " << p2 << endl;
    cout << "Point p3: " << p3 << endl;}
