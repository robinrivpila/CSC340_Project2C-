#pragma once
#include "Recipe.h"
#include "Ingredient.h"
#include "RecipeBook.h"
#include <iostream>
using namespace std;

class Menu{
private:
    RecipeBook recipeBook; 
public:
    Menu(); 
    void mainMenu(); 
    void addRecipe(); 
    void browseRecipes();
    void viewARecipe(); 
};