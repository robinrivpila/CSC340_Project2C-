#include "Recipe.h"
#include "Ingredient.h"
#include <iostream>
#include <string>
using namespace std; 

Recipe::Recipe(){

}

Recipe::Recipe(string name){
    this->name = name; 
    this->curIngrIndex = 0; 
    this->curInstIndex = 0;
}

Recipe::~Recipe(){
    
}

string Recipe::getName(){
    return name;
}

void Recipe::viewIngredients(){
    if(ingredients.size() > 0){   
        cout << "Ingredients List: " << endl; 
        int counter = 1 ; 
        for(Ingredient ingredient:ingredients){
            cout << counter << ". "; 
            ingredient.viewIngredientInfo(); 
            counter++; 
        }
    }
}

void Recipe::viewInstructions(){
    cout << "Instructions: " << endl; 
    int counter = 1; 
    for(auto i = instructions.begin(); i !=instructions.end(); i++){
        cout << "Step " << counter << ": " << *i << endl;
        counter++; 
    }
}
void Recipe::addIngredient(Ingredient newIngredient){
        ingredients.push_back(newIngredient); 
        curIngrIndex++;
    
}

void Recipe::addInstruction(string newInstruction){
        instructions.push_back(newInstruction); 
        curInstIndex++;
}








