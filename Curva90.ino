void Curva90() {
  Sensor1 = digitalRead(pin_S1); //Extremo Esquerda
  Sensor2 = digitalRead(pin_S4); //Extremo Direita
  Sensor3 = digitalRead(pin_S0); //Centro
  Sensor4 = digitalRead(pin_S2); //Esquerda
  Sensor5 = digitalRead(pin_S3); //Direita

  if (Sensor2 == 1 && Sensor1 == 0) {
    VerdeDir();
    Serial.print("VerdeSegunda:");
    Serial.println(green);
    Serial.println(VerdeD);
    robot_forward(velocidade);// para Frente
    delay(50);
    robot_stop(0);// para Frente
    delay(3200);
    if (VerdeD == 1) {
      robot_right(255);
      delay(1250);
      robot_forward(velocidade);// para Frente
      delay(200);
      VerdeD = 0;
    }
    else {
      robot_forward(velocidade);// para Frente
      delay(600);
      robot_stop(0);// para Frente
      delay(200);
      if (Sensor3 == 1) {
        robot_forward(velocidade);// para Frente
        delay(400);
      }

      /*if(Sensor1 == 0){
          robot_forward(velocidade);// para Frente
          delay(400);
        }*/
      else {
        robot_right(255);
        delay(1250);
        robot_forward(velocidade);// para Frente
        delay(200);
      }
    }
  }
  if ((Sensor1 == 1 && (Sensor2 == 0)) { // Se detectar um lado branco e o outro preto
  VerdeEsq();
    Serial.print("VerdeEsquerda:");
    Serial.println(green_e);
    Serial.println(VerdeE);
    robot_forward(velocidade);// para Frente
    delay(50);
    robot_stop(0);// para Frente
    delay(3200);
    if (VerdeE == 1) {
      robot_left(255);
      delay(1250);
      robot_forward(velocidade);// para Frente
      delay(200);
      VerdeE = 0;
    }
    else {
      robot_forward(velocidade);// para Frente
      delay(450);
      robot_stop(0);// para Frente
      delay(200);
      if (Sensor3 == 1) {
        robot_forward(velocidade);// para Frente
        delay(450);
      }
      else {
        robot_left(255);
        delay(1250);
        robot_forward(velocidade);// para Frente
        delay(200);
      }
    }
  }
  if ((Sensor1 == 1 && (Sensor2 == 1)) {
  VerdeDir();
    VerdeEsq();
    Serial.print("VerdeSegunda:");
    Serial.println(green);
    Serial.println(VerdeD);
    Serial.print("VerdeEsquerda:");
    Serial.println(green_e);
    Serial.println(VerdeE);
    //verde direita
    if (VerdeD == 1) && (VerdeE == 0) {
      robot_forward(velocidade);// para Frente
      delay(200);
      robot_right(255);
      delay(1250);
      robot_forward(velocidade);// para Frente
      delay(200);
      VerdeD = 0;
    }
    //verde esquerda
    if (VerdeE == 1) && (VerdeD == 0) {
      robot_forward(velocidade);// para Frente
      delay(200);
      robot_left(255);
      delay(1250);
      robot_forward(velocidade);// para Frente
      delay(200);
      VerdeE = 0;
    }
    else if ((VerdeD == 1) && (VerdeE == 1) {
    robot_right(255);
      delay(2500);
      robot_forward(velocidade);// para Frente
      delay(1200);
      VerdeD = 0;
    }

  }

}
