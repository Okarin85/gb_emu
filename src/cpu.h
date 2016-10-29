#pragma once

void startup(void);
void request_interrupt(uint8_t type);
int cpu_exec(void *ptr);
int disas_one(uint16_t pc);

#define INT_VBLANK 0x1
#define INT_LCDSTAT 0x2
#define INT_TIMER 0x4
#define INT_SERIAL 0x8
#define INT_JOYPAD 0x10
