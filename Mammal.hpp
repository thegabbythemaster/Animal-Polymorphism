#ifndef _MAMMAL_H_
#define _MAMMAL_H_
#include <iostream>
#include "Animal.hpp"
#include <string>

/*we will create a class called Mammal
 which will be a derived class for the base class Animal
 by using inheritance
  **/
/*@pre user will define an mammal and set it in the program
@post the program will take the mammal and set it by its name, predator type or domestic type using the class mammal
@post the program will also take mammal and set hair, airborne, aquatic, toothed, fins, and legs
 * */
class Mammal: public Animal {
public:
    Mammal();
    Mammal(std::string name, bool domestic = false, bool predator = false);
    /*@bool will return 1 or 0 for hair
     * */
    bool hasHair() const;
    
        /*@bool will return 1 or 0 for airborne
     * */
    bool isAirborne() const;
    
        /*@bool will return 1 or 0 for aquatic
     * */
    bool isAquatic() const;
    
        /*@bool will return 1 or 0 for toothed
     * */
    bool isToothed() const;
    
        /*@bool will return 1 or 0 for fins
     * */
    bool hasFins() const;
    
        /*@bool will return 1 or 0 for tail
     * */
    bool hasTail() const;
    int legs() const;
    void setHair();
    void setAirborne();
    void setAquatic();
    void setToothed();
    void setFins();
    void setTail();
    void setLegs(int legs);
    
        /*@void display will override from class Animal
     * */
    virtual void display() const override; 

private:
    bool hair_;
    bool airborne_;
    bool aquatic_;
    bool toothed_;
    bool fins_;
    bool tail_;
    int legs_;
};
#endif // _MAMMAL_H_
