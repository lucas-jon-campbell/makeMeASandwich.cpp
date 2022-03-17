//
// Created by Lucas Campbell on 16/3/22.
//

#ifndef MAIN_CPP_INGREDIENTGENERATOR_H
#define MAIN_CPP_INGREDIENTGENERATOR_H

#endif //MAIN_CPP_INGREDIENTGENERATOR_H
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;



void ingredientGenerator(int numLayers){


    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("ingredients.txt");

    // Use a while loop together with the getline() function to read the file line by line

    string ingredient[79];
    for (int i=1; i<79;i++) {

        (getline(MyReadFile, ingredient[i]));

    }


    srand((unsigned) time(0));
    int randNum;
    randNum = (rand()%79)+1;

    int numOfIngredients=4;
    int layers=numLayers;
    int iteration=0;

    while (iteration<layers) {
        for(int j=0; j<1; j++) {
            cout << ingredient[(rand()%79)+1] << "\n";
        }
        iteration++;
    }

    // Close the file
    MyReadFile.close();
}
