#include "doctest.h"
#include <stdexcept>
#include "sources/Team.hpp"
#include <math.h>
using namespace std;
using namespace ariel;


    

    TEST_CASE("Distance check") {
    Point p1{1, 1};
    Point p2{5, 5};
    Point p3{-2, -2};
    Point p4{0, 0};
    Point p5{7, 7};
        CHECK_EQ(p1.distance(p2), p2.distance(p1));
        CHECK_EQ(p4.distance(p3), p3.distance(p4));
        CHECK_EQ(p2.distance(p5), p5.distance(p2));

        CHECK_EQ(p4.distance(p5), 7*sqrt(2));
        CHECK_EQ(p4.distance(p3), sqrt(8));
        CHECK((p5.distance(p3)-(9*sqrt(2)))<0.0001);
        
    }

TEST_CASE("Cowboy initialization") {
    Cowboy cowboy{"jhonny", Point{5, 5}};
    CHECK(cowboy.hasboolets());
    CHECK_EQ(cowboy.getName(), "jhonny");
    CHECK_EQ(cowboy.getLocation().distance(Point{5, 5}), 0);
    CHECK_NE(cowboy.getLocation().distance(Point{1, 6}), 0);
    CHECK(cowboy.isAlive());
}   
TEST_CASE("TrainedNinja initialization") {
    TrainedNinja trained{"refaelo", Point{5, 5}};
    CHECK_EQ(trained.getName(), "refaelo");
    CHECK_EQ(trained.getLocation().distance(Point{5, 5}), 0);
    CHECK_NE(trained.getLocation().distance(Point{5, 1}), 0);
    CHECK(trained.isAlive());
}
TEST_CASE("OldNinja initialization") {
    OldNinja old{"splinter", Point{5, 5}};
    double dis=old.distance(old);
    CHECK_EQ(old.getName(), "splinter");
    CHECK_EQ(old.getLocation().distance(Point{5, 5}), 0);
    CHECK_NE(old.getLocation().distance(Point{1, 5}), 0);
    CHECK(old.isAlive());
}
TEST_CASE("YoungNinja initialization") {
    YoungNinja young{"michalo", Point{5, 5}};
    CHECK_EQ(young.getName(), "michalo");
    CHECK_EQ(young.getLocation().distance(Point{5, 5}), 0);
    CHECK_NE(young.getLocation().distance(Point{6, 1}), 0);

    CHECK(young.isAlive());
   
}

TEST_CASE("Team initialization && Add "){
    OldNinja *leader =new OldNinja{"leonardo",Point{5,5}};
    Team A{leader};
    CHECK(A.stillAlive()==1);

    
        YoungNinja *N1=new YoungNinja {"Y_donatelo",Point{5,5}};
        Cowboy *c1=new Cowboy {"jhonny",Point{6,6}};
        TrainedNinja *N2= new TrainedNinja{"T_donatelo",Point{5,5}};

        A.add(N1);
        A.add(c1);
        A.add(N2);
    
    CHECK(A.stillAlive()==3);
        YoungNinja *N3=new YoungNinja {"Y_donatelo",Point{5,5}};
        TrainedNinja *N4= new TrainedNinja{"T_donatelo",Point{5,5}};
        YoungNinja *N5=new YoungNinja {"Y_donatelo",Point{5,5}};
        TrainedNinja *N6= new TrainedNinja{"T_donatelo",Point{5,5}};
        YoungNinja *N7=new YoungNinja {"Y_donatelo",Point{5,5}};
        TrainedNinja *N8= new TrainedNinja{"T_donatelo",Point{5,5}};
        YoungNinja *N9=new YoungNinja {"Y_donatelo",Point{5,5}};
        A.add(N3);
        A.add(N4);
        A.add(N5);
        A.add(N6);
        A.add(N7);
        A.add(N8);
        A.add(N9);
        CHECK(A.stillAlive()==10);
        TrainedNinja *N10= new TrainedNinja{"T_donatelo",Point{5,5}};
        CHECK_THROWS(A.add(N10));
  

}
TEST_CASE("Shoot && Shoot on die "){
    Cowboy *cowboy= new Cowboy{"jhonny",Point{6,6}};
    YoungNinja *youngN=new YoungNinja{"Y_donatelo",Point{5,5}};

    for (size_t i = 0; i < 9; i++)
    {
        if(i==6){
            cowboy->reload();
        }
        CHECK(youngN->isAlive());
        cowboy->shoot(youngN);
    }
    ////young now have 10 
    cowboy->shoot(youngN);
    CHECK_FALSE(youngN->isAlive());
    
    
    
    
}

TEST_CASE("slash && not slash "){
    Cowboy *cowboy= new Cowboy{"jhonny",Point{6,6}};
    YoungNinja *youngN=new YoungNinja{"Y_donatelo",Point{4,6}};

    
    ///too far
    youngN->slash(cowboy);
    youngN->slash(cowboy);
    youngN->slash(cowboy);
    CHECK(cowboy->isAlive());


    youngN->move(cowboy);
    youngN->slash(cowboy);
    youngN->slash(cowboy);
    // cowboy health = 30
    CHECK(cowboy->isAlive());
    youngN->slash(cowboy);
    CHECK_FALSE(cowboy->isAlive());
    
    
    
    
}