/*
Skeleton code for storage and buffer management
*/

#include <string>
#include <ios>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cmath>
#include "classes.h"
using namespace std;


int main(int argc, char* const argv[]) {

    // Create the EmployeeRelation file from Employee.csv
    StorageBufferManager manager("EmployeeRelation");
    manager.createFromFile("Employee.csv");
    
    // Loop to lookup IDs until user is ready to quit
    int id;
    Record foundrecord;
    while(true) {
        cout<<"Try to found your ID(-1 to quit):";
        cin>>id;
        if (id == -1) {
            break;
        }
        foundrecord = manager.findRecordById(id);
        foundrecord.print();
    }

    return 0;
}
