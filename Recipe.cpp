#include "Recipe.h"
#include <iostream>
#include <string>
using namespace std; 

Recipe::Recipe(){

}

Recipe::Recipe(string name, int curIngrIndex, int curInstIndex, Ingredient* ingredients, string* instructions ){
    this->name = name; 
    this->curIngrIndex = 0; 
    this->curInstIndex = 0;
    this->ingredients = ingredients;
    this->instructions = instructions; 
}

Recipe::~Recipe(){
    delete ingredients;
    delete instructions; 
}

string Recipe::getName(){
    return name;
}

void Recipe::viewIngredients(){
    for(int i = 0; i < curIngrIndex; i++){
        ingredients[i].viewIngredientInfo(); 
    }
}









