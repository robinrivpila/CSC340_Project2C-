#pragma once
#include "Ingredient.h"
#include <iostream>
#include <string>
using namespace std; 

class Recipe{
private: 
    //need to decide if i want to have a max amnt of ingredients 
    //and also max amnt of instructions
    //need to have a counter for both ingredients and instr
    string name; 
    int curIngrIndex; 
    int curInstIndex;
    const int capacity = 30;
    Ingredient* ingredients; 
    string* instructions; 
public:
    Recipe(); 
    Recipe(string name ); 
    ~Recipe(); 
    string getName();
    void viewIngredients();
    void viewInstructions(); 
    void addIngredient(Ingredient newIngredient); 
    void addInstruction(string newInstruction); 
    
};