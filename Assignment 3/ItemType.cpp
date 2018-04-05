//
//  ItemType.cpp
//  Project 2
//
//  Created by Shan Qamruddin on 3/8/18.
//  Copyright © 2018 Shan Qamruddin. All rights reserved.
//

#include "ItemType.h"
#include <iostream>


ItemType::ItemType(){
}

void ItemType::print(){
    std::cout << this->value << "\n";
}

void ItemType::initialize(int number){
    this->value = number;
}

int ItemType::getValue() const {
    return this->value;
}
