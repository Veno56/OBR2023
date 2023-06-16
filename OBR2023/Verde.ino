void verde(){
  robot_stop(0);
  leitura_cores(); // Chama a rotina que le as cores
  delay(1500);
  Serial.println(verdeE);
  Serial.println(verdeD);
  Sensor3 = digitalRead(pin_S3); //Esq 
  Sensor2 = digitalRead(pin_S2); //Dir
  if ((verdeE > 30)&&(Sensor3 == 1)){
    Serial.println(" VERDE ESQUERDA");
    robot_forward(255);
    delay(150);
    robot_right(255);
    delay(750);
  }
     
  if ((verdeD > 30)&&(Sensor2 == 1)){
    Serial.println("VERDE DIREITA");
    robot_forward(255);
    delay(150);
    robot_left(255);
    delay(750);
  }
  if((verdeE > 30)&&(Sensor3 == 1)&&(verdeD > 30)&&(Sensor2 == 1)){
    Serial.println("VERDE RETORNA");
    robot_left(255);
    delay(1000);
  }
}

// Rotina que le o valor das cores
void leitura_cores(){
  
  digitalWrite(S3, HIGH); // PINO S3 em nivel alto  
  digitalWrite(S2, HIGH); // Pino S2 em nivel alto

  if(digitalRead(sensorOut_D) == HIGH){ // Verifica o nivel logico no pino OUT do sensor
    verdeD = pulseIn(sensorOut_D, LOW); // Le duracao do pulso na saida
  } else {
    verdeD = pulseIn(sensorOut_D, HIGH); // Le duracao do pulso na saida
  }


  //ESQUERDA/////////////////////////////////////////////////////////###################################################################


  digitalWrite(S7, HIGH); // PINO S3 em nivel alto    
  digitalWrite(S6, HIGH); // Pino S2 em nivel alto

  if(digitalRead(sensorOut_E) == HIGH){ // Verifica o nivel logico no pino OUT do sensor
    verdeE = pulseIn(sensorOut_E, LOW); // Le duracao do pulso na saida
  } else {
    verdeE = pulseIn(sensorOut_E, HIGH); // Le duracao do pulso na saida
  }
  
}