void obstaculo()
{
  distancia1 = Ultra1.Ranging(CM);
   Serial.println(distancia1);
  if ((distancia1 > 1) && (distancia1 < 4)) {
      Serial.println("dando ré no kibe");
      robot_backward(255);// para Frente
      delay(250);
      //CONTORNO PELA ESQUERDA
      
        robot_right(230); // para Direita
        delay(650);
        robot_forward(230);// para Frente
        delay(700);
        robot_left(230);// para Esquerda
        delay(650);
        robot_forward(230);// para Frente
        delay(1200);
        robot_left(230);// para Esquerda
        delay(650);
        robot_forward(230);// para Frente
        delay(650);
        robot_right(230); // para Direita
        delay(650); 
    }
} //fim do void