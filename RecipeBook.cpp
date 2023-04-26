#include "RecipeBook.h"
#include "Recipe.h"
#include "Ingredient.h"
#include <iostream>
#include <string>
using namespace std; 

RecipeBook:: RecipeBook(){
    curRecipeInd = 0; 
    recipes = new Recipe[capacity]; 
}

RecipeBook::~RecipeBook(){
    delete recipes; 
}

void RecipeBook::viewAllRecipes(){
    cout << "Recipes: " << endl; 
    for(int i = 0; i < curRecipeInd; i++){
       cout << i + 1 << ". " <<  recipes[i].getName() << endl; 
    }
}

