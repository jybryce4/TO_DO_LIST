/** @file todolist.cpp
 * Purpose: implements the ToDoList class
 * @class ToDoList
 * @author Jamey Bryce
 * @date 01/24/2020
 */

#include "todolist.h"

/** 
 * ToDoList: constructor that sets the name of the to-do list
 * @param name: user entered name for the to-do list
*/
ToDoList::ToDoList(const string& name) {
    setName(name);
}

/** 
 * ToDoList: constructor that sets the name and adds the first item
 * @param name: user entered name for the to-do list
 * @param firstItem: user entered first entry in the to-do list
*/
ToDoList::ToDoList(const string& name, const string& firstItem) {
    setName(name);
    addItem(firstItem);
}

/** 
 * setName: sets the name of the to-do list
 * @param name: name for the to-do list
 * @pre name is not an empty string
 * @throw error 1 if name is empty
*/
void ToDoList::setName(const string& name) {
    if (name != "") {
        listName = name;
    } else {
        throw 1;
    }
}

/** 
 * getName: gets the name of the to-do list
 * @return listName: data member of the to-do list
*/
string ToDoList::getName() {
    return listName;
}

/**
 * getItem: gets an entry at a given index
 * @param index: the index in items to get
 * @pre index >= 0
 * @pre index in items range
 * @throw error 2 if index out of range
 * @return items[index] 
 */
string ToDoList::getItem(int index) {
    if (index >= 0 && index < items.size()) {
        return items.at(index);
    } else {
        throw 2;
    }
}

/** 
 * addItem: appends an entry to the to-do list
 * @param item: string to append
*/
void ToDoList::addItem(const string& item) {
    items.push_back(item);
}

/** 
 * removeItem: removes an entry from the to-do list
 * @param index: index of entry to remove
 * @pre index not out of range
 * @post items no longer has the entry at that index
 * @throw error 3 if index out of range
*/
void ToDoList::removeItem(int index) {
    if (index >= 0 && index < items.size()) {
        items.erase(items.begin() + index);
    } else {
        throw 3;
    }
}

/** displayList: outputs the entire to-do list to stdout */
void ToDoList::displayList() {
    int i = 0;
    for (auto it = items.begin(); it != items.end(); ++it, ++i) {
        cout << i + 1 << ") " << *it << endl;
    }
}





