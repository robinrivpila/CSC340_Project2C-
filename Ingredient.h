#pragma once
#include <iostream>
using namespace std;
#include <string>

class Ingredient{
private:
    string name;
    string amount;
public:
    Ingredient();
    Ingredient(string name,  string amount); 
    
    string getName();
    string getAmount();
    void viewIngredientInfo(); 
};