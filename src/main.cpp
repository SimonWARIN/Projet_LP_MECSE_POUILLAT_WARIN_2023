#include <Arduino.h>

const int channel = 0;         // Canal PWM à utiliser
const int frequency = 50;    // Fréquence PWM en Hz
const int resolution = 8;      // Résolution PWM en bits (8 bits pour une sortie allant de 0 à 255)

const int pwmPin = 13;         // Broche de sortie PWM

void setup() {
  // Configuration de la bibliothèque ledc
  ledcSetup(channel, frequency, resolution);
  ledcAttachPin(pwmPin, channel);
}

void loop() {
  // Variation de la valeur du signal
  
  // Augmentation progressive de la valeur
    ledcWrite(channel, 25);
    delay(1000);
    ledcWrite(channel, 12);
    delay(1000);
}