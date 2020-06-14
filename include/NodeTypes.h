#ifndef _NODE_TYPES_H
#define _NODE_TYPES_H

#include <stdint.h>

#define STRUCT_TYPE_EMPTY_DEVICE 0x00

typedef struct empty_device_t
{
    uint8_t stype = STRUCT_TYPE_EMPTY_DEVICE;

    uint8_t battery = 0;
} empty_device_t;

#endif
