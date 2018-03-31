//
//  Node.h
//  Lab01
//
//  Created by The Charlerys on 08/02/2018.
//  Copyright © 2018 University of the West Indies. All rights reserved.
//

#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include <sstream>

class Node
    {
        private:
            int idNo;
            string name;
            string surname;
            float gpa;
        
            Node* nextPtr;
        
        public:
            // Constructor functions
            Node();
            Node(int, string, string, float);
        
            // Accessor functions;
            string getName();
            string getRecord();                     // You need to write that function!
            int getID() { return idNo;}             // Inline function
            float getGPA() { return gpa; }          // Inline function
            Node* getNextPtr() { return nextPtr;}   // Inline function
        
            //Mutator functions
            void setData(int, string, string, float);
            void setGPA(float score) { gpa = score;}       // Inline function
            void setNextPtr(Node* ptr) { nextPtr = ptr;}   // Inline function
    };



//===========================================================================
//          Member functions' definition
//===========================================================================

Node::Node()
    {
        idNo = 0;
        name = "";
        surname = "";
        gpa = 0.0;
        nextPtr = NULL;
    }




Node::Node(int number, string firstName, string lastName, float score)
    {
        idNo    = number;
        name    = firstName;
        surname = lastName;
        gpa     = score;
        nextPtr = NULL;
    }




string Node::getName()
    {
        string nameStr = name;
        nameStr.append(" ");
        nameStr.append(surname);
        
        return nameStr;
    }




string Node::getRecord()
{
    string recStr = "";

    cout << idNo << " " << name << " " << surname << " " << gpa << "\n"; //"YOU need to write that function which appends all the fields to recStr\n";
    
    /***** Enter the code here ****/
    stringstream myRecord;
    string myRecStr = myRecord.str();
    recStr.append(myRecStr);
    
    return recStr;
}




void Node::setData(int number, string firstName, string lastName, float score)
    {
        idNo    = number;
        name    = firstName;
        surname = lastName;
        gpa     = score;
    }

#endif // NODE_H
 
