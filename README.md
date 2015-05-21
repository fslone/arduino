#Arduino Microcontroller Sketches#
*Example .ino code files for basic to intermediate level control of the Arduino microcontroller*

**Requires: Arduino v1.0+**


The `.ino` files contained within have been tested on Arduino *Uno* and *Duemilanove* model controllers, but the source code may have slight variations across the different Arduino models and their different pin configurations. 


##Included In This Repo:##

**Arduino.cc**

This set of `.ino` sketches were taken from the Arduino Project's website @ Arduino.cc:

*All Official Project Examples:*

    http://arduino.cc/en/Tutorial/HomePage

Contained within this repository are select examples taken from that full list, with each chosen for its simplicity and demonstration of key basic principles. Several fundamental elements of Arduino control are showcased within these examples, and also provide a clear introduction into the syntax of `Wiring`, the native language for Arduino projects, written and run within the official `Processing IDE`. All examples can either be run via the Processing IDE, with the microcontroller attached via a USB cable, or the code may be uploaded to the Arduino's flash memory and run as a standalone, pre-programmed device.

*Directories In Arduino.cc:*

    Arduino/Analog
    Arduino/Basics
    Arduino/Communication
    Arduino/Control\ Structures
    Arduino/Digital
    Arduino/Display
    Arduino/Sensors
    Arduino/Strings


**96 LED Cube [dev branch]**

Located on the dev branch is an LED light cube project that is still under development. The cube, consisting of six 4 x 4 LED light panels, demonstrates the ability to create light animations via timing and control of digital I/O pin states. 

With only 96 lights, this cube is an example of `multiplexing` and relatively simple from an electrical wiring standpoint. Larger scale light demonstrations can be created through the use of the `charlieplexing` system of wiring the device, allowing an Arduino's small number of analog and digital I/O pins to drive a much larger LED light array via a system of `tri-state logic`.


+ *Charlieplexing on Wikipedia:*

    http://en.wikipedia.org/wiki/Charlieplexing


+ *Video: LED Array Utilizing Charlieplexing*

    http://www.youtube.com/watch?v=6mXM-oGggrM


+ *Explanation of the Charlieplexing Theory:*

    http://www.instructables.com/id/Charlieplexing-LEDs--The-theory/






