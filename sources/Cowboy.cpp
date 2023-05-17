#include "Cowboy.hpp"

#include <string>

using namespace ariel;

Cowboy::Cowboy(const std::string& name, const Point& location):Character(name,location), _stack(6),_damage(10) {
    this->_type="C";
    this->_health=110;
}

void Cowboy::shoot(Character* other){
    //can we shoot on death character?
    if(this->isAlive() && this->_stack!=0){
            other->hit(this->_damage);
            this->_stack-=1;
        
    }
}