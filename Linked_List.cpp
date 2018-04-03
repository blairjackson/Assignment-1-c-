/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Linked_List.cpp
 * Author: blairjackson
 * 
 * Created on 6 March 2018, 9:07 PM
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

using namespace std;

Linked_List::Linked_List() {
}

//gets the line from the file and passes to be added to linked list

void Linked_List::get_line(string filename) {
    set_file(filename);
    string line;

    ifstream file(filename);

    if (!file) {
        cerr << "problem opening file" << endl;
    }

    while (getline(file, line)) {
        add_linked_list(line);
    }
}

//takes the line passed from the file, creates a node and adds to linked list

bool Linked_List::add_linked_list(string line) {

    Node * new_node;

    new_node = new Node;
    new_node->data = line;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
        tail = new_node;
    } else {
        //adds to back of the Linked List to keep the read the same as the file
        tail->next = new_node;
        tail = new_node;

    }
    return head;
}

void Linked_List::string_compare(string line, Map& pass_map) {

    Node * current;

    current = head;

    while (current != nullptr) {
        ++line_num;

        if (current->data.find(line) != std::string::npos) {
            cout << current->data << endl;
            pass_map.add_to_multimap(file_name, line_num, line);

        }
        current = current->next;
    }

}

void Linked_List::print_linked_list()const {

    Node * current;

    current = head;

    while (current != nullptr) {
       // cout << current->data << endl;
        current = current->next;
    }
}

Linked_List::Linked_List(const Linked_List& orig) {
}

Linked_List::~Linked_List() {
}

