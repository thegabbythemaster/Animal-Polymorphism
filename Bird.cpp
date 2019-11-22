#include "Animal.hpp"
#include "Bird.hpp"
#include <string>
#include <iostream>
/*@pre user will define a bird and set it into the class bird and inherit the class animal
   @post the program will take the bird and set its name, predator or domestic using the class animal 
*/
Bird::Bird():
airborne_(false),aquatic_(false){}

Bird::Bird(std::string name, bool domestic, bool predator):
Animal(name, domestic, predator),airborne_(false),aquatic_(false){}

/*@post setAirborne will assign true for airborne
  @void will display if it is true or false
   * */
void Bird::setAirborne(){
    airborne_= true;
}

/*@post isAirborne will return bool for airborne_
 * */
bool Bird::isAirborne()const{
    return airborne_;
}
/*@post setAquatic will assign true for aquatic_
  @void will display true or false
   * */
void Bird::setAquatic(){
    aquatic_=true;
}
/*@post isAquatic will return bool for aquatic_
 * */
bool Bird::isAquatic()const{
    return aquatic_;
}

/*@post will display the statement for bird
  @void will display the correct statements for domestic, predator, airborne and aquatic
   * */
   
void Bird :: display() const { //const
       std:: string D = " ";
    if(domestic_ == false){
        D = " not ";
    }
    std::string P = "";
    if(predator_ == true){
        P = " it is ";
    }
    else if(predator_ == false){
        P = " is not ";
    }
   std:: string AR = "";
    if(airborne_ == true){
        AR = "it is ";
    }
    else if(airborne_ == false){
        AR = "it is not ";
    }
    std::string AQ = "";
    if(aquatic_ == true){
        AQ = " it is ";
    }
    else if(aquatic_ == false){
        AQ = " it is not ";
    }
    
    std::cout <<getName()<<" is"<< D <<"domestic and"<< P << "a predator,\n";
    std::cout<< AR <<"airborne and" << AQ <<"aquatic.\n\n";
    }
