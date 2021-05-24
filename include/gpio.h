#ifndef BOOTROM_GPIO
#define BOOTROM_GPIO

struct gpio_regs {
	int ip_info[4];
	int data_in;
	int data_out;
	int dir_en;
};

//int GPIO_init(void);
unsigned int gpio_value_get(unsigned int pin);
void gpio_value_set(unsigned int pin);
void gpio_value_clr(unsigned int pin);

void gpio_dir_set(unsigned int pin);
void gpio_dir_clr(unsigned int pin);

#endif
