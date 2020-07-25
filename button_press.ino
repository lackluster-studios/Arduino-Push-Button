//code for part two of my arduino tutorial: https://lacklusterstudios.blogspot.com/2020/07/arduino-tutorial.html
//when you press the push button the LED lights up.
//licensed under GPL 3.0
//Author: chris nichols (github/rteturn5)


#define LEDPIN 4     //pin which is connected to the LED
#define BTTNPIN 8  //pin which is connected to the pushbutton

void setup() {
 pinMode(LEDPIN,OUTPUT);  //set pin to output a signal
 pinMode(BTTNPIN,INPUT);  //set pin to be receive input signal

}

void loop() {
  int bttn = digitalRead(BTTNPIN);  //read the signal on pin connected to button
  if(bttn == HIGH) {            //if the button is pressed
    digitalWrite(LEDPIN,HIGH);  //set the output to HIGH on LEDPIN
  }
  else {                        //if button is not pressed
    digitalWrite(LEDPIN,LOW);   //set output to LOW on LEDPIN
  }

}
