#include "Animal.hpp"
#include "Fish.hpp"
#include <iostream>
#include <string>
/*@pre user will define fish and use the class Fish while inheriting the class Animal
  @post the class will take the fish object and sets its name, domestic, or predator by using the Animal class 
**/

Fish::Fish():
venomous_(false){}

Fish::Fish(std::string name, bool domestic, bool predator):
Animal(name, domestic, predator),venomous_(false){}

/*@post will set true for setVenomous
 * */
void Fish::setVenomous(){
    venomous_=true;
}

/*@post will return isVenomous
  @bool will return either true or false for fish
   * */
bool Fish::isVenomous()const{
    return venomous_;
}

/*@post will display the statement for bird
  @void will display the correct statements for domestic, predator and venomous
   * */
   
void Fish::display() const { //const
       std:: string D = " ";
    if(domestic_ == false){
        D = " not ";
    }
    std:: string P = "";
    if(predator_ == true){
        P = " it is ";
    }
    else if(predator_ == false){
        P = " is not ";
    }
    
   std:: string VN = "";
    if(venomous_ == true ){
        VN = " it is ";
    }
    else if(venomous_ == false){
        VN = " it is not ";
    }
    
   std:: cout <<getName()<<" is"<< D <<"domestic,"<< P << "a predator\n";
    std:: cout<<"and" << VN <<"venomous.\n\n";
    }


