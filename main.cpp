#include "main.h"
#include "todolist.h"

int main() {
    ToDoList tdList("My first to do", "Go grocery shopping");
    tdList.addItem("Check email");

    tdList.displayList();
    
    tdList.removeItem(1);

    cout << endl; // formatting
    tdList.displayList();

    return 0;
}