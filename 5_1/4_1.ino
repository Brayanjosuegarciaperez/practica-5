#include <Keypad.h>
#define FILAS 4
#define COLUMNAS 4
#define a 22
#define b 24
#define c 26
#define d 28
#define e 30
#define f 32
#define g 34
#define salida(pin)pinMode(pin,OUTPUT)
#define off(pin)digitalWrite(pin,LOW)
#define on(pin)digitalWrite(pin,HIGH)


char keys[FILAS][COLUMNAS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

char key;
byte Filas[FILAS]={11,10,9,8};
byte Columnas[COLUMNAS] = {7,6,5,4};

Keypad teclado = Keypad(makeKeymap(keys),Filas, Columnas,FILAS,COLUMNAS);

void setup()
{
 Serial.begin(9600);
 salida(22); 
 salida(24);
 salida(26);
 salida(28);
 salida(30);
 salida(32);
 salida(34);
}

void loop(){
  key = teclado.getKey();
  
  if(key){
  }

  switch(key){
  case '1':
  off(22);
  on(24);
  on(26);
  off(28);
  off(30);
  off(32);
  off(34);
  delay(10);
   break;
  
   
  case '2':
    on(22);
   on(24);
   off(26);
   on(28);
   on(30);
   off(32);
   on(34);
   break;
   
  
  case '3':
   on(22);
   on(24);
   on(26);
   on(28);
   off(30);
   off(32);
   on(34);
    break;
    
  case '4':
   off(22);
   on(24);
   on(26);
   off(28);
   off(30);
   on(32);
   on(34);
    break;
  
  case '5':
   on(22);
   off(24);
   on(26);
   on(28);
   off(30);
   on(32);
   on(34);
    break;
    

  case '6':
   on(22);
   off(24);
   on(26);
   on(28);
   on(30);
   on(32);
   on(34);
    break;
    
  case '7':
   on(22);
   on(24);
   on(26);
   off(28);
   off(30);
   off(32);
   off(34);
    break;
    
  case '8':
   on(22);
   on(24);
   on(26);
   on(28);
   on(30);
   on(32);
   on(34);
    break;
  
  case '9':
   on(22);
   on(24);
   on(26);
   on(28);
   off(30);
   on(32);
   on(34);
 
    break;
    

  case '0':
   on(22);
   on(24);
   on(26);
   on(28);
   on(30);
   on(32);
   off(34);
    break;
    

    case 'A':
     on(22);
   on(24);
   on(26);
   off(28);
   on(30);
   on(32);
   on(34);
    break;
    

    case 'B':
   off(22);
   off(24);
   on(26);
   on(28);
   on(30);
   on(32);
   on(34);
    break;
     

    case 'C':
     on(22);
   off(24);
   off(26);
   on(28);
   on(30);
   on(32);
   off(34);
    break;
     

    case 'D':
   off(22);
   on(24);
   on(26);
   on(28);
   on(30);
   off(32);
   on(34);
    break;
     

    case '*':
     on(22);
   off(24);
   off(26);
   off(28);
   on(30);
   on(32);
   on(34);
    break;
     

    case '#':
     on(22);
   off(24);
   off(26);
   on(28);
   on(30);
   on(32);
   on(34);
    break;


  }
}