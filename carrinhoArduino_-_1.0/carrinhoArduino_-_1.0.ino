//Nomes: Felipe - Geovanne - Nickolas - Victor
//RA:    152799    185335     185823    191068

// DEFINIÇÕES DE PINOS
#define pinSensorEsq A0
#define pinSensorMaisEsq A1
#define pinSensorDir A2
#define pinSensorMaisDir A3
#define motorEsq 5
#define motorDir 6


//==============================================================

void setup() {
  Serial.begin(9600);
  pinMode(pinSensorEsq, INPUT);
  pinMode(pinSensorMaisEsq, INPUT);
  pinMode(pinSensorDir, INPUT);
  pinMode(pinSensorMaisDir, INPUT);
  pinMode(motorEsq, OUTPUT);
  pinMode(motorDir, OUTPUT);
  analogWrite(motorEsq, 125);
  analogWrite(motorDir, 125);
}

//==============================================================

void loop() {
  if (analogRead(pinSensorDir) <= 500 && analogRead(pinSensorEsq) <= 500 && analogRead(pinSensorMaisDir) <= 500 && analogRead(pinSensorMaisEsq) <= 500)
  {
    analogWrite(motorDir, 135);
    analogWrite(motorEsq, 135);
  }
  else if (analogRead(pinSensorEsq) >= 500)
  {
    analogWrite(motorDir, 145);
    analogWrite(motorEsq, 15); 
  }
  else if (analogRead(pinSensorDir) >= 500)
  {
    analogWrite(motorDir, 15);
    analogWrite(motorEsq, 145);
  }
  else if (analogRead(pinSensorMaisEsq) >= 500)
  {
    analogWrite(motorDir, 145);
    analogWrite(motorEsq, 22);
    //delay(200);
  }
  else if (analogRead(pinSensorMaisDir) >= 500)
  {
    analogWrite(motorDir, 22);
    analogWrite(motorEsq, 145); 
    //delay(200);
  }
}

//==============================================================
