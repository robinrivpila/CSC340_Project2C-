#include "Ingredient.cpp"
#include "Recipe.cpp"
#include <iostream>
using namespace std; 
#include <string>

int main(){
    Ingredient ingrdt1 = Ingredient("Banana","2 pieces"); 
    Recipe recipe1 = Recipe("Banana Milk"); 
    recipe1.addInstruction("Cut banana"); 
    recipe1.addInstruction("Pour milk"); 
    recipe1.addIngredient(ingrdt1); 
    recipe1.addIngredient(Ingredient("Milk", "2 cups")); 
    recipe1.viewIngredients(); 
    recipe1.viewInstructions(); 
    
}; 

