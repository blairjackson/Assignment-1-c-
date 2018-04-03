/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Set.cpp
 * Author: blairjackson
 * 
 * Created on 6 March 2018, 8:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <list>
#include <set>

#include "Vector.h"
#include "Set.h"
#include "Map.h"
#include "List.h"
#include "main.h"

using namespace std;

Set::Set() {
}

void Set::add_set(string filename) {

    set_file(filename);

    //open file (remember to change file to filename variable)
    ifstream file(filename);

    //check file opened correctly
    if (!file) {
        cerr << ("could not open file") << endl;
    }

    //read file line by line and store in list
    while (getline(file, line)) {
        strings.insert(line);
    }

}

void Set::compare_string(string line, Map& pass_map) {
    cout << "----" << get_file() << endl;
    for (set<string>::iterator it = strings.begin();
            it != strings.end(); ++it) {
        ++line_num;
        string check = *it;

        if (check.find(line) != std::string::npos) {


            pass_map.add_to_multimap(file_name, line_num, line);


        }
    }
}

Set::Set(const Set& orig) {
}

Set::~Set() {
}

