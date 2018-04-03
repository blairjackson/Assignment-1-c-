/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arg_parse.h
 * Author: blairjackson
 *
 * Created on 2 April 2018, 12:17 PM
 */

#ifndef ARG_PARSE_H
#define ARG_PARSE_H
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <memory>
#include <list>

#include "Vector.h"
#include "Map.h"
#include "Set.h"
#include "main.h"
#include "List.h"
#include "Linked_List.h"
#include "arg_parse.h"

using namespace std;

class arg_parse {
public:
    arg_parse();
    arg_parse(const arg_parse& orig);
    
    void print_args(int argc, char** argv);
    void add_args(string arg);
    string get_file(){
        return commands[0];
    }
    string get_search_word(){
        return commands[1];
    }
    
    void remove_args(){
        commands.erase(commands.begin(),commands.begin()+2);
    }
    
    int get_size(){
        return commands.size();
    }
    string get_struct(){
        return structure;
    }
    string get_ouput(){
        return output_file;
    }

    virtual ~arg_parse();
private:
    vector<string> commands;
    string structure,output_file;

};

#endif /* ARG_PARSE_H */

