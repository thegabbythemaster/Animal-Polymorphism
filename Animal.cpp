#include "Animal.hpp"
#include <string>
using namespace std;
/*@pre user will define an animal and set it in the program
@post the program will take the animal and set it by its name, predator type or domestic type using the class Animal
@string sets the name for the animal
@bool will set the animal if it is domestic by 1 or 0 (true or false)
@bool will set the animal if it is a predator by 1 or 0 (true or false)
@return will return the name of the animal that is set
@return will return if the animal is domestic
@return will return if the animal is predator
*/
Animal::Animal():
name_(""),domestic_(false),predator_(false) {}
 
Animal::Animal(std::string name, bool domestic, bool predator):
name_(name),domestic_(domestic),predator_(predator){}
 
/**@pre setName will set the name of animal
   @post will set name for name
   @void setName sets animal name
*/
void Animal::setName(std::string name){
    name_ = name;
}

/**@pre getName will get the animal name 
   @post will return name_ that is set for name
   @string is the name that the user defined for the animal
*/

std::string Animal::getName()const{
    return name_;
}

/**@void setDomestic will set domestic_ to equal true
*/
 
void Animal::setDomestic(){
    domestic_=true;
}
/**@bool return domestic_ equal true, otherwise if not defined, equal false
*/

bool Animal::isDomestic()const{
    return domestic_;
}

/**@void setPredator will set predator_ to equal true
*/

void Animal::setPredator(){
    predator_= true;
}

/**@bool will return predator_ equal true, otherwise if not defined, equal false
 */
bool Animal::isPredator()const{
    return predator_;
}

/**@pre depending on animal, will display an if and else 
   case depending on its domestic type and predator type
   @post will display a cout statement stating animal's
   name, if it is domestic, and if it is a predator
   @void will display the statement which is implemented in other classes
*/


/**@bool operator == will compare animal name, domestic type, and predator type
 */
 
//bool operator==(const Animal& animal_1, const Animal animal_2){
//   return (animal_1.isDomestic() == animal_2.isDomestic() && animal_1.getName() == animal_2.getName() && animal_1.isPredator() == animal_2.isPredator());
//
//}
