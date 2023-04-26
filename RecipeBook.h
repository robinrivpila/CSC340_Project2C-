#pragma once
#include "Ingredient.h"
#include "Recipe.h"
#include <iostream>
#include <string>
using namespace std; 

class RecipeBook{
private: 
    int curRecipeInd; 
    const int capacity = 30; 
    Recipe* recipes; 
public:
    RecipeBook();
    ~RecipeBook(); 
    void viewAllRecipes();
    void viewRecipe(Recipe recipe);
    void addRecipe(Recipe recipe); 
}; 