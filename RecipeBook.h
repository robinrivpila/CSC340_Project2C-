#pragma once
#include "Ingredient.h"
#include "Recipe.h"
#include <iostream>
#include <string>
using namespace std; 
#include <vector>

class RecipeBook{
private: 
    int curRecipeInd; 
    vector<Recipe> recipes; 
public:
    RecipeBook();
    ~RecipeBook(); 
    void viewAllRecipes();
    void viewRecipe(int index);
    void addRecipe(Recipe newRecipe); 
}; 