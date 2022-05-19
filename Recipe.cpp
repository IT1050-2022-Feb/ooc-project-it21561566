//IT21786464 , Nisal V P T , Group_MlB_03.02.01
#include <cstring>
#include <iostream>
using namespace std;

class Recipe {
private:
    char recipeId[10];
    char recipeName[50];
    char publishDate[20];
    char category[20];
public:
    Recipe();
    Recipe(const char rId[], const char rName[], const char rdate[], const char rCategory[]);
    void DisplayRecipe();
    void UpdateRecipe();
    ~Recipe();
};



Recipe::Recipe()
{
    strcpy(recipeId, "");
    strcpy(recipeName, "");
    strcpy(publishDate, "");
    strcpy(category, "");
}

Recipe::Recipe(const char rId[], const char rName[], const char rdate[], const char rCategory[])
{
    strcpy(recipeId, rId);
    strcpy(recipeName, rName);
    strcpy(publishDate, rdate);
    strcpy(category, rCategory);
}

void Recipe::DisplayRecipe()
{
    cout << "Recipe Id:" << recipeId << endl;
    cout << "Recipe Name:" << recipeName << endl;
    cout << "Date:" << publishDate << endl;
    cout << "Category:" << category << endl;
}

void Recipe::UpdateRecipe()
{
}

Recipe::~Recipe()
{
    cout << "Everthing is deleted" << endl;
}

class staffMember {
private:
    Recipe* staffM;
    char designation[20];
public:
    staffMember();
    staffMember(const char rrid[] , const char rrname[] , const char rrdate[] , const char rtype[] , const char design[]);
    void DispayStaffMember();
    ~staffMember();
};

staffMember::staffMember()
{
    strcpy(designation, "");
    staffM = new Recipe();
}

staffMember::staffMember(const char rrid[], const char rrname[], const char rrdate[], const char rtype[], const char design[])
{
    staffM = new Recipe(rrid, rrname, rrdate, rtype);
    strcpy(designation, design);
}

void staffMember::DispayStaffMember()
{
    staffM->DisplayRecipe();
    cout << "Publisher Type:" << designation << endl;
}

staffMember::~staffMember()
{
    cout << "Staff Member Deleted" << endl;
}
int main() {
    staffMember* s1 = new staffMember("RCP100", "BBQ chicken", "2022-05-06", "Chicken and Grill", "Chef");
    s1->DispayStaffMember();
    delete s1;
    return 0;
}