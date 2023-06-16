#include <Ultrasonic.h>
#include <AFMotor.h>
#define pin_S3 38 //Direita 90
#define pin_S2 32 //Esquerda 90
#define pin_S1 34 //Centro
#define pin_S0 36 //Centro


// Pino digital conectado ao sensor HSRO4
Ultrasonic Ultra1(37, 39);  //Frente Baixo

//SENSOR VERDE DIREITA
#define S0 22
#define S1 24
#define S2 26
#define S3 28
#define sensorOut_D 30

//SENSOR VERDE ESQUERDA
#define S4 23
#define S5 25
#define S6 27
#define S7 29
#define sensorOut_E 31

AF_DCMotor motor3(3); //Seleção do Motor 1
AF_DCMotor motor4(4); //Seleção do Motor 2
bool SensorC1 = 0;
bool SensorC2 = 0;
bool Sensor2 = 0;
bool Sensor3 = 0;
int verdeD = 0;
int verdeE = 0;
int distancia1 = 0;
int green=0;   
int green_e=0;  


void setup() {

  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
  pinMode(S5, OUTPUT);
  pinMode(S6, OUTPUT);
  pinMode(S7, OUTPUT);


  pinMode(sensorOut_D, INPUT);   // Set Sensor Verde
  pinMode(sensorOut_E, INPUT);  // Set Sensor Verde

  pinMode(pin_S3, INPUT);       //Setamos os pinos dos sensores Segue Linha
  pinMode(pin_S0, INPUT);       //Setamos os pinos dos sensores Segue Linha
  pinMode(pin_S1, INPUT);       //Setamos os pinos dos sensores Segue Linha
  pinMode(pin_S2, INPUT);       //Setamos os pinos dos sensores Segue Linha

  // Set Frequency scaling to 20%
  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);
  digitalWrite(S4, HIGH);
  digitalWrite(S5, LOW);

  // Setup Serial Monitor
 Serial.begin(9600);
  //Serial.begin(115200);

} 
void loop(){
  //SL();
  //Curva90();

  obstaculo();

}


