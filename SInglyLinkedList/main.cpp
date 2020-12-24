//
//  main.cpp
//  SinglyLinedListC++ _ V1
//
//  Created by Adin Jahic on 30/11/2020.
//  Copyright © 2020 Adin Jahic. All rights reserved.
//

#include <iostream>
#include "LinkedList_V1.h"
using std::cout;
using std::cin;
using std::endl;


int main() {
    int nSize;
    cout<<"Enter the length of the list: ";
    cin >>nSize;
    LinkedList NewList(nSize);
    NewList.addNodeStart(1);
    NewList.addNodeEnd(3);
    NewList.addNodeStart(2);
    NewList.addNodeStart(5);
    NewList.PrintList();
    cout <<endl;
    NewList.insertNode(10);
    NewList.PrintList();
}
