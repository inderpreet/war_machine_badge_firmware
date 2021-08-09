/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16F15324
        Driver Version    :  2.00
 */

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
 */

#include "mcc_generated_files/mcc.h"

volatile uint8_t uState = 0;
volatile uint16_t pwm = 0;
volatile uint8_t dir = 0;

void f1() {
    g1_SetDigitalOutput();
    g1_SetHigh();

    g4_SetDigitalOutput();
    g4_SetLow();

    g3_SetDigitalInput();
}

void f2() {
    g1_SetDigitalOutput();
    g1_SetLow();

    g4_SetDigitalOutput();
    g4_SetHigh();

    g3_SetDigitalInput();
}

void f3() {
    g1_SetDigitalInput();

    g4_SetDigitalOutput();
    g4_SetHigh();

    g3_SetDigitalOutput();
    g3_SetLow();
}

void f4() {
    g1_SetDigitalInput();

    g4_SetDigitalOutput();
    g4_SetLow();

    g3_SetDigitalOutput();
    g3_SetHigh();
}

void f5() {
    g1_SetDigitalOutput();
    g1_SetLow();

    g4_SetDigitalInput();

    g3_SetDigitalOutput();
    g3_SetHigh();
}

void tim0_interrupt_handler() {
    switch (uState) {
        case 0:
            f5();
            break;
        case 1:
            f4();
            break;
        case 2:
            f3();
            break;
        case 3:
            f2();
            break;
        case 4:
            f1();
            break;
        default:
            break;
    }
    if (++uState > 4) {
        uState = 0;
    }

    PWM3_LoadDutyValue(pwm);
    if (dir == 0) {
        pwm += 50;
        if (pwm >= 620) {
            dir = 1;
        }
    } else {
        pwm -= 50;
        if (pwm < 50) {
            dir = 0;
        }
    }
}

/*
                         Main application
 */
void main(void) {
    // initialize the device
    SYSTEM_Initialize();
    TMR0_SetInterruptHandler(tim0_interrupt_handler);

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    TMR0_StartTimer();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    g2_SetLow();
    while (1) {
        // Add your application code
        EYE1_SetHigh();
        EYE2_SetHigh();
    }
}
/**
 End of File
 */