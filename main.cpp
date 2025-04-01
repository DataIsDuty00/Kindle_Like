#include <GxEPD.h>
#include <GxGDE0213B72B/GxGDE0213B72B.h>  // Include the e-ink display library
#include <Adafruit_GFX.h>    // Include the graphics library

// Pin definitions
#define RST_PIN 16
#define DC_PIN 17
#define CS_PIN 5
#define BUSY_PIN 4

// Create display object
GxIO_Class io(SPI, CS_PIN, DC_PIN, RST_PIN);
GxEPD_Class display(io, RST_PIN, BUSY_PIN);

void setup() {
  // Initialize the display
  display.init();
  
  // Clear the display
  display.fillScreen(GxEPD_WHITE);
  display.update();
  
  // Set text properties
  display.setTextColor(GxEPD_BLACK);
  display.setTextSize(2);
  
  // Display a message
  display.setCursor(10, 50);
  display.print("Hello, ESP32!");
  display.update();
}

void loop() {
  // Add your main code here
}
