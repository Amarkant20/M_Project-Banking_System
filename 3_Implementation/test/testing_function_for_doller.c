/**
 * @file testing_function_for_doller.c
 * @author Amar kant sonkar
 * @brief 
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "unity/unity.h"
#include "assert.h"
#include "function_for_doller.h"

/*required by the unity test framework*/
void setUp()
{

}
void tearDown()
{

}
void testing_function_for_doller_exchange(void)
{
    int f1 = 500, f2 = 75;
    TEST_ASSERT_EQUAL(6.8, d(f1,f2));
    
}
void testing_function_for_euro_exchange(void)
{
    int l1 = 500, l2 = 87;
    TEST_ASSERT_EQUAL(5.7, e(l1,l2));
    
    
}

int main(void)
{   
    /*required by the unity test framework*/
    UNITY_BEGIN();
    /*required by the unity test framework*/
    RUN_TEST(testing_function_for_doller_exchange);
    RUN_TEST(testing_function_for_euro_exchange);
    /*required by the unity test framework*/
    return UNITY_END();
}
