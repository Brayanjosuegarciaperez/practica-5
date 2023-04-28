#include <Adafruit_NeoPixel.h>
#include <Keypad.h>
#include <Servo.h>
#define tiempo() delay(1500)
#define FILAS 4
#define COLUMNAS 4

Adafruit_NeoPixel tira = Adafruit_NeoPixel(7,2);

char keys[FILAS][COLUMNAS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

char key;
byte Filas[FILAS]={12,11,10,9};
byte Columnas[COLUMNAS] = {8,7,6,5};

Keypad teclado = Keypad(makeKeymap(keys),Filas, Columnas,FILAS,COLUMNAS);

Servo servo;

void setup() {
 
  Serial.begin(9600);
  tira.begin();
  tira.show();
  servo.attach(13);

}

void loop() {

  key = teclado.getKey();

  if(key){
  Serial.println(key);
  }else{
    tira.clear();
  }
  switch(key){
    case '0':
      servo.write(0);
      tiempo();
    break;

    case '1':
      servo.write(20);
      tiempo();
    break;

    case '2':
      servo.write(40);
      tiempo();
    break;

    case '3':
      servo.write(60);
      tiempo();
    break;

    case '4':
      servo.write(80);
      tiempo();
    break;

    case '5':
      servo.write(100);
      tiempo();
    break;

    case '6':
      servo.write(120);
      tiempo();
    break;

    case '7':
      servo.write(140);
      tiempo();
    break;

    case '8':
      servo.write(160);
      tiempo();
    break;

    case '9':
      servo.write(180);
      tiempo();
    break;

    case 'A':
      for(int i = 0; i<12; i = i+2 ){
        tira.setBrightness(100);
        tira.setPixelColor(i, 138,43,226);
       tira.show();
        delay(100);
      }
    break;

    case 'B':
      for(int i = 0; i<12; i++) {
        tira.setBrightness(100);
        tira.setPixelColor(i, 100,201,90);
        tira.show();
       delay(100);
     }
    break;

    case 'C':
     for(int i = 12; i>=-1; i = i-2) {
       tira.setBrightness(100);
        tira.setPixelColor(i, 255, 240, 245);
       tira.show();
       delay(100);
     } 
    break;

    case 'D':
      for(int i = 0; i<12; i++) {
       tira.setBrightness(100);
        tira.setPixelColor(i, 240, 255, 240);
        tira.show();
       delay(100);
     }
    break;

    case '*' :
      for(int i=0;i<12 ;i++){
          tira.setBrightness(100);
          tira.setPixelColor(i, 128, 128, 128);
          tira.show();
          delay(100);
      }
    break;

    case '#':
      for(int i = 0; i<12; i = i+2 ){
       tira.setBrightness(100);
       tira.setPixelColor(i, 230,250,5);
       tira.show();
        delay(100);
      }
    break;
}

}