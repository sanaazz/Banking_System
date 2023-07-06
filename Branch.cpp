


#include <iostream>

#include "Branch.h"

using namespace std;

Branch::Branch(){
    branchId = 0;
    branchName = "";
}

void Branch::init(const int id, const string nm){

    branchId = id;
    branchName = nm;
}

void Branch::init(const Branch &other){
    branchId = other.branchId;
    branchName = other.branchName;
    
}

int Branch::get_BranchId(){
    return branchId;
}

string Branch::get_BranchName(){
    return branchName;
}

Branch::~Branch(){
    branchId = 0;
    branchName = "";
}
