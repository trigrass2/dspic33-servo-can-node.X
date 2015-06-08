////////////////////////////////////////////////////////////////////////////////
///
/// @file   $FILE$
/// @author $AUTHOR$
/// @date   $DATE$
/// @brief  Source code file for defining hardware operation.   
///
////////////////////////////////////////////////////////////////////////////////

#ifndef INA219_H_
#define	INA219_H_

////////////////////////////////////////////////////////////////////////////////
/// @brief  Initialize the INA219 module.  Set the INA219 Configuration register
///         and Calibration register.
/// @param 
/// @return
////////////////////////////////////////////////////////////////////////////////
void INA219Init ( void );

////////////////////////////////////////////////////////////////////////////////
/// @brief  Service the INA219 module.  Read the current and voltage values
///         into module data.
/// @param 
/// @return
////////////////////////////////////////////////////////////////////////////////
void INA219Service ( void );

////////////////////////////////////////////////////////////////////////////////
/// @brief  Returns the current value (mA scaling) from module data.
/// @param 
/// @return
////////////////////////////////////////////////////////////////////////////////
uint16_t INA219AmpGet ( void );

////////////////////////////////////////////////////////////////////////////////
/// @brief  Returns the voltage value (mV scaling) from module data.
/// @param 
/// @return
////////////////////////////////////////////////////////////////////////////////
uint16_t INA219VoltGet ( void );

#endif	// INA219_H_

