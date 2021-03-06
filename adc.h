

#ifndef ADC_H
#define ADC_H

#include <avr/io.h>

void adc_init(const uint8_t ex, const ADC_PRESCALER_t prescl);

void adc_init_autoPrescale(const uint8_t ex);

void adc_start(void);
void adc_stop(void);

#endif /* ADC_H */
