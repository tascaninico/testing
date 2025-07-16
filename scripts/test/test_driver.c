#include <stdio.h>
#include <unity.h>
#include <stdbool.h>

TEST_FILE("driver_c.c");

void test_blank(void){
    printf("test_blank\n");
    //TEST_FAIL();
    TEST_ASSERT_TRUE(true);
}