/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   List.h
 * Author: blairjackson
 *
 * Created on 6 March 2018, 4:35 PM
 */

#ifndef LIST_H
#define LIST_H

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include <list>

//#include "Vector.h"
#include "Map.h"
#include "main.h"

using namespace std;

class List {
public:
    List();
    void add_list(string file);
    void compare_string(string line, Map & pass_map);
    void set_file(string file){
        file_name = file;
    }
    string get_file(){
        return file_name;
    }
    
    List(const List& orig);
    virtual ~List();
private:
    list<string> strings;
    string file_name;
    int line_num = 1;
};

#endif /* LIST_H */

