#include<iostream>
using namespace std;

class SHAPE {
protected:
    double val1, val2;
public:
    void get_data() {
        cout << "Enter two values: ";
        cin >> val1 >> val2;
    }

    virtual void display_area() {
        cout << "Area is not defined for base class.\n";
    }
};

class TRIANGLE : public SHAPE {
public:
    void display_area() override {
        double area = 0.5 * val1 * val2;
        cout << "Triangle Area: " << area << endl;
    }
};

class RECTANGLE : public SHAPE {
public:
    void display_area() override {
        double area = val1 * val2;
        cout << "Rectangle Area: " << area << endl;
    }
};

int main() {
    SHAPE* shape;
    
    RECTANGLE rect;
    shape = &rect;
    cout << "Rectangle:\n";
    shape->get_data();
    shape->display_area();

    TRIANGLE tri;
    shape = &tri;
    cout << "\nTriangle:\n";
    shape->get_data();
    shape->display_area();

    return 0;
}
