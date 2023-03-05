#include <TFT_eSPI.h>
#include <SPI.h>
//defines custom colors
#define TFT_0Y 0xE6ED
#define TFT_0O 0xE54D
#define TFT_0G 0x7E30
#define TFT_0B 0x953C
#define TFT_0PU 0x9C1B
#define TFT_0PI 0xE458

TFT_eSPI tft = TFT_eSPI();

void setup(void) {
  tft.init();
  //rotates screen to be horizontal
  tft.setRotation(1);
}

void loop() {
  tft.setTextSize(2.5);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_AQUA);
  delay(1000);

//prints first screen text
  tft.drawString("as ", 0, 0, 2);
  delay(50);
  tft.drawString("i ", 35, 0, 2);
  delay(1000);
  tft.drawString("sit/", 0, 48, 2);
  delay(500);
  tft.drawString("stand/", 41, 48, 2);
  delay(500);
  tft.drawString("walk", 119, 48, 2);
  delay(1000);
  tft.drawString("here", 0, 96, 2);
  delay(1000);

//prints second screen text
  tft.fillScreen(TFT_BLACK);
  delay(1250);
  tft.drawString("as ", 0, 0, 2); 
  delay(500);
  tft.drawString("it ", 35, 0, 2);
  delay(1000);
  tft.drawString("shines/", 0, 48, 2);
  delay(500);
  tft.drawString("rains/", 87, 48, 2);
  delay(500);
  tft.drawString("snows", 157, 48, 2);
  delay(1000);
  tft.drawString("here", 0, 96, 2);
  delay(1000);

//prints third screen text
  tft.fillScreen(TFT_BLACK);
  delay(1250);
  tft.drawString("as ", 0, 0, 2); 
  delay(500);
  tft.drawString("i'm ", 35, 0, 2);
  delay(1000);
  tft.drawString("smiley/", 0, 48, 2);
  delay(500);
  tft.drawString("meh/", 87, 48, 2);
  delay(500);
  tft.drawString("uneasy", 145, 48, 2);
  delay(1000);
  tft.drawString("here", 0, 96, 2);
  delay(1000);

//prints fourth screen text
  tft.fillScreen(TFT_BLACK);
  delay(1250);
  tft.drawString("my ", 0, 0, 2); 
  delay(500);
  tft.drawString("ears ", 45, 0, 2);
  delay(1000);
  tft.drawString("dance ", 0, 48, 2);
  delay(500);
  tft.drawString("to ", 85, 48, 2);
  delay(1000);

  int songs = rand() % 6;

//chooses a case to display based on the randomized number assigned to "songs"
  switch (songs) {
    case 0:
      tft.setTextSize(1);
      tft.setTextColor(TFT_0Y);
      tft.drawString("\"don't want to leave tonight\" - kassy", 0, 96, 1);
      break;
    case 1:
      tft.setTextSize(1);
      tft.setTextColor(TFT_0O);
      tft.drawString("\"you and me\" - james tw", 0, 96, 1);
      break;
    case 2:
      tft.setTextSize(1);
      tft.setTextColor(TFT_0G);
      tft.drawString("\"autumn morning\" - iu", 0, 96, 1);
      break;
    case 3:
      tft.setTextSize(1);
      tft.setTextColor(TFT_0B);
      tft.drawString("\"take me back in time\" - roy kim", 0, 96, 1);
      break;
    case 4:
      tft.setTextSize(1);
      tft.setTextColor(TFT_0PI);
      tft.drawString("\"urs\" - niki", 0, 96, 1);
      break;
    case 5:
      tft.setTextSize(1);
      tft.setTextColor(TFT_0PU);
      tft.drawString("\"cheers\" - mayday", 0, 96, 1);
      break;
    }
  
  delay(2250);

}
