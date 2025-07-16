#include <stdint.h>
#include "driver.h"

int main(){
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