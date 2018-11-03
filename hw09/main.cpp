#include "Angle.h"
#include "Point.h"
#include "Fish.h"
#include "Drunken_Fish.h"
#include "Flippy_Fish.h"
#include "Population.h"
#include "Log.h"
#include <iostream>
#include <string>
#include <math.h>

int main(){

    const Log& log = Log::getInstance();
    log.print("\nWelcome to the aquarium!\n"); 

    Population pool;
    
    Fish* fish1 = new Drunken_Fish(1, Point(0,0), 15, &pool);
    Fish* fish2 = new Drunken_Fish(2, Point(0,0), 18, &pool);
    Fish* fish3 = new Drunken_Fish(3, Point(0,0), 14, &pool);
    Fish* fish4 = new Drunken_Fish(4, Point(0,0), 17, &pool);
    Fish* fish5 = new Drunken_Fish(5, Point(0,0), 16, &pool);

    Fish* fish6 = new Flippy_Fish(6, Point(0,0), 13, &pool, Angle(220),Angle(30));
    Fish* fish7 = new Flippy_Fish(7, Point(0,0), 19, &pool, Angle(45),Angle(15));
    Fish* fish8 = new Flippy_Fish(8, Point(0,0), 11, &pool, Angle(321),Angle(22));
    Fish* fish9 = new Flippy_Fish(9, Point(0,0), 16, &pool, Angle(15),Angle(18));
    Fish* fish10 = new Flippy_Fish(10, Point(0,0), 15, &pool, Angle(90),Angle(4));
    

    int time = 0;
    std::cout<<"Time="<<time<<std::endl;
    /* Print out all fish at starting position (0,0) */
    for(int i=0; i<pool.size(); i++){
            std::cout<<"\t"<< *(pool.get_fish(i)) <<std::endl;
        }

    while(true){
        time++; 

        std::cout<<"Time="<<time<<std::endl;

        /* Call each fish's swim method */
        for(int i=0; i<pool.size(); i++){
            pool.get_fish(i)->swim();
        }

        /* Print out new position of each fish */
        for(int i=0; i<pool.size(); i++){
            std::cout<<"\t"<< *(pool.get_fish(i)) <<std::endl;
        }

        /* Check how far each fish is, if too far, terminate */
        for(int i=0; i<pool.size(); i++){
            /* Distance formula for current position and origin */
            /* sqrt(x^2 +y^2) */
            double distance = sqrt(pow(pool.get_fish(i)->getX(),2) + pow(pool.get_fish(i)->getY(),2));
            /* If fish is 100 or more units away, remove fish from population */
            if(distance>=100){
                delete pool.get_fish(i);
            } 
        }

        /* If no fish left in population, end simulation */
        if(pool.size()<=0) break;
        
    }
    std::cout<<"\nAll fish have died. Thanks!"<<std::endl;


    return 0;
}