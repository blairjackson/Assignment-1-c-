/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vector.cpp
 * Author: blairjackson
 * 
 * Created on 6 March 2018, 4:33 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <list>

#include "Vector.h"
#include "Map.h"
#include "main.h"

using namespace std;

Vector::Vector() {
}

void Vector::add_vector(string filename) {

    string line;
    set_filename(filename); //set filename to be used when adding to map

    //open file (remember to change file to filename variable)
    ifstream file(filename);

    //check file opened correctly
    if (!file) {
        cerr << ("could not open file") << endl;
    }

    //read file line by line and store in vector
    while (getline(file, line)) {
        strings.push_back(line);
    }

}

void Vector::compare_string(string line, Map &pass_map) {


    for (vector<string>::iterator it = strings.begin();
            it != strings.end(); ++it) {
        ++line_num;
        string check = *it;

        //find substring match
        if (check.find(line) != std::string::npos) {


            pass_map.add_to_multimap(file_name, line_num, line);


        }
    }
}

Vector::Vector(const Vector& orig) {
}

Vector::~Vector() {
}

