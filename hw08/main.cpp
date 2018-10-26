#include "Angle.h"
#include "Point.h"
#include "Fish.h"
#include "Population.h"
#include "Log.h"
#include <iostream>
#include <string>
#include <math.h>

int main(){

    const Log& log = Log::getInstance();
    log.print("\nWelcome to the aquarium!\n"); 

    Population pool;
    Fish* fish1 = new Fish(1, Point(0,0), 3, Angle(20), Angle(5), &pool);
    Fish* fish2 = new Fish(2, Point(0,0), 9, Angle(240), Angle(72), &pool);
    Fish* fish3 = new Fish(3, Point(0,0), 6, Angle(300), Angle(45), &pool);
    
    /* Simulation */

    int time = 0;
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
                std::cout<<"\t"<< *(pool.get_fish(i))<<" HAS DIED"<<std::endl;
                delete pool.get_fish(i);
            } 
        }

        /* If no fish left in population, end simulation */
        if(pool.size()<=0) break;
        
    }
    std::cout<<"\nAll fish have died. Thanks!"<<std::endl;

    return 0;
}