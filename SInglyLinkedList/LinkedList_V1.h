//
//  LinkedList_V1.h
//  SinglyLinedListC++ _ V1
//
//  Created by Adin Jahic on 01/12/2020.
//  Copyright © 2020 Adin Jahic. All rights reserved.
//
#ifndef LinkedList_V1_h
#define LinkedList_V1_h

struct node{
    int Data;
    node* Next;
};

class LinkedList: public node{
public:
    int size;
    int MaxSize;
    node* head;
    node* tail;
    node* current;
    LinkedList(int eSize){
        this->MaxSize = eSize;
        head = NULL;
        tail = NULL;
        current = NULL;
    }
    
    void addNodeEnd(int data){
        node* novi = new node;
        novi->Data = data;
        if(head == NULL){
            head = novi;
            current = novi;
            
        }
        current->Next = novi;
        tail = novi;
        current = novi;
        this->size++;
    }
    
    void addNodeStart(int data){
        node* novi = new node;
        novi->Data = data;
        if(head == NULL){
            head = novi;
            current = novi;
            tail = novi;
        }
        current = novi;
        current->Next = head;
        head = current;
        this->size++;
        
    }
    void insertNode(int data){
        node* novi = new node;
        novi->Data = data;
        node* ispredNovog = GetNext();
        current->Next = novi;
        novi->Next = ispredNovog;
        
    }
    node* GetNext(){
        node* temp = current;
        if(temp == tail){
            std::cout<<"NE MOZEMO IZVRSIT FUNKCIJU"<<&std::cout;
        }
        temp = temp->Next;
        return temp;
    }
    void PrintList(){
        node* temp = head;
        while(temp != tail){
            std::cout <<temp->Data<<" ";
            temp = temp->Next;
        }
            std::cout <<tail->Data<<std::endl;
    }
};

#endif /* LinkedList_V1_h */
