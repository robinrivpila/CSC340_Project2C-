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
    ingredients = new Ingredient[capacity];
    instructions =  new string[capacity]; 
}

Recipe::~Recipe(){
    delete ingredients;
    delete instructions; 
}

string Recipe::getName(){
    return name;
}

void Recipe::viewIngredients(){
    cout << "Ingredients List: " << endl; 
    for(int i = 0; i < curIngrIndex; i++){
        cout << i +1 << ". "; 
        ingredients[i].viewIngredientInfo(); 
    }
}

void Recipe::viewInstructions(){
    cout << "Instructions: " << endl; 
    for(int i = 0; i < curInstIndex; i++){
        cout << "Step " << i +1 << ": " << instructions[i] << endl; 
    }
}
void Recipe::addIngredient(Ingredient newIngredient){
    if(curIngrIndex < capacity){
        ingredients[curIngrIndex] = newIngredient;
        curIngrIndex++;
    }
}

void Recipe::addInstruction(string newInstruction){
    if(curInstIndex < capacity){
        instructions[curInstIndex] = newInstruction;
        curInstIndex++;
    }
}








