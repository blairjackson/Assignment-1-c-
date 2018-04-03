/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Set.h
 * Author: blairjackson
 *
 * Created on 6 March 2018, 8:25 PM
 */

#ifndef SET_H
#define SET_H

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>
#include <map>
#include <memory>
#include <list>

#include "Vector.h"
#include "Map.h"
#include "List.h"
#include "main.h"

using namespace std;

class Set {
public:
    Set();
    void add_set(string filename);
    void compare_string(string line, Map &pass_map);
    void set_file(string filename){
        file_name = filename;
    }
    string get_file(){
        return file_name;
    }
    
    Set(const Set& orig);
    virtual ~Set();
private:
    multiset<string> strings;
    string line;
    string file_name;
    int line_num = 1;
};

#endif /* SET_H */

