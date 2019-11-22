#include "Animal.hpp"
#include "Mammal.hpp"
#include <string>
#include <iostream>
//using namespace std;
/**@pre user will define a mammal and set it in the program by inheriting the class Animal
  @post the program will take the mammal and set its name, domestic, and predator based on the class Animal
  and set hair, toothed, fins, legs, tails, aquatic and airborne using the mammal class
  **/

Mammal::Mammal():
Animal(),hair_(false),airborne_(false),aquatic_(false),toothed_(false),fins_(false),tail_(false),legs_(0) {}

Mammal::Mammal(std::string name, bool domestic, bool predator):
Animal(name,domestic,predator),hair_(false),airborne_(false),aquatic_(false),toothed_(false),fins_(false),tail_(false),legs_(0){}

void Mammal::setHair(){
    hair_ = true;
}

/*@bool will determine if it has hair
 * */
bool Mammal::hasHair() const{
    return hair_;
}
void Mammal::setAirborne(){
    airborne_ = true;
}

/*@bool will determine is it is airborne
 * */
bool Mammal:: isAirborne() const{
    return airborne_;
}
void Mammal::setAquatic(){
    aquatic_ = true;
}
/*@bool will determine it is is aquatic
 * */
bool Mammal::isAquatic() const{
    return aquatic_;
}

void Mammal::setToothed(){
    toothed_ = true;
}
/*@bool will determine is it is toothed
 * */
 
bool Mammal::isToothed()const{
    return toothed_;
}

void Mammal::setFins(){
    fins_= true;
}

/*@bool will determine if it has fins
 * */
bool Mammal::hasFins() const{
    return fins_;
}

void Mammal::setTail(){
    tail_= true;
}

/*@bool will determine it is has a tail
 * */
bool Mammal::hasTail()const{
    return tail_;
}
/*@void will determine if it has legs
 * */
void Mammal::setLegs(int legs){
   legs_= legs;
}
int Mammal::legs()const{
    return legs_;
}

/*@post will display the statement for bird
  @void will display the correct statements for domestic, predator, airborne, aquatic, hair, toothed, fins, tail and legs
   * */
void Mammal:: display() const { 
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
    std::string AR = "";
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
    
    std::string HR = " ";
    if( hair_ == false ){
        HR = " no ";
    }    
    
    std::string TT = " ";
    if (toothed_ == false ){
        TT = " no ";
    }
    std::string FN = " ";
    if(fins_ == false ){
        FN = " no ";
    }
    
    std::string TL = " ";
    if(tail_ == false){
        TL = " no ";
    }
    
    std::cout <<getName()<<" is"<< D <<"domestic and"<< P << "a predator,\n";
    std::cout<< AR <<"airborne and" << AQ <<"aquatic,\n";
    std::cout<<"it has"<< HR << "hair,"<< TT <<"teeth,"<< FN <<"fins," << TL <<"tail and "<<legs_ <<" legs.\n\n";
}