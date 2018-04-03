/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vector.h
 * Author: blairjackson
 *
 * Created on 6 March 2018, 4:33 PM
 */


#ifndef VECTOR_H
#define VECTOR_H

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

class Vector: public Map 
{
public:
    Vector();
    void get_map(multimap<string, pair<int, string> >  & pass_map);
    void add_vector(string filename);
    void compare_string(string line, Map &pass_map);

    void set_filename(string file){
        file_name = file;
    }
    
    string get_filename(){
        return file_name;
    }
    
    Vector(const Vector& orig);
    virtual ~Vector();
private:
    vector<string> strings;
    string file_name;
    int line_num = 1;
    

};

#endif /* VECTOR_H */

