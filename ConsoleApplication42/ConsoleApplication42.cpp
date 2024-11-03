#include <iostream>
using namespace std;

class Point {
    int x;
    int y;
public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }

    void Output() {
        cout << "X: " << x << "\tY: " << y << endl;
    }

    Point operator+(const Point& b) {
        return Point(x + b.x, y + b.y);
    }

    Point operator-(int a) {
        return Point(x - a, y - a);
    }

    Point operator*(int a) {
        return Point(x * a, y * a);
    }

    Point operator/(int a) {
        if (a != 0) {
            return Point(x / a, y / a);
        }
        else {
            cout << "Error: Division by zero" << endl;
            return *this;
        }
    }

    friend Point operator-(int a, const Point& p) {
        return Point(a - p.x, a - p.y);
    }
};

int main() {
    Point a(1, 2);
    Point b(3, 4);

    Point q = 100 - a;
    q.Output();

    q = a * 10;
    q.Output();

    q = a / 10;
    q.Output();

    Point c = a + b;
    c.Output();

}
