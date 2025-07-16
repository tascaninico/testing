#include <stdint.h>

#define GPIO_PIN "60"  // Use a suitable GPIO pin from P8 or P9 headers
#define GPIO_PATH "/sys/class/gpio"

void delayMicroseconds(unsigned int us);

void gpio_export(const char *pin);

void gpio_direction(const char *pin, const char *direction);

void gpio_write(const char *pin, int value);

int gpio_read(const char *pin);

int wait_level(const char *pin, int level, int timeout_us);

int read_sensor_data(uint8_t *data);

void print_readings(uint8_t *data);