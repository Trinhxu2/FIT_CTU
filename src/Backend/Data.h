//
// Created by pjahoda on 4/21/17.
//

#ifndef RECIPE_MANAGER_DATA_H
#define RECIPE_MANAGER_DATA_H

#include "Connection.h"
#include <set>
#include "Recipe.h"
#include "User.h"

class Data : public Connection
{
public:
    Data();

    void GetDataFromDatabase(const int);

    void GetRecipesBySelectedIngredients(const vector <string> &selectedIngredients);

    map <string, string> &GetMapOfIngridients();

    map <string, string> &GetMapOfRecipes();

    string GetRecommendedRecipe(const Recipe &recipe, const int userID);

    ~Data();

    User *GetUser() const;

    void CreateNewUser(User *user1);

    void CreateRecipeBasedOnIngredientsSelected(const vector <string> &selectedIngredients);

    Recipe *GetRecipe() const;

    void DeleteRecipeBasedOnIngredients();

    void DeleteRecipesRetrievedFromDatabase();

    void UpdateScreenWidth(const int width);

    Recipe *GetRecipeByIndex(const string &index) const;

protected:
private:
    void CopyIntoMap(const pqxx::result &, const string, map <string, string> &);

    void CopyIntoMapRecipes(const pqxx::result &, map<int, vector<Recipe *> > &);

    void FindItInAMapOfIngredients(string category, vector <string> &ingredients, const vector <string> &selectedIngredients);

    map <string, string> beveragesAndCategory;
    map <string, string> foodNameAndCategory;
    map<int, vector<Recipe *> > mapOfUsersAndRecipesTheyLiked;

    User *user;

    vector<Recipe *> recipesSelectByIngredients;
    map <string, string> recipesString;

    Recipe *recipe;
    Recipe *recommendedRecipe;

    int screenWidth;
};

#endif //RECIPE_MANAGER_DATA_H
