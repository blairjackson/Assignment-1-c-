/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.cpp
 * Author: blairjackson
 * 
 * Created on 6 March 2018, 4:35 PM
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
#include "List.h"

using namespace std;

List::List() {
}

void List::add_list(string filename) {


    string line;
    set_file(filename);

    //open file (remember to change file to filename variable)
    ifstream file(filename);

    //check file opened correctly
    if (!file) {
        cerr << ("could not open file") << endl;
    }

    //read file line by line and store in list
    while (getline(file, line)) {
        strings.push_back(line);
    }

}

void List::compare_string(string line, Map& pass_map) {
    cout << "----" << get_file() << endl;
    for (list<string>::iterator it = strings.begin();
            it != strings.end(); ++it) {
        ++line_num;
        string check = *it;

        if (check.find(line) != std::string::npos) {


            pass_map.add_to_multimap(file_name, line_num, line);


        }
    }
}

List::List(const List& orig) {
}

List::~List() {
}

