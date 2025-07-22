#include <fff.h>

#include <stdio.h>
#include <unity.h>
#include <stdbool.h>

#include "driver.h"

#include "mock_sys_interface.h" //we need to include mock_<header> for open() from gpio_export() 
                        //so we could manipulate whether open() is finnishe successfully or faily  


TEST_FILE("driver.c");

void test_blank(void)
{
    printf("test_blank\n");
    //TEST_FAIL();
    TEST_ASSERT_TRUE(true);
}

void test_gpio_export(void) // homework: two tests functions: test_gpio_export(void) with fail and succssed
                            // homework: test printf() (in main());
                            // to learn how to start Docker with the right user (to prevent access problems)
{
//given:

// when (when gpio_export() is called, the file is successfully opened)

    
    char *test = "hello world";
    open_fake.return_val = 0;

    gpio_export(test);
    gpio_export(test);
// then: 
    TEST_ASSERT_NOT_CALLED(write);
}