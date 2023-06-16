void SL()
{
   SensorC1 = digitalRead(pin_S1);
   SensorC2 = digitalRead(pin_S0);
  //LEMBRETE QUE 0-LUZ LIGADA E 1-DESLIGADA
  Serial.println(Sensor2);
  Serial.println(Sensor3);
  Serial.println(SensorC1);
  Serial.println(SensorC2);
  if ((SensorC1 == 1) && (SensorC2 == 1)) { // Se detectar na extremidade das faixas duas cores brancas e Nas duas do ceentro preto
    Serial.println("CEN");
    robot_forward(200);// para Frente
    delay(5);
  }
   if ((SensorC1 == 1) && (SensorC2 == 0)) { // Se detectar na extremidade das faixas duas cores brancas e Nas duas do ceentro preto
    Serial.println("Esq");
    robot_left(190);
    // Direita
    delay(5);
  }
   if ((SensorC1 == 0) && (SensorC2 == 1)) { // Se detectar na extremidade das faixas duas cores brancas e Nas duas do ceentro preto
    Serial.println("Dir");
    robot_right(190);// Esquerda
    delay(5);
  }
  /*if ((SensorC1 == 0) && (SensorC2 == 0)) {
    Serial.println("GAP");
    robot_forward(255);// para Frente
    delay(500);
    robot_stop(0);
    delay(1000);
  }*/
} //FIM VOID
