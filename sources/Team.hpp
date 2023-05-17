

#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include "Character.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "Point.hpp"
#include "Cowboy.hpp"
namespace ariel {
using namespace std;
class Team {
    public:
        Team(Character* leader);
        ~Team();
        void add(Character* member);
        virtual void attack(Team* other);
        virtual int stillAlive() const;
        virtual void print() const;
    protected:
        std::vector<Character*> members;
    };
    // class Point {
    // public:
    //     Point(double x, double y);
    //     double getX() const;
    //     double getY() const;
    //     double distance(const Point& other) const;
    //     Point moveTowards(const Point& source, const Point& target, double distance);
    //     void print(){cout<< "(" << x << "," << y<< ")" <<endl;}

    // private:
    //     double x;
    //     double y;
    // };

    // class Character {
    // public:
    //     Character(const std::string& name, const Point& location);
    //     ~Character() {};
    //    virtual std::string print() const {return "erorr";}
    //     virtual double distance(const Character& other) const ;
    //     virtual void hit(double damage) {};
    //     virtual bool isAlive() const {return true;} 
    //     virtual const std::string& getName() const {return _name;}
    //     virtual const Point& getLocation() const {return _location;}
    // protected:
    //     string _name;
    //     Point _location;
    //     int health;
   
    // };

    // class Cowboy : public Character {
    // public:
        
    //     Cowboy(const std::string& name, const Point& location);
        
        
    //     virtual std::string print() const override ;
    //     virtual void hit(double damage) override{_health-=damage;}
    //     virtual bool isAlive() const override {return (_health>=0);} 
    //     void shoot(Character* other);
    //     bool hasboolet(){return (_stack==0);}
    //     void reload(){this->_stack=6;}

    //     private:
        
    //     int _stack=6;
    //     int _health=110;
    //     int _damage=10;
    // };

    // class Ninja : public Character {
    // public:
    //     Ninja(const std::string& name, const Point& location);
        
    //     virtual void slash(Character* other);
    //     virtual void move(Character* other);

    //   protected:
        
    //     int _speed=8;
    //     int _health=150;
    //     int _damage=40;
    // };

    // class OldNinja : public Ninja {
    // public:
    //     OldNinja(const std::string& name, const Point& location);
    //     virtual std::string print() const override;
    //     // virtual void hit(double damage)override {_health-=damage;}
    //     //virtual bool isAlive() const override {return (_health>=0);} 
       
  


    // };

    // class YoungNinja : public Ninja {
    // public:
    //     YoungNinja(const std::string& name, const Point& location);
        
    //     virtual std::string print() const override;
    //     // virtual void hit(double damage) override{_health-=damage;}
    //     // virtual bool isAlive() const override {return (_health>=0);} 
        
    // };

    // class TrainedNinja : public Ninja {
    // public:
    //     TrainedNinja(const std::string& name, const Point& location);

    //      virtual std::string print() const override;
    // //     virtual void hit(double damage)override {_health-=damage;}
    // //   virtual bool isAlive() const override {return (_health>=0);} 
        
    
    // };

    

    // class Team2 : public Team{
    //     Team2(Character* leader);
    //     ~Team2();
    //     virtual void attack(Team* other) override{};
    //     virtual int stillAlive() const override{return 1;}
    //     virtual void print() const override{};
    // };

    // class SmartTeam : Team{
    //     SmartTeam(Character* leader);
    //     ~SmartTeam();
    //     virtual void attack(Team* other) override{};
    //     virtual int stillAlive() const override{return 1;}
    //     virtual void print() const override{};
    // };



}

#endif // TEAM_HPP