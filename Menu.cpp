#include "Ingredient.h"
#include "Recipe.h"
#include "RecipeBook.h"
#include "Menu.h"
#include <iostream>
using namespace std; 

Menu::Menu(){
    recipeBook = RecipeBook(); 
}

void Menu::mainMenu(){
    bool isInUse = true; 

    while(isInUse){

        cout << "Select an option: " << endl;
        cout << "1) Create a new recipe" << endl; 
        cout << "2) Browse recipes" << endl;
        cout << "3) View a recipe" << endl;
        cout << "4) Exit" << endl; 

        int userInput; 

        cin >> userInput; 

        switch(userInput){
            case 1:
                addRecipe(); 
                recipeBook.viewAllRecipes(); 
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                isInUse = false; 
                break; 
        }

    }
}

void Menu::addRecipe(){
    string recipeName; 
    bool isInUse = true; 
    cout << "Enter recipe name: " << endl; 
    cin.ignore();
    getline(cin, recipeName);
    Recipe newRecipe = Recipe(recipeName); 
    recipeBook.addRecipe(newRecipe); 
    while(isInUse){
        string ingredientName;
        string ingredientAmount; 
        string userInput; 
        string blank;  
        cout << "Enter ingredient name: " << endl; 
        cin.ignore();
        getline(cin, ingredientName);
        cout << "Enter amount: " << endl;
        cin.ignore();
        getline(cin, ingredientAmount);
        Ingredient newIngredient = Ingredient(ingredientName, ingredientAmount); 
        newRecipe.addIngredient(newIngredient); 
        cout << "Do you have more ingredients to enter? (y/n)";
        cin >> userInput; 
        if(userInput == "n"){
            isInUse = false; 
        }
    }

}

