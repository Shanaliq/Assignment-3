//
//  ItemType.hpp
//  Project 2
//
//  Created by Shan Qamruddin on 3/8/18.
//  Copyright © 2018 Shan Qamruddin. All rights reserved.
//

#ifndef ItemType_hpp
#define ItemType_hpp

#include <stdio.h>

#endif /* ItemType_hpp */


class ItemType {
private:
    int value; // its the value.... duh
    
public:
    ItemType();
    void print(); // ItemType object is created
    void initialize(int number); // ItemType object has been initialized, instance variable is printed to standard out.
    int getValue() const; // ItemType object has been initialized and returns the value instance variable.
};
