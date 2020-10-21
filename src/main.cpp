#include "SPI.h"

//! There are three versions of the 2.13 screen,
//  if you are not sure which version, please test each one,
//  if it is successful then it belongs to the model of the file name
//  关于v2.3版本的显示屏版本,如果不确定购买的显示屏型号,请每个头文件都测试一遍.

#include <GxGDE0213B72B/GxGDE0213B72B.h>  // 2.13" b/w new panel

// FreeFonts from Adafruit_GFX
#include <Fonts/FreeMonoBold9pt7b.h>

#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>

#include "strategies.h"

#define SPI_MOSI 23
#define SPI_MISO -1
#define SPI_CLK 18

#define ELINK_SS 5
#define ELINK_BUSY 4
#define ELINK_RESET 16
#define ELINK_DC 17

#define BUTTON_PIN 39


GxIO_Class io(SPI, /*CS=5*/ ELINK_SS, /*DC=*/ ELINK_DC, /*RST=*/ ELINK_RESET);
GxEPD_Class display(io, /*RST=*/ ELINK_RESET, /*BUSY=*/ ELINK_BUSY);

void setup()
{
    // get random oblique strategy
    int index = random(sizeof(oblique) / sizeof(oblique[0]));

    Serial.begin(115200);
    Serial.println();
    Serial.println("setup");
 
    SPI.begin(SPI_CLK, SPI_MISO, SPI_MOSI, ELINK_SS);
    display.init(); // enable diagnostic output on Serial

    display.setRotation(1);
    display.setFont(&FreeMonoBold9pt7b);
    display.fillScreen(GxEPD_WHITE);
    display.setTextColor(GxEPD_BLACK);

    int16_t tbx, tby; uint16_t tbw, tbh;
    display.getTextBounds(oblique[index], 0, 0, &tbx, &tby, &tbw, &tbh);
    uint16_t x = ((display.width() - tbw) / 2) - tbx;
    uint16_t y = ((display.height() - tbh) / 2) - tby;

    display.setCursor(x, y);
    display.print(oblique[index]);
    display.update();

    // goto sleep
    esp_sleep_enable_ext0_wakeup((gpio_num_t)BUTTON_PIN, LOW);
    esp_deep_sleep_start();
}


void loop()
{
}