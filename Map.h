/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Map.h
 * Author: blairjackson
 *
 * Created on 29 March 2018, 1:30 PM
 */

#ifndef MAP_H
#define MAP_H
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

class Map {
public:
    Map();
    Map(const Map& orig);
    virtual ~Map();

    void add_to_multimap(string filename, int line_num, string new_string);
    void print_map();
    void write_map(string filename);

private:

    multimap <string, pair<int, string > > new_multimap;


};

#endif /* MAP_H */

