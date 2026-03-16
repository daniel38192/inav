/*
 * Timer and peripheral mapping copied from OMNIBUSF4V3 (base variant).
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/bus.h"

timerHardware_t timerHardware[] = {
    // Motors 1-4
    DEF_TIM(TIM3,  CH3, PB0,  TIM_USE_OUTPUT_AUTO,               0, 0), // S1_OUT D1_ST7
    DEF_TIM(TIM3,  CH4, PB1,  TIM_USE_OUTPUT_AUTO,               0, 0), // S2_OUT D1_ST2
    DEF_TIM(TIM2,  CH4, PA3,  TIM_USE_OUTPUT_AUTO,               0, 1), // S3_OUT D1_ST6
    DEF_TIM(TIM2,  CH3, PA2,  TIM_USE_OUTPUT_AUTO,               0, 0), // S4_OUT D1_ST1

    // Motors 5-6
    // -- DISABLED --
    //DEF_TIM(TIM5,  CH2, PA1,  TIM_USE_OUTPUT_AUTO,               0, 0), // S5_OUT
    //DEF_TIM(TIM1,  CH1, PA8,  TIM_USE_OUTPUT_AUTO,               0, 0), // S6_OUT

    // LED strip
    DEF_TIM(TIM4,  CH1, PB6,  TIM_USE_LED,                       0, 0),

    // Inputs / PPM pads
    // PPM not used on this variant; S2_IN provided
    DEF_TIM(TIM4,  CH4, PB9,  TIM_USE_ANY,                       0, 0), // S2_IN

    // UART6 shared pads and additional inputs
    DEF_TIM(TIM8,  CH1, PC6,  TIM_USE_ANY,                       0, 0), // S3_IN, UART6_TX
    DEF_TIM(TIM8,  CH2, PC7,  TIM_USE_ANY,                       0, 0), // S4_IN, UART6_RX
    DEF_TIM(TIM8,  CH3, PC8,  TIM_USE_ANY,                       0, 0), // S5_IN
    DEF_TIM(TIM8,  CH4, PC9,  TIM_USE_ANY,                       0, 0), // S6_IN
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);
