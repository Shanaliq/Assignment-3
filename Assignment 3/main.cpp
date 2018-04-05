//
//  main.cpp
//  Assignment 3
//
//  Created by Shan Qamruddin on 4/3/18.
//  Copyright © 2018 Shan Qamruddin. All rights reserved.
//

#include <iostream>
#include "BinaryTree.h"
#include <fstream>
#include <string>
BinaryTree list;
ItemType item;

using namespace std;

void fileHandler(string file){ // handles the file input.
    //THE REQUESTED FILE HANDLER FROM ASSIGNMENT 2 INSTRUCTIONS
    int input;
    std::fstream fs;
    fs.open(file);
    if(fs.is_open())
    {
        fs >> input;
        while(!fs.eof())
        {
            item.initialize(input);
            list.insert(list.root , item);
            fs >> input;
        }
    }
    else{
        std::cout<<"Failed to open the input file"<<std::endl;
        exit(0);
    }
}


int main(int argc, const char * argv[]) {
    bool found = false;
    fileHandler("/Users/nekosama/Downloads/input1.txt");
    list.inOrder(list.root);
    std::cout<< "\n";
    list.postOrder(list.root);
    std::cout<< "\n";
    list.preOrder(list.root);
    item.initialize(12);
    list.retrieve(list.root,item,found);
    std::cout<<found;
}
