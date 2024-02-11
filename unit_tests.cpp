#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "prefix_sum.h"
#include "readin_return_int_stack.h"
#include <fstream>
#include <stack>
#include <queue>


int test_ary_0[]={};
int test_ary_1[]={1,-1};
int test_ary_2[]={1,1,1,1,1,1,1,1,1};
int test_ary_3[]={-1,-1,-1,-1,-1};
int test_ary_4[]={1,-1,1,1,1,-1};
int test_ary_5[]={-1,-1,1,1,1};



TEST_CASE("non_positive_prefix"){
    CHECK_FALSE(! non_positive_prefix(test_ary_0,sizeof(test_ary_0)/sizeof(test_ary_0[0])));
    CHECK_FALSE(non_positive_prefix(test_ary_1,sizeof(test_ary_1)/sizeof(test_ary_1[0])));
    CHECK_FALSE(non_positive_prefix(test_ary_2,sizeof(test_ary_2)/sizeof(test_ary_2[0])));
    CHECK_FALSE(! non_positive_prefix(test_ary_3,sizeof(test_ary_3)/sizeof(test_ary_3[0])));
    CHECK_FALSE(non_positive_prefix(test_ary_4,sizeof(test_ary_4)/sizeof(test_ary_4[0])));
    CHECK_FALSE(non_positive_prefix(test_ary_5,sizeof(test_ary_5)/sizeof(test_ary_5[0])));
}

    
TEST_CASE("non_negative_prefix"){ 
    CHECK_FALSE(! non_negative_prefix(test_ary_0,0));
    CHECK_FALSE(! non_negative_prefix(test_ary_1,sizeof(test_ary_1)/sizeof(test_ary_1[0])));
    CHECK_FALSE(! non_negative_prefix(test_ary_2,sizeof(test_ary_2)/sizeof(test_ary_2[0])));
    CHECK_FALSE(non_negative_prefix(test_ary_3,sizeof(test_ary_3)/sizeof(test_ary_3[0])));
    CHECK_FALSE(! non_negative_prefix(test_ary_4,sizeof(test_ary_4)/sizeof(test_ary_4[0])));
    CHECK_FALSE(non_negative_prefix(test_ary_5,sizeof(test_ary_5)/sizeof(test_ary_5[0])));  
}
TEST_CASE ("stack non neg prefix sum"){
    stack <int> s= get_ints_from_file("input.txt");
    int array_len = s.size();
    int array_for_prefix_sum[array_len];

    int position=0;
    while (!s.empty()){
        array_for_prefix_sum[position++]= s.top();
        s.pop();
    }
    CHECK_EQ (non_negative_prefix(array_for_prefix_sum,array_len), true);

}

TEST_CASE("stack neg prefix sum"){
    stack <int> s2= get_ints_from_file("input2.txt");
    int array3_len = s2.size();
    int array3_for_prefix_sum[array3_len];

    int position3=0;
    while (!s2.empty()){
        array3_for_prefix_sum[position3++]= s2.top();
        s2.pop();

    }
    CHECK_EQ (non_negative_prefix(array3_for_prefix_sum,array3_len), false);

}
TEST_CASE ("queue non neg prefix sum"){
    queue <int> q= get_ints_from_file2("input.txt");
    int array2_len = q.size();
    int array2_for_prefix_sum[array2_len];

    int position2=0;
    while (!q.empty()){
        array2_for_prefix_sum[position2++]= q.front();
        q.pop();
    }
    CHECK_EQ (non_negative_prefix(array2_for_prefix_sum,array2_len), true);
}

TEST_CASE ("queue neg prefix sum"){
    queue <int> q2= get_ints_from_file2("input2.txt");
    int array4_len = q2.size();
    int array4_for_prefix_sum[array4_len];

    int position4=0;
    while (!q2.empty()){
        array4_for_prefix_sum[position4++]= q2.front();
        q2.pop();
    }
    CHECK_EQ (non_negative_prefix(array4_for_prefix_sum,array4_len), false);
}