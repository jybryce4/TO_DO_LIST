/** 
 * @file todolist.h
 * Purpose: declares the ToDoList class
 * @author Jamey Bryce
 * @date 01/24/2020
*/

#ifndef TO_DO_LIST_H
#define TO_DO_LIST_H

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class ToDoList {
private:
    string listName;
    vector<string> items;
public:
    ToDoList(const string& name);
    ToDoList(const string& name, const string& firstItem);

    void setName(const string& name);
    string getName();

    string getItem(int index);
    void addItem(const string& item);
    void removeItem(int index);

    void displayList();

}; // end ToDoList

#endif // TO_DO_LIST_H