#ifndef BOX
#define BOX

class Box {
private:
    double height;
    double width;
    double depth;
public:
    //constructors and destructors
    Box();
    Box(double h, double w, double d);
    Box(const Box& b);
    ~Box(){ };

    //Getters
    double getHeight();
    double getWidth();
    double getDepth();

    //Setters
    void setHeight(double h);
    void setWidth(double w);
    void setDepth(double d);

    //Functionality
    double volume(); //returns the volume of a box.
};

#endif