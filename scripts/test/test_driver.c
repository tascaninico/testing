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

void test_gpio_export_SHOULD_NOT_attempt_to_write_data_IF_file_doesnt_exist(void) // homework: two tests functions: test_gpio_export(void) with fail and succssed
                                // homework: test print_readings() (int main());
                            // to learn how to start Docker with the right user (to prevent access problems)
{
    char *test = "hello world";
//given:
    open_fake.return_val = -1;

// when (when gpio_export() is called, the file is not opened)

    gpio_export(test);
// then:
    TEST_ASSERT_NOT_CALLED(write);
    TEST_ASSERT_NOT_CALLED(close);
}

void test_gpio_export_SHOULD_write_data_in_IF_file_exists(void)
{
    char *test = "hello world";
// given:
    open_fake.return_val = 1;

// when (when gpio_export() is called, the file is successfully opened)
    gpio_export(test);
// then:

    TEST_ASSERT_CALLED(open);
    TEST_ASSERT_CALLED(write);
    TEST_ASSERT_CALLED(close);
}


void test_print_readings(void)
{
    uint8_t data[]  = {0, 0, 0, 0, 0};
//when:
    print_readings(data);

}