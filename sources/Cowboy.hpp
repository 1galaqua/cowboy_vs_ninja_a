#pragma once
#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"
using namespace std;
namespace ariel {

 class Cowboy : public Character {

    public:
        
        Cowboy(const std::string& name, const Point& location);
        void shoot(Character* other);
        bool hasboolets(){return (this->_stack == 0);}
        void reload(){this->_stack=6;}
 
    private:    
        int _stack;
        int _damage;
    };    
}
#endif