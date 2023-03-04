#include "RBTree.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    RBTree<string, int> data;
    data.insert("Nicholas Warren", 19);

    string input;

    cout << "WELCOME!" << endl;
    while(input != "exit"){
        cout << "Enter a name to be added to the database!\n";
        cin >> input;
        data.insert(input, input[0]);
        data.printTree();
    }
    
    return 0;
}