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
    bool continueLoop = true;
    char userInputChar;
    int userInputNum;
    std::cout <<"Commands - insert (i), delete (d), retrieve (r), length (l), in-order(n), pre-order (p), post-order (o), quit(q)\n";
    
    
    fileHandler("/Users/nekosama/Downloads/input1.txt");
    while (continueLoop == true) {
        std::cout << "Enter a command: ";
        cin >> userInputChar;
        switch (userInputChar) {
            case 'i': {
                std::cout << "Number to insert: ";
                cin >> userInputNum;
                item.initialize(userInputNum);
                list.insert(list.root, item);
                break;
            }
            case 'd': {
                std::cout << "Number to delete: ";
                cin >> userInputNum;
                item.initialize(userInputNum);
                list.deleteItem(list.root, item);
                break;
            }
            case 'l': {
                std::cout << "List Length is " << list.getLength() << "\n";
                break;
            }
            case 'n': {
                list.inOrder(list.root);
                break;
            }
            case 'p': {
                list.preOrder(list.root);
                break;
            }
            case 'o': {
                list.postOrder(list.root);
                break;
            }
            case 'r': {
                bool itemFound = false;
                std::cout << "Item to be retrieved: ";
                cin >> userInputNum;
                item.initialize(userInputNum);
                list.retrieve(list.root, item, itemFound);
                if(itemFound == true){
                    std::cout << "Item found in tree.";
                }
                else{
                    std::cout << "Item not in tree.";
                    
                }
                break;
            }
            case 'q': {
                std::cout << "Quitting program.. \n";
                exit(0);
                break;
            }
        }
        std::cout <<"\n";
    }
}
