#include "Team.hpp"
#include <math.h>
#include <string>
#include <iostream>

using namespace std;
using namespace ariel; 


    // Point class implementation
    Point::Point(double x, double y) : x(x), y(y) {}

    double Point::getX() const { return x; }
    double Point::getY() const { return y; }

    double Point::distance(const Point& other) const {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }
    Point Point::moveTowards(const Point& source, const Point& target, double distance){
        Point p1(1,1);
        return p1;
        }

    //////////////////////////////////////////////// Character class///////////////////////////////////////////////// 
    Character::Character(const std::string& name, const Point& location)
        : _name(name), _location(location) {}
    
    
    double Character::distance(const Character& other) const {
        return other.getLocation().distance(_location);
    }

    /////////////////////////////////////////////////// Cowboy class /////////////////////////////////////////////////
    Cowboy::Cowboy(const std::string& name, const Point& location):Character(name,location) {}
    
    
    std::string Cowboy::print() const { return "Cowboy " + getName(); }
    
    void Cowboy::shoot(Character* other) {
        
    }

    // //////////////////////////////////////// Ninja class ////////////////////////////////////////////////////////////////////////////
    Ninja::Ninja(const std::string& name, const Point& location):Character(name, location) {}
    
    void Ninja::slash(Character* other) {
        std::cout << getName() << " slashes " << other->getName() << std::endl;
    }
    void Ninja::move(Character* other) {
        cout << getName() << " moves to " << other->getLocation().getX() << ", "
            << other->getLocation().getY() << endl;
    }

    ////////////////////////////////// OldNinja class ////////////////////////////////////////////////////////////////////////
    OldNinja::OldNinja(const std::string& name, const Point& location): Ninja(name,location) {}

    std::string OldNinja::print() const { return "OldNinja " + getName(); }
    
    
   

    /////////////////////////////////////// YoungNinja class //////////////////////////////////////////////////////////// 
    YoungNinja::YoungNinja(const std::string& name, const Point& location)
        :Ninja(name,location) {}
    std::string YoungNinja::print() const { return "youngNinja " + getName(); }
       
    
    
    
    //////////////////////////////////////////// TrainedNinja class /////////////////////////////////////////////////////
    TrainedNinja::TrainedNinja(const std::string& name, const Point& location)
        : Ninja(name,location) {}

     std::string TrainedNinja::print() const { return "TrainedNinja " + getName(); }

    


    /////////////////////////////////// Team class implementation
    Team::Team(Character* leader) { members.push_back(leader); }
    Team::~Team() {
        for (Character* member : members) {
            delete member;
        }
    }
    void Team::add(Character* member) { members.push_back(member); }
    
    void Team::attack(Team* other) {}
    

int Team::stillAlive() const {
   
    return 0;
}

void Team::print() const {
    
}
////////////////////////////team2/////////////////////////
Team2::Team2(Character* leader):Team(leader) { members.push_back(leader); }

Team2::~Team2() {
    for (Character* member : members) {
            delete member;
        }
    }


///////////////////////////////////SmartTeam/////////////////////////////////////
SmartTeam::SmartTeam(Character* leader):Team(leader){ members.push_back(leader); }

SmartTeam::~SmartTeam() {
    for (Character* member : members) {
            delete member;
        }
    }
