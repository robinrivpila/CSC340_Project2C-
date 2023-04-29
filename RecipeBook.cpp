#include "RecipeBook.h"
#include "Recipe.h"
#include "Ingredient.h"
#include <iostream>
#include <string>
using namespace std; 

RecipeBook:: RecipeBook(){
    curRecipeInd = 0; 
}

RecipeBook::~RecipeBook(){
    
}

void RecipeBook::viewAllRecipes(){
    cout << "Recipes: " << endl; 
    for(int i = 0; i < curRecipeInd; i++){
       cout << i + 1 << ". " <<  recipes.at(i).getName() << endl; 
    }
}

void RecipeBook::viewRecipe(int index ){
    cout << recipes.at(index-1).getName() << " Recipe: " << endl; 
    recipes.at(index-1).viewIngredients();
    recipes.at(index-1).viewInstructions(); 
}

void RecipeBook::addRecipe(Recipe newRecipe){
    recipes.push_back(newRecipe); 
    curRecipeInd++; 
}



