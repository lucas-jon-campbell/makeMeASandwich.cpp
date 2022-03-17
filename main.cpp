#include <iostream>
#include <string>
#include "ingredientGenerator.h"
#include "bunGenerator.h"

using namespace std;

int main ()
{

    cout << "\n   >> How many layers?\n";
    int layerNum;
    cin >> layerNum;

    cout << "\n";

    bunGenerator(1);
    ingredientGenerator(layerNum);
    bunGenerator(1);
    cout << "\n";


    return 0;
}
