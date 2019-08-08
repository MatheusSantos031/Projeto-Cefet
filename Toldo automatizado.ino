/*
*Projeto de automação de um toldo
* 
* 
*
* 
*/
#include <Servo.h> //A biblioteca servo está incluída.
Servo myservo;  //O objeto myservo da classe Servo é criado.

int lightSensorPin=A1; //Sensor de luz LDR conectada a entrada analgica


void setup() {
  myservo.attach(6); //Servo conectado ao pino 6
 
 }

void loop() {
int lightSensorValue=analogRead(lightSensorPin); //Nós lemos o valor do sensor e o armazenamos em uma variável
//Dependendo da luz, o toldo é implantado ou coletado
   if (lightSensorValue <= 600) {
   myservo.write(0);
  } 
  else {
   myservo.write(180);
  }
}
