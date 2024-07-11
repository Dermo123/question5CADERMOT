#include "mbed.h"

DigitalIn button(PC_13); // Define the button input pin

int main() {
    int buttonPresses = 0; // Initialize the counter

    while (1) {
        if (button.read() == 0) { // Button is pressed (active low)
            buttonPresses++; // Increment the counter
            printf("Button pressed! Total presses: %d\n", buttonPresses);
         
        }
    }
}

