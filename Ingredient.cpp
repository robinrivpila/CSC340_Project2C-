#include "Ingredient.h"
#include <iostream>
using namespace std; 
#include <string>

Ingredient::Ingredient(){

}

Ingredient::Ingredient(string name,  string amount){
    this->name = name; 
    this->amount = amount;  
};


string Ingredient::getName(){
    return name; 
};

string Ingredient::getAmount(){
    return amount; 
};


void Ingredient::viewIngredientInfo(){
    cout << name << " " << amount  << endl; 
};