/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arg_parse.cpp
 * Author: blairjackson
 * 
 * Created on 2 April 2018, 12:17 PM
 */
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

arg_parse::arg_parse() {
}

arg_parse::arg_parse(const arg_parse& orig) {
}

arg_parse::~arg_parse() {
}

void arg_parse::print_args(int argc, char** argv) {
    
    int i;

    for (i = 0; i < argc; ++i) {
        if (i > 0 && i < (argc - 2)) {
            
            string new_string = string(argv[i]);
            
            add_args(new_string);
        } else if (i == (argc - 2)) {
            string new_struct = string(argv[i]);
            output_file = new_struct;
            
        } else if (i == (argc - 1)) {
            string new_struct = string(argv[i]);
            structure = new_struct;
            
        }
    }

}

void arg_parse::add_args(string arg) {

    commands.push_back(arg);


}

