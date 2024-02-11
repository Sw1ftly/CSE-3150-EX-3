#include <iostream>
#include "readin_return_int_stack.h"
#include <fstream>
#include <stack>
#include <queue>
using namespace std;


stack <int> get_ints_from_file(string file_name){
    
    ifstream input_file;
    input_file.open(file_name);

    stack <int> int_stack;


    while (!input_file.eof()) {
      string in_str;
      input_file >> in_str;
      int in_int;
      in_int = stoi(in_str);
      int_stack.push(in_int);
      cout << in_int << endl;
    }

  input_file.close();   

  return int_stack;
}

queue <int> get_ints_from_file2(string file_name){
    
    ifstream input_file;
    input_file.open(file_name);

    queue <int> int_queue;


    while (!input_file.eof()) {
      string in_str;
      input_file >> in_str;
      int in_int;
      in_int = stoi(in_str);
      int_queue.push(in_int);
      cout << in_int << endl;
    }

  input_file.close();   

  return int_queue;
}

