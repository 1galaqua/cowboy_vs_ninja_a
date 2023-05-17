#include "Ninja.hpp"
using namespace ariel;

Ninja::Ninja(const std::string& name, const Point& location):Character(name,location){};
        
   void  Ninja::slash(Character* other){
    //can we slash death ninja?
        if(this->getLocation().distance(other->getLocation())<=1){
            other->hit(this->_damage);
            
        }
   };
   void Ninja::move(Character* other){
        Point temp=this->getLocation().moveTowards(this->getLocation(),other->getLocation(),this->_speed);
        this->setlocation(temp.getX(),temp.getY());
        // this->getLocation().setX(temp.getX());
        // this->getLocation().setY(temp.getY());
        
   };