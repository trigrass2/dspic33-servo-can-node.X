////////////////////////////////////////////////////////////////////////////////
/// @file
/// @brief Oscillator (OSC) driver. 
////////////////////////////////////////////////////////////////////////////////

#ifndef OSC_H_
#define	OSC_H_

// *****************************************************************************
// ************************** System Include Files *****************************
// *****************************************************************************

#include <xc.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// *****************************************************************************
// ************************** User Include Files *******************************
// *****************************************************************************

// *****************************************************************************
// ************************** Defines ******************************************
// *****************************************************************************

// *****************************************************************************
// ************************** Declarations *************************************
// *****************************************************************************

// *****************************************************************************
// ************************** Function Prototypes ******************************
// *****************************************************************************

////////////////////////////////////////////////////////////////////////////////
/// @brief  Initialize OSC hardware.
///
/// @note   The function waits for the PLL to lock before exiting.  The PLL 
///         lock time (Tlock) is a maximum of 3.1ms (see datasheet).
////////////////////////////////////////////////////////////////////////////////
void OSCInit ( void );

#endif	// OSC_H_