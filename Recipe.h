#pragma once
#include "Ingredient.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std; 

class Recipe{
private: 
    string name; 
    int curIngrIndex; 
    int curInstIndex;
    vector<Ingredient> ingredients; 
    vector<string> instructions;

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