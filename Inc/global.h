/*
 * global.h
 *
 *  Created on: Feb 21, 2018
 *      
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_

#include "cmsis_os.h"

#define NORMAL_USE

#define STATE_INIT              0
#define STATE_CABLE_OK          1
#define STATE_NO_CABLE          2
#define STATE_IP                4
#define STATE_EXTERNAL_PING_OK  8
#define STATE_EXTERNAL_PING_KO 16
#define STATE_INTERNAL_PING_OK 32
#define STATE_INTERNAL_PING_KO 64
#define STATE_RESTART_INTERNAL 128
#define STATE_RESTART_EXTERNAL 256

extern uint16_t gstate;
extern SemaphoreHandle_t gstate_mutex;
extern void gstateSet(SemaphoreHandle_t s, uint16_t v);
extern void gstateAdd(SemaphoreHandle_t s, uint16_t v);
extern void gstateRm(SemaphoreHandle_t s, uint16_t v);

#endif /* GLOBAL_H_ */
