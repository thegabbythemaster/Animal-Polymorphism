#ifndef _BIRD_H_
#define _BIRD_H_
#include "Animal.hpp"
#include <string>

/*we will create a class Bird
 which will be a derived class for the base class Animal
**/
/*@pre user will define an bird and set it in the program
@post the program will take the bird and set it by its name, predator type or domestic type using the class Bird
 * */
class Bird: public Animal {
public:
    Bird();
    Bird(std::string name, bool domestic = false, bool predator = false);
    /*@post will set true or false is isAirborne
      @bool will set 1 or 0
       * */
    bool isAirborne() const;
    
    /*@post will set true or false for isAquatic
      @bool will set 1 or 0
       * */
    bool isAquatic() const;
    
    /*@post will set if bird is airborne
     * */
    void setAirborne();
    
    /*@post will set if bird is aquatic
     * */
    void setAquatic();
    
    /*post overrides the void display function from class animal
     * */
    virtual void display() const override;
   
private:
    bool airborne_;
    bool aquatic_;
};

#endif // _BIRD_H_
