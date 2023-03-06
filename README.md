# Module 1 README

as i 
sit/stand/walk
here

as it 
shines/rains/snows
here

as i’m
smiley/meh/uneasy
here

my ears
dance to
[ ]

**This project will require a:** 
- ESP32 TTGO T-Display
- A battery or power source (preferably with a USB-C connector)
- A USB-C cable

To run the software, you will need to download the Arduino IDE compatible with your device

To connect the TTGO display to your computer, you will need a USB-C cable that can transfer data, not only for charging purposes

**For installation purposes, these are the general steps:**
1. Once you have Arduino IDE open, and an example patch up on your screen, go to <File>, <Preferences>, and add this link into the “Additional Boards Manager URLs” section as a new line
2. Go to <Tools>, <Board>, <ESP32 Arduino>, and then select the “TTGO T1” option
3. Go to <Tools>, <Manage Libraries>, and install “tft_eSPI” by “Bodmer”
4. Go to where your libraries are stored on your computer, and look for the “TFT_eSPI” folder, and open up the User_Setup_Select.h file
    a. Comment out the line “#include <User_Setup.h>”
    b. Uncomment the line “#include <User_Setups/Setup25_TTGO_T_Display.h>”
5. Once saved, depending on your computer’s software, you should be able to upload code to your device
  
**To test some example code:**
Go to <Edit>, <Examples>, <TFT_eSPI>, <160x128>, and choose any example to upload onto your ESP32 display
Remember to choose the board “TTGO T1” and port “/dev/cu.wchusbserial….”

These are some resources that will help, as some may work with some devices and some not:
Download this driver: http://www.wch.cn/downloads/CH34XSER_MAC_ZIP.html
It may fix the absence of 2 ports for connection for those on more recent MacOS software


