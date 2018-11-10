#include "Angle.h"
#include "Point.h"
#include "Fish.h"
#include "Drunken_Fish.h"
#include "Flippy_Fish.h"
#include "Log.h"
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <vector>

int main(){

    const Log& log = Log::getInstance();
    log.print("\nWelcome to the aquarium!\n"); 
    
    std::vector<Fish*> pop;

    int fishID=1;

    /* Generate drunken fish */
    for(int i=0;i<10;i++){
        pop.push_back(new Drunken_Fish(fishID, Point(0,0), rand()%50+1));
        fishID++;
    }

    /* Generate flippy fish */
    for(int i=0;i<10;i++){
        pop.push_back(new Flippy_Fish(fishID, Point(0,0), rand()%50+1, Angle<double>(rand()%360), Angle<double>(rand()%30+1))); 
        fishID++;
    }
    
    int time = 0;
    std::cout<<"Time="<<time<<std::endl;

    /* Print out all fish at starting position (0,0) */
    for(std::vector<Fish*>::iterator it=pop.begin(); it!=pop.end(); ++it){
        std::cout<<"\t"<< *(*it) <<std::endl;
    }
    
    while(true){
        time++;
        std::cout<<"Time="<<time<<std::endl;

        /* Call each fish's swim method */
        for(std::vector<Fish*>::iterator it=pop.begin(); it!=pop.end(); ++it){
            (*it)->swim();
        }

        /* Print out each fish */
        for(std::vector<Fish*>::iterator it=pop.begin(); it!=pop.end(); ++it){
            std::cout<<"\t"<< *(*it) << std::endl;
        }

        /* Check how far each fish is, if 100 units away, terminate the fish */
        for(std::vector<Fish*>::iterator it=pop.begin(); it!=pop.end(); ++it){
            /* Distance formula for current position and origin */
            /* sqrt(x^2 +y^2) */
            double distance = sqrt(pow((*it)->getX(),2) + pow((*it)->getY(),2));
            /* If fish is 100 or more units away, remove fish from population */
            if(distance>=100){
                std::cout<<"\t"<< *(*it) << " HAS DIED" << std::endl;
                pop.erase(it);
                break;
            }
        }

        /* If no fish left in population, end simulation */
        if(pop.empty()) break;
        

    }
    return 0;
}