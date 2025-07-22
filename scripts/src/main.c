#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

#include "driver.h"

int main() {// #include errors detected. Please update your includePath. 
                //Squiggles are disabled for this translation unit 
                //(/home/nick/Projects/testing/scripts/src/driver.c).C/C++(1696)
    uint8_t data[5];

    gpio_export(GPIO_PIN);

    while (1) {
        if (read_sensor_data(data) == 0) {
            print_readings(data);
        } else {
            printf("Failed to read sensor data.\n");
        }

        sleep(2); // Must wait 2 seconds between readings
    }

    return 0;
}