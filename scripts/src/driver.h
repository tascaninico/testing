#include <stdint.h>

#define GPIO_PIN "60"  // Use a suitable GPIO pin from P8 or P9 headers
#define GPIO_PATH "/sys/class/gpio"




void gpio_export(const char *pin);

int read_sensor_data(uint8_t *data);

void print_readings(uint8_t *data);

