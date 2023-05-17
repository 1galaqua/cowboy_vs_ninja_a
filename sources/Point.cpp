#include "Point.hpp"

#include <string>
#include <iostream>
#include <math.h>

using namespace ariel;
using namespace std;

Point::Point(double dotx, double doty):_dotx(dotx),_doty(doty){};

double Point::getX() const{
    return this->_dotx;
}
double Point::getY() const{
    return this->_doty;
}

double Point::distance(const Point& other) const{
    return sqrt(pow(other.getX() - this->_dotx, 2) + pow(other.getY() - this->_doty, 2));
};

Point Point::moveTowards(const Point& source, const Point& target, double distance) const{
    double dis = this->distance(target);
    if (dis <= distance) {
        return target;   
    } else {
        
        double ratio = distance / dis;
        double dx = target.getX() - source.getX();
        double dy = target.getY() - source.getY();
        return Point(source.getX() + ratio * dx, source.getY() + ratio * dy);
    }
}


void Point::print(){
    cout<< "("<< this->getX()<< "," <<this->getY() << ")"<< endl;
}