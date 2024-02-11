#include <iostream>
#include "readin_return_int_stack.h"
#include <stack>
#include "prefix_sum.h"
#include <queue>
using namespace std;

int main (){
    //NON NEG TEST STACK
    stack <int> s= get_ints_from_file("input.txt");
    int array_len = s.size();
    int array_for_prefix_sum[array_len];

    int position=0;
    while (!s.empty()){
        array_for_prefix_sum[position++]= s.top();
        s.pop();

    }
    if (non_negative_prefix(array_for_prefix_sum,array_len)){
        cout << "non_neg" << endl;
    }else{
        cout << "neg" << endl;
    }

   
    //NON NEG TEST QUEUE
    queue <int> q= get_ints_from_file2("input.txt");
    int array2_len = q.size();
    int array2_for_prefix_sum[array2_len];

    int position2=0;
    while (!q.empty()){
        array2_for_prefix_sum[position2++]= q.front();
        q.pop();
    }
    if (non_negative_prefix(array2_for_prefix_sum,array2_len)){
    cout << "non_neg" << endl;
    }else{
    cout << "neg" << endl;
    }
    
    // NEG TEST STACK
    stack <int> s2= get_ints_from_file("input2.txt");
    int array3_len = s2.size();
    int array3_for_prefix_sum[array3_len];

    int position3=0;
    while (!s2.empty()){
        array3_for_prefix_sum[position3++]= s2.top();
        s2.pop();

    }
    if (non_negative_prefix(array3_for_prefix_sum,array3_len)){
        cout << "non_neg" << endl;
    }else{
        cout << "neg" << endl;
    }


    //NEG QUEUE TEST

    queue <int> q2= get_ints_from_file2("input2.txt");
    int array4_len = q2.size();
    int array4_for_prefix_sum[array4_len];

    int position4=0;
    while (!q2.empty()){
        array4_for_prefix_sum[position4++]= q2.front();
        q2.pop();
    }
    if (non_negative_prefix(array4_for_prefix_sum,array4_len)){
    cout << "non_neg" << endl;
    }else{
    cout << "neg" << endl;
    }
}   