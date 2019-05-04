
#include <Keypad.h>
#include "pitches.h"

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
        {'1','2','3','A'},
        {'4','5','6','B'},
        {'7','8','9','C'},
        {'*','0','#','D'}
        };
byte rowPins[ROWS] = {2,3,4,5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6,7,8,9}; //connect to the column pinouts of the keypad

Keypad customKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
byte ledPin = 13; 

void setup() {
  
 Serial.begin(9600);
 pinMode(11,OUTPUT);
  

}
void loop(){
  char customKey = customKeypad.getKey();



  if (customKey=='1'){
Serial.println("1 selected");
tone(11,NOTE_C3,1000);
delay(1000);
noTone(11);
  }
  else if(customKey=='2'){
  Serial.println("2 selected");
  tone(11,NOTE_D3,1000);
delay(1000);
  }
  else if(customKey=='3'){
  Serial.println("3 selected");
  tone(11,NOTE_E3,1000);
delay(1000);
  }
  else if(customKey=='A'){
  Serial.println("A selected");
  tone(11,NOTE_F3,1000);
delay(1000);
  }
  else if(customKey=='4'){
  Serial.println("4 selected");
  tone(11,NOTE_G3,1000);
delay(1000);
  }
  else if(customKey=='5'){
  Serial.println("5 selected");
  tone(11,NOTE_A3,1000);
delay(1000);
  }
  else if(customKey=='6'){
  Serial.println("6 selected");
  tone(11,NOTE_B3,1000);
delay(1000);
  }
  else if(customKey=='B'){
  Serial.println("B selected");
  tone(11,NOTE_C4,1000);
delay(1000);
  }
  else if(customKey=='7'){
  Serial.println("7 selected");
  tone(11,NOTE_G3,1000);
delay(1000);
  }
  else if(customKey=='8'){
  Serial.println("8 selected");
  tone(11,NOTE_A3,1000);
delay(1000);
  }
  else if(customKey=='9'){
  Serial.println("9 selected");
  tone(11,NOTE_B3,1000);
delay(1000);
  }
  else if(customKey=='C'){
  Serial.println("C selected");
  tone(11,NOTE_C4,1000);
delay(1000);
  }
  else if(customKey=='*'){
  Serial.println("* selected");
  tone(11,NOTE_D4,1000);
delay(1000);
  }
  else if(customKey=='0'){
  Serial.println("0 selected");
  tone(11,NOTE_E4,1000);
delay(1000);
  }
  else if(customKey=='#'){
  Serial.println("# selected");
  tone(11,NOTE_FS4,1000);
delay(1000);
  }
  else if(customKey=='D'){
  Serial.println("D selected");
  tone(11,NOTE_G4,1000);
delay(1000);
  }

}


