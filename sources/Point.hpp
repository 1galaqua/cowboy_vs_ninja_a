#ifndef POINT_HPP
#define POINT_HPP



namespace ariel{

class Point {
    public:
        Point(double dotx, double doty);
        double getX() const;
        double getY() const;
        double setX(double dotx) {return this->_dotx=dotx;}
        double setY(double doty){return this->_doty=doty;}
        double distance(const Point& other) const;
        Point moveTowards(const Point& source, const Point& target, double distance) const;
        void print();

    private:
        double _dotx;
        double _doty;
    };

}
#endif