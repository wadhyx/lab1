#ifndef dht_h
#define dht_h

#include <stdint.h>

class dht {
public:
    int read11(uint8_t pin);
    int read22(uint8_t pin);
    double humidity;
    double temperature;

private:
    uint8_t bits[5];
    int read(uint8_t pin);
};

#endif
