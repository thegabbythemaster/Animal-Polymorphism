#ifndef _Animal_HPP_
#define _Animal_HPP_
#include <iostream>
#include <string>
 
class Animal {
 
public:
    Animal();
 
    Animal(std::string name, bool domestic = false, bool predator = false);
    /*@post getName will return the name of the animal
      @string returns a string variable assigned from name
     * */
    std::string getName() const;
    /*@post isDomestic will return true or false if the animal is domestic
      @bool returns a 1 or 0 for isDomestic
       * */
    bool isDomestic() const;
    
    /*@post isPredator will return true or false if animal is predator
      @bool return 1 or 0 for isPredator
       * */
    bool isPredator() const;
    
    /*@post setName will set a name for animal
      @void will set a string name for animal
    **/
    void setName(std::string name);
    
    /*@post setDomestic will set if the animal is domestic or not
     * */
    void setDomestic();
    
    /*@post setPredator will set if the animal is predator or not
     * */
    void setPredator();
    
    /*@post void dispay is a virtual function which will not be implemented
     * */
    virtual void display() const = 0;
     
    //friend bool operator==(const Animal& animal_1, const Animal animal_2);
 

protected: 
    std::string name_;
    bool domestic_;
    bool predator_ ;
};
#endif
