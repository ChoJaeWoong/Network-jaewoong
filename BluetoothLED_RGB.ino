#include <SoftwareSerial.h>

#define Tx 11
#define Rx 12
#define RED 3
#define GREEN 4
#define BLUE 5


SoftwareSerial btserial(Tx,Rx);


void setup() {

  btserial.begin(9600);

}

void loop() {

  if(btserial.available() > 0) {

    int rgbdata = btserial.read();

    analogWrite(RED,0);

    analogWrite(GREEN,0);

    analogWrite(BLUE,0);



   if (rgbdata == '1') {

      analogWrite(RED,255);

      analogWrite(GREEN,255);

      analogWrite(BLUE,255);

      delay(300);

    }


    else if (rgbdata == '0') {

      analogWrite(RED,0);

      analogWrite(GREEN,0);

      analogWrite(BLUE,0);

      delay(300);

    }

  }

}
