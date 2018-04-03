/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Map.cpp
 * Author: blairjackson
 * 
 * Created on 29 March 2018, 1:30 PM
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

Map::Map() {
}

Map::Map(const Map& orig) {
}

Map::~Map() {
}

void Map::add_to_multimap(string filename, int line_num, string new_string) {

    new_multimap.insert(pair<string, pair<int, string > >
            (filename, make_pair(line_num, new_string)));

}

void Map::print_map() {

    for (multimap <string, pair<int, string> >::iterator
        it = new_multimap.begin(); it != new_multimap.end(); ++it) {
        cout << it->first << "::" << it->second.first << "::"
                << it->second.second << endl;
    }
}

void Map::write_map(string filename) {
    ofstream myfile;
    myfile.open(filename);

    if (!myfile) {
        cerr << ("could not open file") << endl;
    }

    for (multimap <string, pair<int, string> >::iterator
        it = new_multimap.begin(); it != new_multimap.end(); ++it) {
        myfile << it->first << "::" << it->second.first
                << "::" << it->second.second << endl;

    }

    cout << "written to file" << endl;
    myfile.close();
}