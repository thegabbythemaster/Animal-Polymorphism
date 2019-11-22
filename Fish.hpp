#ifndef _FISH_H_
#define _FISH_H_
#include "Animal.hpp"
#include <string>
#include <iostream>
/*we will create a class Fish 
 which will be a derived class for the base class Animal
**/
/*@pre user will define an fish and set it in the program
@post the program will take the fish and set it by its name, predator type or domestic type using the class Fish
 * */
class Fish: public Animal {
public:
    Fish();
    Fish(std::string name, bool domestic = false, bool predator = false);
    
    /*@post will give true or false for isVenomous
      @bool returns true or false
       * */
    bool isVenomous() const;
    void setVenomous();
    
    /*@void display will override from class Animal
     * */
    virtual void display() const override; 
private:
    bool venomous_;

};

#endif // _FISH_H_
//hiiii