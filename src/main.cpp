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
    ledcWrite(channel, 12);
    delay(500);
    ledcWrite(channel, 13);
    delay(500);
    ledcWrite(channel, 14);
    delay(500);
    ledcWrite(channel, 15);
    delay(500);    
    ledcWrite(channel, 16);
    delay(500);
    ledcWrite(channel, 17);
    delay(500);
    ledcWrite(channel, 18);
    delay(500);
    ledcWrite(channel, 19);
    delay(500);
    ledcWrite(channel, 20);
    delay(500);
    ledcWrite(channel, 21);
    delay(500);    
    ledcWrite(channel, 22);
    delay(500);
    ledcWrite(channel, 23);
    delay(500);
    ledcWrite(channel, 22);
    delay(500);
    ledcWrite(channel, 21);
    delay(500);
    ledcWrite(channel, 20);
    delay(500);
    ledcWrite(channel, 19);
    delay(500);    
    ledcWrite(channel, 18);
    delay(500);
    ledcWrite(channel, 17);
    delay(500);
    ledcWrite(channel, 16);
    delay(500);
    ledcWrite(channel, 15);
    delay(500);
    ledcWrite(channel, 14);
    delay(500);
    ledcWrite(channel, 13);
    delay(500);    
    ledcWrite(channel, 12);
    delay(500);

}