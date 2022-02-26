#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioPlaySdWav           playSdWav1;     
AudioMixer4              mixer1;         
AudioOutputMQS           MQS1;          
AudioConnection          patchCord1(playSdWav1, 0, mixer1, 0);
AudioConnection          patchCord5(mixer1, 0, MQS1, 0);
AudioControlSGTL5000     sgtl5000_1;    
// GUItool: end automatically generated code

int IR = 29;

#define SDCARD_CS_PIN    BUILTIN_SDCARD
#define SDCARD_MOSI_PIN  11  // not actually used
#define SDCARD_SCK_PIN   13  // not actually used


void setup() {
  pinMode(IR, INPUT);
  Serial.begin(9600);
  AudioMemory(8);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.6);
  SPI.setMOSI(SDCARD_MOSI_PIN);
  SPI.setSCK(SDCARD_SCK_PIN);
  mixer1.gain(0, 0.5);
  mixer1.gain(1, 0.5);
  delay(1000);
}

void loop() {

  if (digitalRead(IR) == LOW) {
      if (playSdWav1.isPlaying() == false) {
        playSdWav1.play("WARPPIPE.WAV");
        delay(10);
      }
  } 
}
