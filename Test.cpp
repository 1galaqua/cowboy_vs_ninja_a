#include "doctest.h"
#include <stdexcept>
#include "sources/Team.hpp"
#include <math.h>
using namespace std;
using namespace ariel;


    

    TEST_CASE("Distance method") {
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
        cout<<"Actual value: " << p5.distance(p3)<<endl;
        cout<<"Expected value: " << 9 * sqrt(2)<<endl;
    }

TEST_CASE("Cowboy initialization") {
    Cowboy cowboy{"jhonny", Point{5, 5}};
    CHECK(cowboy.hasboolet());
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
    // OldNinja *leader =new OldNinja{"leonardo",Point{5,5}};
    // Team A{leader};
    // CHECK(A.stillAlive()==1);

    // for (size_t i = 0; i < 5; i++)
    // {
    //     // YoungNinja *N1=new YoungNinja {"Y_donatelo",Point{5,5}};
    //     // Cowboy *c1=new Cowboy {"jhonny",Point{6,6}};
    //     // TrainedNinja *N2= new TrainedNinja{"T_donatelo",Point{5,5}};

    //     // A.add(N1);
    //     // A.add(c1);
    //     // A.add(N2);
    // }
    // CHECK(A.stillAlive()==1);
    // Team B{leader};
    // CHECK(B.stillAlive()==1);
    // for (size_t i = 0; i < 5; i++)
    // {
    //     // YoungNinja *N1=new YoungNinja {"Y_donatelo",Point{5,5}};
    //     // Cowboy *c1=new Cowboy {"jhonny",Point{6,6}};
    //     // TrainedNinja *N2= new TrainedNinja{"T_donatelo",Point{5,5}};

    //     // A.add(N1);
    //     // A.add(c1);
    //     // A.add(N2);
    // }
    // CHECK(B.stillAlive()==16);

    


}