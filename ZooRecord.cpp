#include "ZooRecord.hpp"
#include "List.hpp"
#include "Animal.hpp"
#include "Mammal.hpp"
#include "Fish.hpp"
#include "Bird.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
 

//ZooRecord::ZooRecord(){}
    /**parameterized constructor
       @pre the input file is expected to be in CSV
       (comma seperated value) format as:
       "animal_name,hair,feathers,eggs,milk,airborne,aquatic,predator,toothed,
        backbone,breathes,venomous,fins,legs,tail,domestic,catsize,class_type\n"
       @param input_file_name the name of the input file
       @post adds Animal objects to record as per the data in the input file
    **/
  
   ZooRecord::ZooRecord(std::string input_file_name){

        std::ifstream in(input_file_name);

        if(in.fail()){
        std:: cout<<"File cannot be opened for reading"<< std::endl;
        exit(1);
        }
     
      std:: string junk;
       std::getline(in, junk); //,'\n'

       while(std::getline(in,junk)) //,'\n'
       {

           std::stringstream animal_line(junk);
           std::string animal_name;
           
           std::getline(animal_line,animal_name,',');

          std:: string predator_type;
          std:: string class_type;
          std:: string hair_type;
          std:: string feathers_type;
          std:: string eggs_type;
          std:: string milk_type;
          std:: string airborne_type;
          std:: string aquatic_type;
          std:: string toothed_type;
          std:: string backbone_type;
          std:: string breathes_type;
          std:: string venomous_type;
          std:: string fins_type;
          std:: string legs_type;
          std:: string tail_type;
          std:: string domestic_type;
          std:: string catsize_type;
          
          
           
//getting hair type
        std::getline(animal_line, hair_type, ',');

        
//getting feather type
        std::getline(animal_line, feathers_type, ',' );
        
//egg type 
        std::getline(animal_line, eggs_type, ',');
 
//milk type       
        std::getline(animal_line, milk_type, ',');

//airborne type
        std::getline(animal_line, airborne_type, ',');
                
//aquatic type
        std::getline(animal_line, aquatic_type, ',');
        
//PREDATOR TYPE
        std::getline(animal_line, predator_type,',');
             
           bool P; 
           if(predator_type == "1"){
               P = 1;
           }
           else{
               P = 0;
           }
//tooth type

        std::getline(animal_line, toothed_type, ',');
        
//backbone type
        std::getline(animal_line,backbone_type, ',');
        
//breathe type
        std::getline(animal_line, breathes_type, ',');
        
//venemous type
        std::getline(animal_line, venomous_type, ',');
        
//fins type
        std::getline(animal_line, fins_type, ',');
                
//legs type
        std::getline(animal_line, legs_type, ',');
                
// tail type
        std::getline(animal_line, tail_type, ',');
        

//domestic type
        std::getline(animal_line, domestic_type,',');
           
           bool D;
           if(domestic_type == "1"){
               D = 1;
           }
           else {
               D = 0;
           }
           
//catsize type
        std::getline(animal_line, catsize_type, ',');
        
        
//class type

        std::getline(animal_line, class_type);
     
if(class_type.length() > 1)
class_type.pop_back();

/*@pre will take file and determine its number to assign its values
 *@post will go through each if statement, first by class in order to assign the correct if statements.
 **/ 
     
    if(class_type ==  "1"){
        Mammal *mammal = new Mammal(animal_name, D, P);
        
        if(hair_type == "1"){
            mammal->setHair();            
        }
        if(airborne_type == "1"){
            mammal-> setAirborne();
        }
        
        if(aquatic_type =="1"){
            mammal-> setAquatic();
        }
        if(toothed_type == "1"){
            mammal-> setToothed();
        }

        if(fins_type == "1"){
            mammal-> setFins();
        }

        if(tail_type == "1"){
            mammal-> setTail();
        }
    
            int legs = stoi(legs_type);
           
            mammal-> setLegs(legs);


        Animal *temp_one =  mammal;
        insert(item_count_,temp_one);
        mammal = nullptr;
    }
        
    if(class_type == "4"){
        Fish *fish = new Fish(animal_name, D, P);
           
        if(venomous_type == "1"){
            fish-> setVenomous();
        }
        Animal *temp_two =  fish;
        insert(item_count_,temp_two);
        fish = nullptr;
    }
    
    if(class_type == "2"){
        Bird *bird = new Bird(animal_name, D, P);
        
        if(airborne_type == "1"){
            bird-> setAirborne();
        }
        if(aquatic_type == "1"){
            bird-> setAquatic();
        }
        Animal *temp_three = bird;
        insert(item_count_,temp_three);
        
        bird = nullptr;
    }    
}
       in.close();
      }  
  
   /**@post displays all animals in record, one per line by calling animal's
      display method"
   **/
   
   void ZooRecord::display(){
   
    if(!isEmpty()){
        for(int j=0; j < (item_count_ ); j++)
        {
            getItem(j)->display();
        }
    }
}
