

#ifndef DMA_H
#define DMA_H

#include <avr/io.h>

void dma_init(uint8_t *, const uint16_t);

uint8_t dma_isDone(void);
void dma_clearFlag(void);


#endif /* DMA_H */
