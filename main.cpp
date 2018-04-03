/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: blairjackson
 *
 * Created on 1 April 2018, 11:43 AM
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
#include <chrono>

#include "Vector.h"
#include "Map.h"
#include "Set.h"
#include "main.h"
#include "List.h"
#include "Linked_List.h"
#include "arg_parse.h"



using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {


    //string filename = "test.txt", output_file = "output.txt", line_to_compare = "supppaaaa", memory_type = "linked list";

    Vector vex;
    List new_list;
    Set new_set;
    Linked_List new_ll;
    Map map;

    //argument parser....

    arg_parse args;
    args.print_args(argc, argv);

    string memory_type = args.get_struct();
    string output_file = args.get_ouput();
    string filename, line_to_compare;

    //get filename and string to search and pass into matching struct

    auto start = chrono::steady_clock::now();

    while (args.get_size() != 0) {

        filename = args.get_file();
        line_to_compare = args.get_search_word();
       


        if (memory_type == "stdvector") {

            vex.add_vector(filename);
            vex.compare_string(line_to_compare, map);


        } else if (memory_type == "stdlist") {

            new_list.add_list(filename);
            new_list.compare_string(line_to_compare, map);

        } else if (memory_type == "stdset") {

            new_set.add_set(filename);
            new_set.compare_string(line_to_compare, map);
        } else if (memory_type == "custlist") {

            new_ll.get_line(filename);

            new_ll.string_compare(line_to_compare, map);
        } else {
            cerr << "invalid memory type" << endl;
        }

        args.remove_args();
    }







    //create a write to file 
    map.write_map(output_file);

    //show time elapsed for structure
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << "Elapsed time is :  " << chrono::duration_cast<chrono::microseconds>
            (diff).count() << " microseconds " << endl;

    return EXIT_SUCCESS;
}

