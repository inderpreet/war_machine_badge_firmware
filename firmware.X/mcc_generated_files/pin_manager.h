/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16F15324
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
        MPLAB 	          :  MPLAB X 5.40	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set g1 aliases
#define g1_TRIS                 TRISAbits.TRISA2
#define g1_LAT                  LATAbits.LATA2
#define g1_PORT                 PORTAbits.RA2
#define g1_WPU                  WPUAbits.WPUA2
#define g1_OD                   ODCONAbits.ODCA2
#define g1_ANS                  ANSELAbits.ANSA2
#define g1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define g1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define g1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define g1_GetValue()           PORTAbits.RA2
#define g1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define g1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define g1_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define g1_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define g1_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define g1_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define g1_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define g1_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set g2 aliases
#define g2_TRIS                 TRISAbits.TRISA4
#define g2_LAT                  LATAbits.LATA4
#define g2_PORT                 PORTAbits.RA4
#define g2_WPU                  WPUAbits.WPUA4
#define g2_OD                   ODCONAbits.ODCA4
#define g2_ANS                  ANSELAbits.ANSA4
#define g2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define g2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define g2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define g2_GetValue()           PORTAbits.RA4
#define g2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define g2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define g2_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define g2_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define g2_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define g2_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define g2_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define g2_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set g3 aliases
#define g3_TRIS                 TRISAbits.TRISA5
#define g3_LAT                  LATAbits.LATA5
#define g3_PORT                 PORTAbits.RA5
#define g3_WPU                  WPUAbits.WPUA5
#define g3_OD                   ODCONAbits.ODCA5
#define g3_ANS                  ANSELAbits.ANSA5
#define g3_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define g3_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define g3_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define g3_GetValue()           PORTAbits.RA5
#define g3_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define g3_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define g3_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define g3_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define g3_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define g3_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define g3_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define g3_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set g4 aliases
#define g4_TRIS                 TRISCbits.TRISC2
#define g4_LAT                  LATCbits.LATC2
#define g4_PORT                 PORTCbits.RC2
#define g4_WPU                  WPUCbits.WPUC2
#define g4_OD                   ODCONCbits.ODCC2
#define g4_ANS                  ANSELCbits.ANSC2
#define g4_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define g4_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define g4_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define g4_GetValue()           PORTCbits.RC2
#define g4_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define g4_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define g4_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define g4_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define g4_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define g4_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define g4_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define g4_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set EYE1 aliases
#define EYE1_TRIS                 TRISCbits.TRISC3
#define EYE1_LAT                  LATCbits.LATC3
#define EYE1_PORT                 PORTCbits.RC3
#define EYE1_WPU                  WPUCbits.WPUC3
#define EYE1_OD                   ODCONCbits.ODCC3
#define EYE1_ANS                  ANSELCbits.ANSC3
#define EYE1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define EYE1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define EYE1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define EYE1_GetValue()           PORTCbits.RC3
#define EYE1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define EYE1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define EYE1_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define EYE1_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define EYE1_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define EYE1_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define EYE1_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define EYE1_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_WPU                  WPUCbits.WPUC4
#define IO_RC4_OD                   ODCONCbits.ODCC4
#define IO_RC4_ANS                  ANSELCbits.ANSC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IO_RC4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IO_RC4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define IO_RC4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define IO_RC4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define IO_RC4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define IO_RC4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set EYE2 aliases
#define EYE2_TRIS                 TRISCbits.TRISC5
#define EYE2_LAT                  LATCbits.LATC5
#define EYE2_PORT                 PORTCbits.RC5
#define EYE2_WPU                  WPUCbits.WPUC5
#define EYE2_OD                   ODCONCbits.ODCC5
#define EYE2_ANS                  ANSELCbits.ANSC5
#define EYE2_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define EYE2_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define EYE2_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define EYE2_GetValue()           PORTCbits.RC5
#define EYE2_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define EYE2_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define EYE2_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define EYE2_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define EYE2_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define EYE2_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define EYE2_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define EYE2_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/