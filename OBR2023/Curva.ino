 void Curva90(){
  Sensor3 = digitalRead(pin_S3); //Esq 
  Sensor2 = digitalRead(pin_S2); //Dir
 
  if ((Sensor2 == 1) && (Sensor3 == 0)) { // Se detectar um lado preto e o outro branco
    Serial.println("DIR Curva de 90");
    verde();
    robot_forward(255);
    delay(100);
    robot_stop(0);
    delay(200);//tomar cuidado 
    SensorC1 = digitalRead(pin_S1);
    SensorC2 = digitalRead(pin_S0);
    if((SensorC1==1)||(SensorC2==1)){
      robot_forward(255);
      delay(400);
    }
    else{
      robot_forward(255);
      delay(100);
      while((SensorC1==0)||(SensorC2==0)){
      SensorC1 = digitalRead(pin_S1);
      SensorC2 = digitalRead(pin_S0);
      robot_left(255);// para Direita
      delay(50);
      }
      
    } 
  }
  if ((Sensor2 == 0) && (Sensor3 == 1)) { // Se detectar um lado branco e o outro preto
    Serial.println("ESQ Curva de 90");
    verde();
    robot_forward(255);
    delay(100);
    robot_stop(0);
    delay(200);//tomar cuidado 
    SensorC1 = digitalRead(pin_S1);
    SensorC2 = digitalRead(pin_S0);
    if((SensorC1==1)||(SensorC2==1)){
      robot_forward(255);
      delay(400);
    }
    else{
      robot_forward(255);
      delay(100);
      while((SensorC1==0)||(SensorC2==0)){
      SensorC1 = digitalRead(pin_S1);
      SensorC2 = digitalRead(pin_S0);
      robot_right(255);// para Esquerda
      delay(50);
      }
    } 
  }
   
if ((Sensor3 == 1) && (Sensor2 == 1)) { //Se detectar na extremidade das faixas duas cores pretas
     robot_forward(255); //Para frente/Verificar Encruzilhada
     delay(50);
    if ((SensorC1 == 0) || (SensorC2 == 0)){ //fica esperto qq coisa inverte 1 
    Serial.println("BECO");
    delay(25);
    robot_right(255);
    delay(1500);
    robot_forward(255);// para Frente
    delay(100);
       }
    else{
      robot_forward(255);// para Frente
      delay(100);
      Serial.println("ENCU");
    }
   }
}