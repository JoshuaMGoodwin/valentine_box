# valentine_box
Code for the Teensy 4.1 to power an IR sensor and speaker to run a Valentine Day box

This is the code and wiring diagram for the 3D printed Valentine Day box available via my channel on YouTube.

For this project, you will need a Teensy 4.1, an IR Obstacle Sensor, and a small speaker. You will also need to create the .wav file you want played and put it on an SD card inserted into your Teensy. The file should be named WARPPIPE.WAV unless you change it's name on line 39 of the code. 

Follow the attached wiring diagram for proper wiring. The speaker signal should be attached to pin 12 of the Teensy, and the IR sensor to pin 29. If you need to use a different pin on your Teensy, you can change line 15 of the code.

The IR obstacle sensor I used can be found at https://www.sunfounder.com/products/obstacle-avoidance-sensor?_pos=3&_sid=2dbe52e8f&_ss=r.

The speaker I used can be found at https://www.adafruit.com/product/3885.
