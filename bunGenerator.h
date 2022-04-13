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



void bunGenerator(int numLayers){


    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("buns.txt");
    string line;

    // Get number of lines so ingredients can be added without changing code
    int number_of_lines = 0;
    ifstream myfile("buns.txt");
    while (std::getline(myfile, line)) {
        ++number_of_lines;
    }

    // Use a while loop together with the getline() function to read the file line by line

    string ingredient[number_of_lines];
    for (int i=1; i<number_of_lines;i++) {

        (getline(MyReadFile, ingredient[i]));

    }


    srand((unsigned) time(0));
    int randNum;
    randNum = (rand()%number_of_lines);

    int numOfIngredients=4;
    int layers=numLayers;
    int iteration=0;

    while (iteration<layers) {
        for(int j=0; j<1; j++) {
            cout << ingredient[(rand()%number_of_lines)] << "\n";
        }
        iteration++;
    }

    // Close the file
    MyReadFile.close();
}
