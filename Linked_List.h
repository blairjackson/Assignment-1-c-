/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Linked_List.h
 * Author: blairjackson
 *
 * Created on 6 March 2018, 9:07 PM
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

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

using namespace std;

class Linked_List {
public:
    Linked_List();
    void get_line(string filename);
    bool add_linked_list(string line);
    void print_linked_list()const;
    void string_compare(string line, Map& pass_map);
    void set_file(string filename){
        file_name = filename;
    }
    string get_file(){
        return file_name;
    }
    
    
    Linked_List(const Linked_List& orig);
    virtual ~Linked_List();
private:
    string file_name;
    int line_num;
    
    struct Node{
        string data;
        
        //remember to add unique_ptrs<>
        Node * next;
        Node * prev;
    };
    
    Node * head = nullptr, * tail;
};

#endif /* LINKED_LIST_H */

