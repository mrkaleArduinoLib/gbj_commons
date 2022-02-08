<a id="library"></a>

# gbj\_commons
This is a folder with assets and resources usually implemented as include files, which almost every project can use, so that they are shared among them. Primarily they are dedicated for application libraries of projects, but some of them can be useful for hardware libraries as well.

## **config_gpio.h** - General Purpose Input Output pins mapping
This file includes constants for pin marks on microcontroller development board silk layer. It is a mapping between a development board's pin mark and microcontroller chip's <abbr title="General Purpose Input Output">GPIO</abbr> pin number for better and reliable orientation. The file contains set of pins for particular platforms individually.
Alongside pins mapping the file contains the array (list) of pin names and their functions as they are marked on datasheets.

## **config_params_gen.h** - Generic application parameters
This file includes names of generic parameters stored in flash memory. They are utilized almost in every project, especially which communicates with IoT platforms over Wifi. The names are stored in program flash memory in order to save a microcontroller's operational <abbr title="Static Random Access Memory">SRAM</abbr>.

## **config_params_temp.h** - Application temperature measurement parameter
This file includes names of generic parameters stored in flash memory for temperature measurement regardless of utilized temperature sensors. They are utilized projects, which measure and publish the temperature. The names are stored in program flash memory in order to save a microcontroller's operational <abbr title="Static Random Access Memory">SRAM</abbr>.

## **gbj_font7seg_basic.h** - Font for 7-segment digital tubes with alphanueric characters
This file includes font definition usable for displays based on 7-segment digits. The font contains all printable ASCII alpha-numeric characters with appropriate rendering with 7-segments. The font is defined as a one-dimensional array, but logically it contains a pair of bytes for each character. The first byte is an ASCII code and second one is a segment mask. The font array is stored in program flash memory in order to save a microcontroller's operational <abbr title="Static Random Access Memory">SRAM</abbr>.

## **gbj_font7seg_decnums.h** - Font for 7-segment digital tubes with decimal digits
This file includes font definition usable for displays based on 7-segment digits. The font contains only decimal digits, space, and minus sign. The decimal dot and its mapping from other delimiter signs is managed by particular library. The font is defined as a one-dimensional array, but logically it contains a pair of bytes for each character. The first byte is an ASCII code and second one is a segment mask. The font array is stored in program flash memory in order to save a microcontroller's operational <abbr title="Static Random Access Memory">SRAM</abbr>.

## **gbj_font7seg_hexnums.h** - Font for 7-segment digital tubes with hexadecimal digits
This file includes font definition usable for displays based on 7-segment digits. The font contains only decimal digits, space,  minus sign, and alphabetic characters in role of hexadecimal digits (A - F). The decimal dot and its mapping from other delimiter signs is managed by particular library. The font is defined as a one-dimensional array, but logically it contains a pair of bytes for each character. The first byte is an ASCII code and second one is a segment mask. The font array is stored in program flash memory in order to save a microcontroller's operational <abbr title="Static Random Access Memory">SRAM</abbr>.
