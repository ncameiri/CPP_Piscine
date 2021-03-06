#include "ClapTrap.hpp"

ClapTrap::ClapTrap (std::string in_name): Name(in_name), Hitpoints(10), Energy_points(10), Attack_damage(0){
    std::cout<<"Default constructor called\n";
}

ClapTrap::~ClapTrap (){
    std::cout<<"Destructor called\n"; 
}

void ClapTrap::attack(std::string const & target){
    std::cout<<"FR4G-TP ";
    std::cout<<"<"<<this->Name<<"> ";
    std::cout<<"attacks <"<<target;
    std::cout<<">, causing <";
    std::cout<<this->Attack_damage<<"> ";
    std::cout<<"points of damage!\n";

}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout<<"takeDamage called\n";
    this->Attack_damage += amount;
}

 void ClapTrap::beRepaired(unsigned int amount){
    std::cout<<"beRepaired called\n";
 }